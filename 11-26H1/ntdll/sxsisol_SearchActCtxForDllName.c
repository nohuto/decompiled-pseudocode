/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x180042600
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x180043CF0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180010460 (RtlCaptureStackBackTrace.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     DbgPrintEx @ 0x1800413D0 (DbgPrintEx.c)
 *     RtlFindActivationContextSectionString @ 0x180041C30 (RtlFindActivationContextSectionString.c)
 *     RtlAssert @ 0x180070F80 (RtlAssert.c)
 *     RtlFindCharInUnicodeString @ 0x18009A730 (RtlFindCharInUnicodeString.c)
 *     RtlpEnsureBufferSize @ 0x18009AB80 (RtlpEnsureBufferSize.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x18009AD18 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpMoveActCtxToFreeList @ 0x1800A1D9C (RtlpMoveActCtxToFreeList.c)
 *     RtlpFreeActivationContext @ 0x1800A1EC8 (RtlpFreeActivationContext.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800A21EC (RtlGetAssemblyStorageRoot.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall sxsisol_SearchActCtxForDllName(__int128 *a1, char a2, _QWORD *a3, _DWORD *a4, unsigned __int16 *a5)
{
  volatile signed __int32 *v8; // rdi
  int ActivationContextSectionString; // eax
  int v10; // ebx
  __int16 *v11; // rdx
  signed __int32 v12; // eax
  int v13; // esi
  _DWORD *v15; // r15
  unsigned int v16; // r13d
  unsigned __int64 v17; // r8
  unsigned int v18; // edx
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int AssemblyStorageRoot; // eax
  void *v23; // r8
  unsigned int v24; // edx
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
  void *v40; // rax
  unsigned __int16 v41; // bx
  bool v42; // cf
  unsigned __int64 v43; // r8
  __int64 v44; // rcx
  void *v45; // rdx
  unsigned __int64 v46; // rax
  unsigned __int16 v47; // bx
  __int64 v48; // rdx
  int CharInUnicodeString; // eax
  void *v50; // rdx
  void *v51; // rax
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
  __int64 v63; // [rsp+20h] [rbp-E0h]
  void *Src; // [rsp+30h] [rbp-D0h] BYREF
  _WORD *v65; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v67; // [rsp+50h] [rbp-B0h]
  void *v68; // [rsp+58h] [rbp-A8h]
  int v69; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v70; // [rsp+64h] [rbp-9Ch]
  __int128 v71; // [rsp+74h] [rbp-8Ch]
  __int128 v72; // [rsp+84h] [rbp-7Ch]
  __int128 v73; // [rsp+94h] [rbp-6Ch]
  __int128 v74; // [rsp+A4h] [rbp-5Ch]
  __int128 v75; // [rsp+B4h] [rbp-4Ch]
  __int64 v76; // [rsp+C4h] [rbp-3Ch]
  int v77; // [rsp+CCh] [rbp-34h]
  __int64 v78; // [rsp+D0h] [rbp-30h] BYREF
  void *v79; // [rsp+D8h] [rbp-28h]
  __int16 *v80; // [rsp+E0h] [rbp-20h]
  __int16 *v81; // [rsp+E8h] [rbp-18h]
  __int64 v82; // [rsp+F0h] [rbp-10h]
  __int64 v83; // [rsp+F8h] [rbp-8h]
  __int16 v84; // [rsp+100h] [rbp+0h] BYREF
  int v85; // [rsp+102h] [rbp+2h]
  __int16 v86; // [rsp+106h] [rbp+6h]

  v69 = 112;
  v76 = 0LL;
  v77 = 0;
  v78 = 0x20000LL;
  v85 = 0;
  v80 = &v84;
  v86 = 0;
  v81 = &v84;
  v65 = 0LL;
  v70 = 0LL;
  v79 = &v84;
  v71 = 0LL;
  v72 = 0LL;
  v8 = 0LL;
  v73 = 0LL;
  v82 = 2LL;
  v74 = 0LL;
  v83 = 2LL;
  v75 = 0LL;
  v84 = 0;
  v66 = *a1;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3, 0LL, 2, (__int64)&v66, &v69);
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
  v8 = *(volatile signed __int32 **)((char *)&v73 + 4);
  if ( HIDWORD(v70) < 0x14 || (_DWORD)v70 != 1 )
  {
    v10 = -1072365565;
    goto LABEL_4;
  }
  v15 = *(_DWORD **)((char *)&v70 + 4);
  v16 = HIDWORD(v72);
  v17 = *(unsigned int *)(*(_QWORD *)((char *)&v70 + 4) + 16LL);
  if ( (unsigned int)v17 > HIDWORD(v72) )
    goto LABEL_85;
  v18 = *(_DWORD *)(*(_QWORD *)((char *)&v70 + 4) + 12LL);
  if ( v18 > 0x1FFFFFFF || v17 > 0xFFFFFFFF - 8 * (unsigned __int64)v18 || (unsigned int)v17 + 8 * v18 > HIDWORD(v72) )
    goto LABEL_85;
  v19 = *(_DWORD *)(*(_QWORD *)((char *)&v70 + 4) + 4LL);
  if ( (v19 & 2) != 0 )
  {
    LODWORD(Src) = 0;
    v20 = 0;
    if ( (v19 & 4) == 0 )
    {
      if ( (v74 & 1) != 0 )
      {
        if ( (v74 & 2) != 0 )
        {
          RtlAssert(
            "Internal error check failed",
            "minkernel\\ntdll\\sxsisol.cpp",
            1050LL,
            "!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
          v10 = -1073741595;
          goto LABEL_4;
        }
        v20 = 1;
      }
      v21 = v20 | 2;
      if ( (v74 & 2) == 0 )
        v21 = v20;
      AssemblyStorageRoot = RtlGetAssemblyStorageRoot(
                              v21,
                              DWORD1(v73),
                              HIDWORD(v73),
                              (unsigned int)&v65,
                              v63,
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
      51,
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
  v23 = (void *)(*(_QWORD *)((char *)&v72 + 4) + (unsigned int)v15[4]);
  Src = v23;
  *a3 = 0LL;
  v24 = 0;
  v25 = (unsigned int)v15[3];
  v26 = 0LL;
  v67 = v25;
  while ( v24 != v25 )
  {
    v58 = *((_DWORD *)v23 + 2 * v24 + 1);
    if ( v58 > v16 )
      goto LABEL_85;
    v59 = *((_DWORD *)v23 + 2 * v24);
    if ( v58 > ~v59 || v59 + v58 > v16 )
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
    v51 = (void *)(*(_QWORD *)((char *)&v72 + 4) + *(unsigned int *)&v37[4 * v36 + 2]);
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
  v39 = v15[1];
  if ( (v39 & 1) != 0 )
    goto LABEL_57;
  if ( (v39 & 8) != 0 )
  {
    LOWORD(Src) = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v66, &RtlDosPathSeperatorsString, &Src);
    v10 = CharInUnicodeString;
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString == -1073741275 )
      {
        RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 1142LL, "Status != STATUS_NOT_FOUND");
        v10 = -1073741595;
      }
      goto LABEL_4;
    }
    v41 = -2 - (_WORD)Src + v66;
    v40 = (void *)(*((_QWORD *)&v66 + 1) + 2 * ((unsigned __int64)(unsigned __int16)Src >> 1) + 2);
  }
  else
  {
    v40 = (void *)*((_QWORD *)&v66 + 1);
    v41 = v66;
  }
  *a3 += v41;
  v42 = *a3 < 0xFFFFuLL;
  Src = v40;
  if ( !v42 || (v43 = *a5 + (unsigned int)v41 + 2LL, v43 > 0xFFFE) )
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
  memmove((void *)(v44 + 2 * v46), v45, v41);
  v47 = *a5 + v41;
  *a5 = v47;
  v38 = (unsigned __int64)v47 >> 1;
  a5[1] = v47 + 2;
  *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v38) = 0;
LABEL_57:
  if ( (v15[1] & 4) != 0 )
  {
    v10 = sxsisol_ExpandEnvironmentStrings_UEx(v38, a5, &v78);
    if ( v10 < 0 )
      goto LABEL_4;
    v48 = (unsigned __int16)v78;
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
      LOWORD(v48) = v78;
    }
    v60 = *((_QWORD *)a5 + 2);
    v61 = (unsigned __int64)*a5 >> 1;
    *((_QWORD *)a5 + 1) = v60;
    memmove((void *)(v60 + 2 * v61), v79, (unsigned __int16)v48);
    v62 = (unsigned __int16)(*a5 + v78);
    *a5 = v62;
    a5[1] = v62 + 2;
    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v62 >> 1)) = 0;
  }
  if ( a4 )
    *a4 |= 2u;
  v10 = 0;
LABEL_4:
  v11 = v81;
  if ( v80 )
  {
    if ( v80 != v81 )
    {
      RtlpSysVolFree((__int64)v80);
      v11 = v81;
    }
    v82 = v83;
    v80 = v11;
  }
  v79 = v11;
  if ( v11 )
    *v11 = 0;
  WORD1(v78) = v83;
  LOWORD(v78) = 0;
  if ( v8 && (((unsigned __int64)v8 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && (unsigned int)(*v8 - 1) <= 0x7FFFFFFD )
  {
    while ( 1 )
    {
      v12 = *v8;
      if ( *v8 == 0x7FFFFFFF )
        break;
      v13 = v12 - 1;
      if ( v12 == _InterlockedCompareExchange(v8, v12 - 1, v12) )
        goto LABEL_15;
    }
    v13 = 0x7FFFFFFF;
LABEL_15:
    if ( g_SxsTrackReleaseStacks )
      RtlCaptureStackBackTrace(
        1u,
        4u,
        (PVOID *)&v8[8 * (((unsigned __int8)_InterlockedExchangeAdd(v8 + 96, 1u) + 1) & 3) + 98],
        0LL);
    if ( !v13 )
    {
      if ( g_SxsKeepActivationContextsAlive )
        RtlpMoveActCtxToFreeList(v8);
      else
        RtlpFreeActivationContext(v8);
    }
  }
  return (unsigned int)v10;
}
