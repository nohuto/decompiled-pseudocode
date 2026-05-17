/*
 * XREFs of RtlFindActivationContextSectionGuid @ 0x1800C09D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180012924 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     RtlpFindNextActivationContextSection @ 0x180040ED0 (RtlpFindNextActivationContextSection.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     bsearch @ 0x180129FE0 (bsearch.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlFindActivationContextSectionGuid(int a1, __int64 a2, int a3, void *a4, unsigned int *a5)
{
  struct _TEB *v6; // rcx
  _DWORD *v7; // r12
  _PEB *ProcessEnvironmentBlock; // rax
  unsigned int NextActivationContextSection; // ebx
  int v11; // edi
  unsigned int *v12; // rbx
  unsigned int v13; // r15d
  bool v14; // dl
  __int64 v15; // r8
  __int64 v16; // rax
  __int128 v17; // xmm0
  _DWORD *v18; // r13
  int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // r12d
  unsigned int *v22; // r15
  unsigned int *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r15
  void (__fastcall *v26)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  __int64 v27; // r13
  char v28[4]; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-4Dh] BYREF
  unsigned int *v30; // [rsp+48h] [rbp-49h] BYREF
  void *Source2; // [rsp+50h] [rbp-41h]
  __int64 v32; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-31h] BYREF
  int v34; // [rsp+70h] [rbp-21h]
  __int64 v35; // [rsp+74h] [rbp-1Dh]
  int v36; // [rsp+7Ch] [rbp-15h]
  unsigned int *v37; // [rsp+80h] [rbp-11h]
  __int128 Key; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+98h] [rbp+7h]
  int v40; // [rsp+A0h] [rbp+Fh]

  Source2 = a4;
  v6 = NtCurrentTeb();
  v7 = a4;
  v36 = 0;
  v30 = 0LL;
  ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v6->ActivationContextStackPointer->ActiveFrame )
  {
    return 3222601729LL;
  }
  v29 = 0;
  if ( !a4 || (a1 & 0xFFFFFFF8) != 0 )
    return (unsigned int)-1073741811;
  if ( (a1 & 7) != 0 )
  {
    if ( !a5 )
      return (unsigned int)-1073741811;
    goto LABEL_6;
  }
  if ( a5 )
  {
LABEL_6:
    if ( *a5 >= 0x40 )
      goto LABEL_7;
    return (unsigned int)-1073741811;
  }
LABEL_7:
  if ( (a1 & 2) != 0 && a5 + 18 > (unsigned int *)((char *)a5 + *a5) )
  {
    NextActivationContextSection = -1073741811;
    DbgPrintEx(
      51,
      0,
      "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return NextActivationContextSection;
  }
  if ( (a1 & 4) != 0 && a5 + 28 > (unsigned int *)((char *)a5 + *a5) )
  {
    NextActivationContextSection = -1073741811;
    DbgPrintEx(
      51,
      0,
      "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return NextActivationContextSection;
  }
  v33[1] = a2;
  v34 = a3;
  v33[0] = 32LL;
  v35 = 0LL;
  v32 = 0LL;
  NextActivationContextSection = RtlpFindNextActivationContextSection((__int64)v33, (int)&v30, (__int64)&v29, &v32);
  if ( (NextActivationContextSection & 0x80000000) != 0 )
    return NextActivationContextSection;
  while ( 1 )
  {
    v11 = v29;
    v12 = v30;
    if ( v29 < 0x28 || *v30 != 1682469703 )
    {
      DbgPrintEx(
        51,
        0,
        "RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
        v30,
        v29);
      return (unsigned int)-1072365565;
    }
    v13 = v30[5];
    if ( !v13 )
      goto LABEL_30;
    v14 = 0;
    v15 = v30[7];
    if ( (_DWORD)v15 )
      v14 = v30[2] == 1;
    if ( v14 )
    {
      v20 = *v7 % *(unsigned int *)((char *)v30 + v15);
      v21 = 0;
      v22 = (unsigned int *)((char *)&v30[2 * v20] + *(unsigned int *)((char *)v30 + v15 + 4));
      v23 = (unsigned int *)((char *)v30 + v22[1]);
      while ( 1 )
      {
        if ( v21 >= *v22 )
        {
          v7 = Source2;
          goto LABEL_30;
        }
        v27 = *v23;
        v37 = v23 + 1;
        v18 = (unsigned int *)((char *)v12 + v27);
        if ( RtlCompareMemory(v18, Source2, 0x10uLL) == 16 )
          break;
        v23 = v37;
        ++v21;
      }
      v7 = Source2;
    }
    else
    {
      v16 = v30[6];
      if ( (v30[4] & 1) == 0 )
      {
        v18 = (unsigned int *)((char *)v30 + v16);
        while ( v13 )
        {
          if ( RtlCompareMemory(v18, v7, 0x10uLL) == 16 )
            goto LABEL_29;
          --v13;
          v18 += 7;
        }
        goto LABEL_30;
      }
      v17 = *(_OWORD *)v7;
      v39 = 0LL;
      v40 = 0;
      Key = v17;
      v18 = bsearch(&Key, (char *)v30 + v16, v13, 0x1CuLL, RtlpCompareProtectedPolicyEntry);
    }
LABEL_29:
    if ( v18 && v18[4] )
      break;
LABEL_30:
    v19 = RtlpFindNextActivationContextSection((__int64)v33, (int)&v30, (__int64)&v29, &v32);
    NextActivationContextSection = v19;
    if ( v19 < 0 )
    {
      if ( v19 == -1072365567 )
        return (unsigned int)-1072365560;
      return NextActivationContextSection;
    }
  }
  if ( a5 )
  {
    v24 = *a5;
    a5[1] = v12[3];
    *((_QWORD *)a5 + 1) = (char *)v12 + (unsigned int)v18[4];
    a5[4] = v18[5];
    if ( a5 + 17 <= (unsigned int *)((char *)a5 + v24) )
      a5[16] = v18[6];
  }
  v25 = v32;
  if ( ((v32 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
  {
    v26 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(v32 + 32);
    if ( v26 )
    {
      if ( (*(_BYTE *)(v32 + 48) & 8) == 0 || (*(_BYTE *)(v32 + 80) & 8) == 0 )
      {
        v28[0] = 0;
        v26(3LL, v32, *(_QWORD *)(v32 + 24), *(_QWORD *)(v32 + 40), 0LL, v28);
        *(_DWORD *)(v25 + 48) |= 8u;
        if ( v28[0] )
          *(_DWORD *)(v25 + 80) |= 8u;
      }
    }
  }
  if ( !a5 )
    return 0;
  NextActivationContextSection = RtlpFindActivationContextSection_FillOutReturnedData(
                                   a1,
                                   (__int64)a5,
                                   v25,
                                   (__int64)v33,
                                   (__int64)v12,
                                   v12[8],
                                   v12[9],
                                   v11);
  if ( (NextActivationContextSection & 0x80000000) == 0 )
    return 0;
  return NextActivationContextSection;
}
