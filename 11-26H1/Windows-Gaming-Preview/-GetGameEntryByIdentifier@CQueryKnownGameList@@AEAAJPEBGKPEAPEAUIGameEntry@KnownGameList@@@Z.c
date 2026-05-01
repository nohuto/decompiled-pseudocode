/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003E034
 * Callers:
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003EBB0 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003F300 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18003D0EC (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18003D95C (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18003F6A0 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800400E8 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800403C0 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180040CAC (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180041E48 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180041F18 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     _alloca_probe @ 0x180043310 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CQueryKnownGameList::GetGameEntryByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct KnownGameList::IGameEntry **a4)
{
  unsigned __int16 *v5; // r15
  __int64 v6; // rax
  int TOCIndexByIdentifier; // eax
  unsigned int v8; // ebx
  struct KnownGameList::IEnumerateEntries **v10; // rsi
  struct KnownGameList::IEnumerateEntries **v11; // rdi
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  struct KnownGameList::IEnumerateEntries **v15; // rax
  int v16; // eax
  const struct std::nothrow_t *v17; // rdx
  struct KnownGameList::IEnumerateEntries **v18; // rcx
  int EnumerateEntriesInstance; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int16 *v22; // rsi
  unsigned __int16 *v23; // r14
  __int64 v24; // r12
  KnownGameList *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  const struct std::nothrow_t *v28; // rdx
  int v29; // eax
  unsigned int v30; // r12d
  int v31; // eax
  int v32; // eax
  unsigned int v33; // r10d
  int v34; // eax
  const unsigned __int16 *v35; // r9
  int ProcessArgsByPID; // eax
  unsigned int v37; // esi
  unsigned int v38; // r8d
  int ProcessWorkingDirectoryByPID; // eax
  unsigned int v40; // r14d
  int ProcessParentDirectoryByPID; // eax
  unsigned int v42; // r15d
  __int64 v43; // r12
  __int64 v44; // rcx
  int v45; // r13d
  int v46; // eax
  const struct std::nothrow_t *v47; // rdx
  unsigned __int16 *v48; // rcx
  const struct std::nothrow_t *v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  const struct std::nothrow_t *v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rcx
  const struct std::nothrow_t *v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rcx
  const struct std::nothrow_t *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rcx
  const struct std::nothrow_t *v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  struct KnownGameList::IGameEntry **v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned int *v77; // [rsp+20h] [rbp-E0h]
  __int64 v78; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v79; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v80; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v81; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v82; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v83; // [rsp+54h] [rbp-ACh]
  unsigned int v84; // [rsp+58h] [rbp-A8h] BYREF
  int v85; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v86; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v87; // [rsp+64h] [rbp-9Ch]
  KnownGameList *v88; // [rsp+68h] [rbp-98h] BYREF
  int v89; // [rsp+70h] [rbp-90h]
  unsigned int v90[2]; // [rsp+78h] [rbp-88h] BYREF
  KnownGameList *v91; // [rsp+80h] [rbp-80h] BYREF
  struct KnownGameList::IGameEntry **v92; // [rsp+88h] [rbp-78h]
  struct KnownGameList::IEnumerateEntries **v93; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v94; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v95; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v96; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h]
  struct KnownGameList::IEnumerateEntries *v99[512]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1118h] [rbp+1018h]

  v92 = a4;
  v83 = a3;
  *(_QWORD *)v90 = a2;
  v5 = 0LL;
  *a4 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v94 = (unsigned __int16 *)v6;
  v80 = 0;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, a2, &v80);
  v8 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v8;
  }
  v10 = v99;
  v11 = 0LL;
  v93 = 0LL;
  v82 = 4096;
  v12 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          v80,
          v99,
          &v82);
  v8 = v12;
  if ( v12 )
  {
    if ( v12 != -2147024774 )
    {
      if ( v12 >= 0 )
        return v8;
      v13 = (unsigned int)v12;
      v14 = 654LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v13);
      return v8;
    }
    v15 = (struct KnownGameList::IEnumerateEntries **)operator new[](v82, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v15;
    v11 = v15;
    v93 = v15;
    if ( !v15 )
    {
      v8 = -2147024882;
      v13 = 2147942414LL;
      v14 = 659LL;
      goto LABEL_12;
    }
    v16 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
            this,
            v80,
            v15,
            &v82);
    v8 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x297,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v16);
      v18 = v10;
LABEL_16:
      operator delete(v18, v17);
      return v8;
    }
  }
  v79 = 0LL;
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v79,
                               v10,
                               (unsigned __int8 *)v82);
  v8 = EnumerateEntriesInstance;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29B,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    v20 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( !v11 )
      return v8;
    v18 = v11;
    goto LABEL_16;
  }
  v78 = 0LL;
  v21 = 0LL;
  v98 = 0LL;
  v22 = 0LL;
  v95 = 0LL;
  v23 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  while ( 1 )
  {
LABEL_23:
    v24 = v79;
    v25 = *(KnownGameList **)(*(_QWORD *)v79 + 24LL);
    v88 = v25;
    v26 = v78;
    v27 = 0LL;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      v25 = v88;
    }
    v89 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64))v25)(v24, &v78, v27);
    if ( v89 )
    {
LABEL_57:
      if ( v21 )
        goto LABEL_58;
      v45 = v89;
      v72 = v92;
      goto LABEL_181;
    }
    v91 = 0LL;
    v84 = 0;
    v29 = (*(__int64 (__fastcall **)(__int64, KnownGameList **, unsigned int *))(*(_QWORD *)v78 + 24LL))(
            v78,
            &v91,
            &v84);
    v30 = v29;
    if ( v29 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A9,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v29);
      if ( v5 )
        operator delete(v5, v49);
      if ( v23 )
        operator delete(v23, v49);
      if ( v22 )
        operator delete(v22, v49);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v70 = v78;
      if ( v78 )
      {
        v78 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
      }
      v71 = v79;
      if ( v79 )
      {
        v79 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
      }
      goto LABEL_176;
    }
    v31 = KnownGameList::StrCmpInsensitive(
            v91,
            (const unsigned __int16 *)v84,
            v90[0],
            (const unsigned __int16 *)(unsigned int)v94,
            (unsigned int)v77);
    if ( v31 > 0 )
      break;
    if ( !v31 )
    {
      LOWORD(v80) = 0;
      v32 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v78 + 40LL))(v78, &v80);
      v30 = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2BF,
          (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v32);
        if ( v5 )
          operator delete(v5, v49);
        if ( v23 )
          operator delete(v23, v49);
        if ( v22 )
          operator delete(v22, v49);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v66 = v78;
        if ( v78 )
        {
          v78 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
        }
        v67 = v79;
        if ( v79 )
        {
          v79 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
        }
        goto LABEL_176;
      }
      v28 = (const struct std::nothrow_t *)(unsigned __int16)v80;
      if ( !(_WORD)v80 || v83 )
      {
        v33 = 0;
        v87 = 0;
        if ( (_WORD)v80 )
        {
          while ( 1 )
          {
            v85 = 0;
            v88 = 0LL;
            v86 = 0;
            v81 = 0LL;
            v77 = &v86;
            v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, KnownGameList **))(*(_QWORD *)v78 + 56LL))(
                    v78,
                    v33,
                    &v85,
                    &v88);
            v30 = v34;
            if ( v34 < 0 )
              break;
            if ( v85 )
            {
              if ( v85 == 1 )
              {
                if ( !v23 )
                {
                  ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                                   this,
                                                   v83,
                                                   (const unsigned __int16 **)&v81);
                  v40 = ProcessWorkingDirectoryByPID;
                  if ( ProcessWorkingDirectoryByPID < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2E3,
                      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                      (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
                    if ( v5 )
                      operator delete(v5, v55);
                    if ( v22 )
                      operator delete(v22, v55);
                    if ( v21 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                    v56 = v78;
                    if ( v78 )
                    {
                      v78 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
                    }
                    v57 = v79;
                    if ( v79 )
                    {
                      v79 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
                    }
                    if ( v11 )
                      operator delete(v11, v55);
                    return v40;
                  }
                  v23 = v81;
                  v96 = v81;
                }
                v38 = (unsigned int)v23;
              }
              else
              {
                if ( v85 != 2 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2F3,
                    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                    (const char *)0x8000FFFFLL);
                  if ( v5 )
                    operator delete(v5, v61);
                  if ( v23 )
                    operator delete(v23, v61);
                  if ( v22 )
                    operator delete(v22, v61);
                  if ( v21 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                  v62 = v78;
                  if ( v78 )
                  {
                    v78 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
                  }
                  v63 = v79;
                  if ( v79 )
                  {
                    v79 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
                  }
                  if ( v11 )
                    operator delete(v11, v61);
                  return 2147549183LL;
                }
                if ( !v5 )
                {
                  ProcessParentDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                                  this,
                                                  v83,
                                                  (const unsigned __int16 **)&v81);
                  v42 = ProcessParentDirectoryByPID;
                  if ( ProcessParentDirectoryByPID < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2EC,
                      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                      (const char *)(unsigned int)ProcessParentDirectoryByPID);
                    if ( v23 )
                      operator delete(v23, v58);
                    if ( v22 )
                      operator delete(v22, v58);
                    if ( v21 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                    v59 = v78;
                    if ( v78 )
                    {
                      v78 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
                    }
                    v60 = v79;
                    if ( v79 )
                    {
                      v79 = 0LL;
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
                    }
                    if ( v11 )
                      operator delete(v11, v58);
                    return v42;
                  }
                  v5 = v81;
                  v97 = v81;
                }
                v38 = (unsigned int)v5;
              }
            }
            else
            {
              if ( !v22 )
              {
                ProcessArgsByPID = CQueryKnownGameList::GetProcessArgsByPID(this, v83, (const unsigned __int16 **)&v81);
                v37 = ProcessArgsByPID;
                if ( ProcessArgsByPID < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2DA,
                    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                    (const char *)(unsigned int)ProcessArgsByPID);
                  if ( v5 )
                    operator delete(v5, v52);
                  if ( v23 )
                    operator delete(v23, v52);
                  if ( v21 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
                  v53 = v78;
                  if ( v78 )
                  {
                    v78 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v53 + 16LL))(v53);
                  }
                  v54 = v79;
                  if ( v79 )
                  {
                    v79 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
                  }
                  if ( v11 )
                    operator delete(v11, v52);
                  return v37;
                }
                v22 = v81;
                v95 = v81;
              }
              v38 = (unsigned int)v22;
            }
            if ( !KnownGameList::StrStrInsensitive(v88, (const unsigned __int16 *)v86, v38, v35) )
              goto LABEL_23;
            v33 = v87 + 1;
            v87 = v33;
            v28 = (const struct std::nothrow_t *)(unsigned __int16)v80;
            if ( v33 >= (unsigned __int16)v80 )
              goto LABEL_51;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2D4,
            (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v34);
          if ( v5 )
            operator delete(v5, v49);
          if ( v23 )
            operator delete(v23, v49);
          if ( v22 )
            operator delete(v22, v49);
          if ( v21 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          v64 = v78;
          if ( v78 )
          {
            v78 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
          }
          v65 = v79;
          if ( v79 )
          {
            v79 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
          }
          goto LABEL_176;
        }
LABEL_51:
        v43 = v78;
        if ( v21 != v78 )
        {
          if ( v78 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
            v28 = (const struct std::nothrow_t *)(unsigned __int16)v80;
          }
          v44 = v21;
          v21 = v43;
          v98 = v43;
          if ( v44 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            v28 = (const struct std::nothrow_t *)(unsigned __int16)v80;
          }
        }
        if ( (_WORD)v28 )
          goto LABEL_57;
      }
    }
  }
  if ( !v21 )
  {
    if ( v5 )
      operator delete(v5, v28);
    if ( v23 )
      operator delete(v23, v28);
    if ( v22 )
      operator delete(v22, v28);
    v68 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
    }
    v69 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
    }
LABEL_210:
    if ( v11 )
      operator delete(v11, v28);
    return 2147943568LL;
  }
LABEL_58:
  v45 = 0;
  v81 = 0LL;
  *(_QWORD *)v90 = v21;
  v46 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
          &v81,
          (struct KnownGameList::IGameEntry **)v90);
  v30 = v46;
  if ( v46 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x315,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v46);
    v48 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v48 + 16LL))(v48);
    }
    if ( v5 )
      operator delete(v5, v47);
    if ( v23 )
      operator delete(v23, v47);
    if ( v22 )
      operator delete(v22, v47);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v50 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v51 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
LABEL_176:
    if ( v11 )
      operator delete(v11, v49);
    return v30;
  }
  v72 = v92;
  *v92 = (struct KnownGameList::IGameEntry *)v81;
LABEL_181:
  if ( v45 == 1 || !*v72 )
  {
    if ( v5 )
      operator delete(v5, v28);
    if ( v23 )
      operator delete(v23, v28);
    if ( v22 )
      operator delete(v22, v28);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v75 = v78;
    if ( v78 )
    {
      v78 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    }
    v76 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
    }
    goto LABEL_210;
  }
  if ( v5 )
    operator delete(v5, v28);
  if ( v23 )
    operator delete(v23, v28);
  if ( v22 )
    operator delete(v22, v28);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v73 = v78;
  if ( v78 )
  {
    v78 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
  }
  v74 = v79;
  if ( v79 )
  {
    v79 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  }
  if ( v11 )
    operator delete(v11, v28);
  return 0LL;
}
