/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x18002CB70
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18002E260 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     DbgPrintEx @ 0x18002B940 (DbgPrintEx.c)
 *     RtlFindActivationContextSectionString @ 0x18002C1A0 (RtlFindActivationContextSectionString.c)
 *     RtlCaptureStackBackTrace @ 0x18005BB90 (RtlCaptureStackBackTrace.c)
 *     RtlAssert @ 0x1800913D0 (RtlAssert.c)
 *     RtlFindCharInUnicodeString @ 0x180099860 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x180099CB0 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x180099E48 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800A0ECC (RtlpMoveActCtxToFreeList.c)
 *     RtlpFreeActivationContext @ 0x1800A0FF8 (RtlpFreeActivationContext.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800A131C (RtlGetAssemblyStorageRoot.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(
        _UNICODE_STRING *a1,
        char a2,
        _QWORD *a3,
        _DWORD *a4,
        unsigned __int16 *a5)
{
  volatile signed __int32 *hActCtx; // rdi
  NTSTATUS ActivationContextSectionString; // eax
  int v10; // ebx
  __int16 *v11; // rdx
  signed __int32 v12; // eax
  int v13; // esi
  _DWORD *lpData; // r15
  ULONG ulSectionTotalLength; // r13d
  unsigned __int64 v17; // r8
  unsigned int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int AssemblyStorageRoot; // eax
  char *v23; // r8
  int v24; // edx
  __int64 v25; // r9
  __int64 v26; // rcx
  const void **v27; // rdx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int16 v32; // dx
  _WORD *v33; // rcx
  unsigned __int16 v34; // dx
  __int64 v35; // rax
  int v36; // ebx
  unsigned __int16 *v37; // r13
  unsigned __int64 v38; // rcx
  int v39; // eax
  wchar_t *Buffer; // rax
  unsigned __int16 Length; // bx
  bool v42; // cf
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  void *v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int16 v47; // bx
  __int64 v48; // rdx
  NTSTATUS CharInUnicodeString; // eax
  void *v50; // rdx
  char *v51; // rax
  unsigned __int64 v52; // r8
  __int64 v53; // rcx
  size_t v54; // r8
  void *v55; // rdx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned int v58; // r10d
  int v59; // r11d
  __int64 v60; // rcx
  unsigned __int64 v61; // rax
  unsigned __int64 v62; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v65; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B0h]
  void *v68; // [rsp+58h] [rbp-A8h]
  tagACTCTX_SECTION_KEYED_DATA v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v70; // [rsp+D0h] [rbp-30h] BYREF
  void *v71; // [rsp+D8h] [rbp-28h]
  PVOID BaseAddress; // [rsp+E0h] [rbp-20h]
  __int16 *v73; // [rsp+E8h] [rbp-18h]
  __int64 v74; // [rsp+F0h] [rbp-10h]
  __int64 v75; // [rsp+F8h] [rbp-8h]
  __int16 v76; // [rsp+100h] [rbp+0h] BYREF
  int v77; // [rsp+102h] [rbp+2h]
  __int16 v78; // [rsp+106h] [rbp+6h]

  v69.cbSize = 112;
  v70 = 0x20000LL;
  v77 = 0;
  BaseAddress = &v76;
  v78 = 0;
  v73 = &v76;
  v65 = 0LL;
  memset(&v69.ulDataFormatVersion, 0, 108);
  v71 = &v76;
  hActCtx = 0LL;
  v74 = 2LL;
  v75 = 2LL;
  v76 = 0;
  StringToFind = *a1;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v69);
  v10 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v10 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v10 = 0;
    goto LABEL_4;
  }
  hActCtx = (volatile signed __int32 *)v69.hActCtx;
  if ( v69.ulLength < 0x14 || v69.ulDataFormatVersion != 1 )
  {
    v10 = -1072365565;
    goto LABEL_4;
  }
  lpData = v69.lpData;
  ulSectionTotalLength = v69.ulSectionTotalLength;
  v17 = *((unsigned int *)v69.lpData + 4);
  if ( (unsigned int)v17 > v69.ulSectionTotalLength )
    goto LABEL_85;
  v18 = *((_DWORD *)v69.lpData + 3);
  if ( v18 > 0x1FFFFFFF
    || v17 > 0xFFFFFFFF - 8 * (unsigned __int64)v18
    || (unsigned int)v17 + 8 * v18 > v69.ulSectionTotalLength )
  {
    goto LABEL_85;
  }
  v19 = *((_DWORD *)v69.lpData + 1);
  if ( (v19 & 2) != 0 )
  {
    LODWORD(Src) = 0;
    v20 = 0;
    if ( (v19 & 4) == 0 )
    {
      if ( (v69.ulFlags & 1) != 0 )
      {
        if ( (v69.ulFlags & 2) != 0 )
          RtlAssert(
            "Internal error check failed",
            "minkernel\\ntdll\\sxsisol.cpp",
            0x41Au,
            (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
        v20 = 1;
      }
      v21 = v20 | 2;
      if ( (v69.ulFlags & 2) == 0 )
        v21 = v20;
      AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                              v21,
                              v69.hActCtx,
                              v69.ulAssemblyRosterIndex,
                              (unsigned int)&v65,
                              (__int64)ReturnedData,
                              (__int64)&Src);
      v10 = AssemblyStorageRoot;
      if ( AssemblyStorageRoot < 0 )
      {
        if ( AssemblyStorageRoot == -1073741536 && (int)Src < 0 )
          v10 = (int)Src;
        goto LABEL_4;
      }
      goto LABEL_34;
    }
    DbgPrintEx(
      0x33u,
      0,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
LABEL_85:
    v10 = -1072365565;
    goto LABEL_4;
  }
LABEL_34:
  v23 = (char *)v69.lpSectionBase + (unsigned int)lpData[4];
  Src = v23;
  *a3 = 0LL;
  v24 = 0;
  v25 = (unsigned int)lpData[3];
  v26 = 0LL;
  v67 = v25;
  while ( v24 != v25 )
  {
    v58 = *(_DWORD *)&v23[8 * v24 + 4];
    if ( v58 > ulSectionTotalLength )
      goto LABEL_85;
    v59 = *(_DWORD *)&v23[8 * v24];
    if ( v58 > ~v59 || v59 + v58 > ulSectionTotalLength )
      goto LABEL_85;
    v26 += (unsigned __int16)v59;
    *a3 = v26;
    ++v24;
  }
  v27 = (const void **)v65;
  if ( v65 )
  {
    v26 += (unsigned __int16)*v65;
    *a3 = v26;
  }
  v28 = (unsigned __int16)v26 + 2LL;
  if ( v28 > 0xFFFE )
    goto LABEL_98;
  if ( a5 == (unsigned __int16 *)-16LL || v28 > *((_QWORD *)a5 + 4) )
  {
    if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
    {
LABEL_102:
      v10 = -1073741801;
      goto LABEL_4;
    }
    v27 = (const void **)v65;
  }
  *((_QWORD *)a5 + 1) = *((_QWORD *)a5 + 2);
  a5[1] = a5[16];
  if ( v27 )
  {
    *a5 = 0;
    v29 = *(unsigned __int16 *)v27 + 2LL;
    if ( v29 > 0xFFFE )
    {
      v10 = -1073741562;
      goto LABEL_4;
    }
    if ( v29 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
      {
        v10 = -1073741801;
        goto LABEL_4;
      }
      v27 = (const void **)v65;
    }
    v30 = *((_QWORD *)a5 + 2);
    v31 = *a5;
    *((_QWORD *)a5 + 1) = v30;
    memmove((void *)(v30 + 2 * (v31 >> 1)), v27[1], *(unsigned __int16 *)v27);
    v32 = *a5;
    v33 = v65;
    a5[1] = *v65 + *a5 + 2;
    v34 = *v33 + v32;
    v35 = *((_QWORD *)a5 + 1);
    *a5 = v34;
    *(_WORD *)(v35 + 2 * ((unsigned __int64)v34 >> 1)) = 0;
  }
  v36 = 0;
  v37 = (unsigned __int16 *)Src;
  while ( 1 )
  {
    v38 = (unsigned __int64)(a5 + 8);
    if ( v36 == v67 )
      break;
    v50 = (void *)v37[4 * v36];
    v51 = (char *)v69.lpSectionBase + *(unsigned int *)&v37[4 * v36 + 2];
    v52 = (unsigned __int64)v50 + *a5 + 2;
    Src = v50;
    v68 = v51;
    if ( v52 > 0xFFFE )
      goto LABEL_98;
    if ( v52 > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
        goto LABEL_102;
      v50 = Src;
      v38 = (unsigned __int64)(a5 + 8);
    }
    v53 = *(_QWORD *)v38;
    v54 = (size_t)v50;
    v55 = v68;
    v56 = (unsigned __int64)*a5 >> 1;
    *((_QWORD *)a5 + 1) = v53;
    memmove((void *)(v53 + 2 * v56), v55, v54);
    v57 = (unsigned __int16)(*a5 + (_WORD)Src);
    *a5 = v57;
    a5[1] = v57 + 2;
    ++v36;
    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v57 >> 1)) = 0;
  }
  v39 = lpData[1];
  if ( (v39 & 1) != 0 )
    goto LABEL_57;
  if ( (v39 & 8) != 0 )
  {
    LOWORD(Src) = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(1u, &StringToFind, &RtlDosPathSeperatorsString, (PUSHORT)&Src);
    v10 = CharInUnicodeString;
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString == -1073741275 )
        RtlAssert(
          "Internal error check failed",
          "minkernel\\ntdll\\sxsisol.cpp",
          0x476u,
          (PSTR)"Status != STATUS_NOT_FOUND");
      goto LABEL_4;
    }
    Length = -2 - (_WORD)Src + StringToFind.Length;
    Buffer = &StringToFind.Buffer[((unsigned __int64)(unsigned __int16)Src >> 1) + 1];
  }
  else
  {
    Buffer = StringToFind.Buffer;
    Length = StringToFind.Length;
  }
  *a3 += Length;
  v42 = *a3 < 0xFFFFuLL;
  Src = Buffer;
  if ( !v42 || (v43 = Length + (unsigned int)*a5 + 2LL, v43 > 0xFFFE) )
  {
LABEL_98:
    v10 = -1073741562;
    goto LABEL_4;
  }
  if ( v43 > *((_QWORD *)a5 + 4) && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
  {
    v10 = -1073741801;
    goto LABEL_4;
  }
  v44 = *((_QWORD *)a5 + 2);
  v45 = Src;
  v46 = (unsigned __int64)*a5 >> 1;
  *((_QWORD *)a5 + 1) = v44;
  memmove((void *)(v44 + 2 * v46), v45, Length);
  v47 = *a5 + Length;
  *a5 = v47;
  v38 = (unsigned __int64)v47 >> 1;
  a5[1] = v47 + 2;
  *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v38) = 0;
LABEL_57:
  if ( (lpData[1] & 4) != 0 )
  {
    v10 = sxsisol_ExpandEnvironmentStrings_UEx(v38, a5, &v70);
    if ( v10 < 0 )
      goto LABEL_4;
    v48 = (unsigned __int16)v70;
    *a5 = 0;
    if ( (unsigned __int64)(v48 + 2) > 0xFFFE )
    {
      v10 = -1073741562;
      goto LABEL_4;
    }
    if ( (unsigned __int64)(v48 + 2) > *((_QWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
      {
        v10 = -1073741801;
        goto LABEL_4;
      }
      LOWORD(v48) = v70;
    }
    v60 = *((_QWORD *)a5 + 2);
    v61 = (unsigned __int64)*a5 >> 1;
    *((_QWORD *)a5 + 1) = v60;
    memmove((void *)(v60 + 2 * v61), v71, (unsigned __int16)v48);
    v62 = (unsigned __int16)(*a5 + v70);
    *a5 = v62;
    a5[1] = v62 + 2;
    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v62 >> 1)) = 0;
  }
  if ( a4 )
    *a4 |= 2u;
  v10 = 0;
LABEL_4:
  v11 = v73;
  if ( BaseAddress )
  {
    if ( BaseAddress != v73 )
    {
      RtlpSysVolFree(BaseAddress);
      v11 = v73;
    }
    v74 = v75;
    BaseAddress = v11;
  }
  v71 = v11;
  if ( v11 )
    *v11 = 0;
  WORD1(v70) = v75;
  LOWORD(v70) = 0;
  if ( hActCtx
    && (((unsigned __int64)hActCtx - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && (unsigned int)(*hActCtx - 1) <= 0x7FFFFFFD )
  {
    while ( 1 )
    {
      v12 = *hActCtx;
      if ( *hActCtx == 0x7FFFFFFF )
        break;
      v13 = v12 - 1;
      if ( v12 == _InterlockedCompareExchange(hActCtx, v12 - 1, v12) )
        goto LABEL_15;
    }
    v13 = 0x7FFFFFFF;
LABEL_15:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&hActCtx[8 * (((unsigned __int8)_InterlockedExchangeAdd(hActCtx + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v13 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(hActCtx);
      else
        RtlpFreeActivationContext(hActCtx);
    }
  }
  return (unsigned int)v10;
}
