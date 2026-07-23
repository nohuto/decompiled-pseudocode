/*
 * XREFs of RtlFindActivationContextSectionGuid @ 0x1800BE160
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFindNextActivationContextSection @ 0x18002B440 (RtlpFindNextActivationContextSection.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18005E054 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 *     bsearch @ 0x180129D50 (bsearch.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionGuid(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PGUID GuidToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v6; // rcx
  _DWORD *p_Data1; // r12
  _PEB *ProcessEnvironmentBlock; // rax
  NTSTATUS NextActivationContextSection; // ebx
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
  __int64 cbSize; // rcx
  _ACTIVATION_CONTEXT *v25; // r15
  void (__fastcall *v26)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *); // rax
  __int64 v27; // r13
  char v28[4]; // [rsp+40h] [rbp-51h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-4Dh] BYREF
  unsigned int *v30; // [rsp+48h] [rbp-49h] BYREF
  void *Source2; // [rsp+50h] [rbp-41h]
  __int64 v32; // [rsp+58h] [rbp-39h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-31h] BYREF
  ULONG v34; // [rsp+70h] [rbp-21h]
  __int64 v35; // [rsp+74h] [rbp-1Dh]
  int v36; // [rsp+7Ch] [rbp-15h]
  unsigned int *v37; // [rsp+80h] [rbp-11h]
  __int128 Key; // [rsp+88h] [rbp-9h] BYREF
  __int64 v39; // [rsp+98h] [rbp+7h]
  int v40; // [rsp+A0h] [rbp+Fh]

  Source2 = GuidToFind;
  v6 = NtCurrentTeb();
  p_Data1 = &GuidToFind->Data1;
  v36 = 0;
  v30 = 0LL;
  ProcessEnvironmentBlock = v6->ProcessEnvironmentBlock;
  if ( !ProcessEnvironmentBlock->ActivationContextData
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v6->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v29 = 0;
  if ( !GuidToFind || (Flags & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( (Flags & 7) != 0 )
  {
    if ( !ReturnedData )
      return -1073741811;
    goto LABEL_6;
  }
  if ( ReturnedData )
  {
LABEL_6:
    if ( ReturnedData->cbSize >= 0x40 )
      goto LABEL_7;
    return -1073741811;
  }
LABEL_7:
  if ( (Flags & 2) != 0
    && &ReturnedData->AssemblyMetadata > (ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *)((char *)ReturnedData
                                                                                       + ReturnedData->cbSize) )
  {
    NextActivationContextSection = -1073741811;
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return NextActivationContextSection;
  }
  if ( (Flags & 4) != 0 && &ReturnedData[1] > (PACTCTX_SECTION_KEYED_DATA)((char *)ReturnedData + ReturnedData->cbSize) )
  {
    NextActivationContextSection = -1073741811;
    DbgPrintEx(
      0x33u,
      0,
      "SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      "RtlpFindActivationContextSection_CheckParameters",
      -1073741811);
    return NextActivationContextSection;
  }
  v33[1] = ExtensionGuid;
  v34 = SectionId;
  v33[0] = 32LL;
  v35 = 0LL;
  v32 = 0LL;
  NextActivationContextSection = RtlpFindNextActivationContextSection((__int64)v33, (int)&v30, (__int64)&v29, &v32);
  if ( NextActivationContextSection < 0 )
    return NextActivationContextSection;
  while ( 1 )
  {
    v11 = v29;
    v12 = v30;
    if ( v29 < 0x28 || *v30 != 1682469703 )
    {
      DbgPrintEx(
        0x33u,
        0,
        "RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
        v30,
        v29);
      return -1072365565;
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
      v20 = *p_Data1 % *(unsigned int *)((char *)v30 + v15);
      v21 = 0;
      v22 = (unsigned int *)((char *)&v30[2 * v20] + *(unsigned int *)((char *)v30 + v15 + 4));
      v23 = (unsigned int *)((char *)v30 + v22[1]);
      while ( 1 )
      {
        if ( v21 >= *v22 )
        {
          p_Data1 = Source2;
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
      p_Data1 = Source2;
    }
    else
    {
      v16 = v30[6];
      if ( (v30[4] & 1) == 0 )
      {
        v18 = (unsigned int *)((char *)v30 + v16);
        while ( v13 )
        {
          if ( RtlCompareMemory(v18, p_Data1, 0x10uLL) == 16 )
            goto LABEL_29;
          --v13;
          v18 += 7;
        }
        goto LABEL_30;
      }
      v17 = *(_OWORD *)p_Data1;
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
        return -1072365560;
      return NextActivationContextSection;
    }
  }
  if ( ReturnedData )
  {
    cbSize = ReturnedData->cbSize;
    ReturnedData->ulDataFormatVersion = v12[3];
    ReturnedData->lpData = (char *)v12 + (unsigned int)v18[4];
    ReturnedData->ulLength = v18[5];
    if ( &ReturnedData->ulFlags <= (ULONG *)((char *)ReturnedData + cbSize) )
      ReturnedData->ulAssemblyRosterIndex = v18[6];
  }
  v25 = (_ACTIVATION_CONTEXT *)v32;
  if ( ((v32 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL )
  {
    v26 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD, char *))(v32 + 32);
    if ( v26 )
    {
      if ( (*(_BYTE *)(v32 + 48) & 8) == 0 || (*(_BYTE *)(v32 + 80) & 8) == 0 )
      {
        v28[0] = 0;
        v26(3LL, v32, *(_QWORD *)(v32 + 24), *(_QWORD *)(v32 + 40), 0LL, v28);
        v25->SentNotifications[4] |= 8u;
        if ( v28[0] )
          v25->DisabledNotifications[4] |= 8u;
      }
    }
  }
  if ( !ReturnedData )
    return 0;
  NextActivationContextSection = RtlpFindActivationContextSection_FillOutReturnedData(
                                   Flags,
                                   (__int64)ReturnedData,
                                   v25,
                                   (__int64)v33,
                                   (__int64)v12,
                                   v12[8],
                                   v12[9],
                                   v11);
  if ( NextActivationContextSection >= 0 )
    return 0;
  return NextActivationContextSection;
}
