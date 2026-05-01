/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800EF4E0
 * Callers:
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800EF390 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800EF400 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x1800F0504 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ??1?$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U?$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@QEAA@XZ @ 0x1801DAE58 (--1-$unique_ptr@$$BY0A@UDISPLAYCONFIG_PATH_INFO@@U-$default_delete@$$BY0A@UDISPLAYCONFIG_PATH_IN.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1801E4AC4 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18023FA98 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1806564DC (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1806568E0 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180656BB4 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     _alloca_probe @ 0x1806A4AA0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CQueryKnownGameList::GetGameEntryByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct KnownGameList::IGameEntry **a4)
{
  __int64 v6; // rax
  KnownGameList **v7; // rsi
  unsigned int i; // edi
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  struct KnownGameList::IEnumerateEntries **v12; // rsi
  struct KnownGameList::IEnumerateEntries **v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v21; // edi
  unsigned int v22; // r9d
  int EnumerateEntriesInstance; // eax
  KnownGameList *v24; // rdi
  _locale_t v25; // rsi
  _locale_t v26; // r14
  _locale_t v27; // r15
  __int64 v28; // r12
  __int64 (__fastcall *v29)(__int64, KnownGameList **); // r13
  __int64 v30; // rcx
  int v31; // eax
  const struct std::nothrow_t *v32; // rdx
  unsigned int v33; // r13d
  int v34; // eax
  int v35; // r12d
  int v36; // r12d
  struct localeinfo_struct *v37; // rcx
  unsigned int v38; // eax
  bool v39; // zf
  int v40; // r12d
  wint_t v41; // ax
  unsigned int v42; // r13d
  unsigned __int16 v43; // cx
  const unsigned __int16 *v44; // r9
  int ProcessArgsByPID; // eax
  unsigned int v46; // esi
  unsigned int v47; // r8d
  __int64 v48; // rcx
  __int64 v49; // rcx
  struct KnownGameList::IEnumerateEntries **v50; // rax
  int v51; // eax
  const struct std::nothrow_t *v52; // rdx
  const struct std::nothrow_t *v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // rcx
  int ProcessWorkingDirectoryByPID; // eax
  unsigned int v60; // r14d
  int ProcessParentDirectoryByPID; // eax
  unsigned int v62; // r15d
  __int64 v63; // r12
  const struct std::nothrow_t *v64; // rdx
  const struct std::nothrow_t *v65; // rdx
  const struct std::nothrow_t *v66; // rdx
  __int64 v67; // rdx
  int v68; // eax
  _locale_t v69; // rax
  struct KnownGameList::IGameEntry **v70; // r12
  const struct std::nothrow_t *v71; // rdx
  KnownGameList *v72; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v73; // [rsp+38h] [rbp-C8h] BYREF
  int v74; // [rsp+40h] [rbp-C0h] BYREF
  _locale_t Locale; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v76; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v77; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v78; // [rsp+58h] [rbp-A8h]
  _locale_t v79; // [rsp+60h] [rbp-A0h] BYREF
  _locale_t v80; // [rsp+68h] [rbp-98h] BYREF
  _locale_t v81; // [rsp+70h] [rbp-90h] BYREF
  __int64 v82; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v83; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v84; // [rsp+84h] [rbp-7Ch] BYREF
  int v85; // [rsp+88h] [rbp-78h]
  CQueryKnownGameList *v86; // [rsp+90h] [rbp-70h]
  const unsigned __int16 *v87; // [rsp+98h] [rbp-68h] BYREF
  KnownGameList *v88; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-58h]
  struct KnownGameList::IGameEntry **v90; // [rsp+B0h] [rbp-50h]
  KnownGameList *v91[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v92; // [rsp+C8h] [rbp-38h] BYREF
  struct KnownGameList::IEnumerateEntries *v93[512]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1138h] [rbp+1038h]

  v90 = a4;
  v78 = a3;
  v87 = a2;
  v86 = this;
  *a4 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v89 = v6;
  v7 = 0LL;
  v92 = 0LL;
  if ( !a2 )
  {
    v10 = -2147467261;
    v18 = 2147500035LL;
    v19 = 1069LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v19,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v18);
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v10);
    return v10;
  }
  for ( i = 0; i < *((_DWORD *)this + 200); ++i )
  {
    v9 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, __int128 *))(*(_QWORD *)this + 88LL))(this, i, &v92);
    v10 = v9;
    if ( v9 < 0 )
    {
      v18 = (unsigned int)v9;
      v19 = 1075LL;
      goto LABEL_16;
    }
    if ( !(_WORD)v92 || (int)_o__wcsnicmp(&v92, a2, 4LL) > 0 )
      break;
    v7 = v91;
  }
  if ( !v7 )
  {
    v10 = -2147024894;
    goto LABEL_17;
  }
  v11 = i - 1;
  v12 = v93;
  v13 = 0LL;
  *(_QWORD *)&v92 = 0LL;
  v77 = 4096;
  v14 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          i - 1,
          v93,
          &v77);
  v15 = v14;
  if ( v14 )
  {
    if ( v14 != -2147024774 )
    {
      if ( v14 < 0 )
      {
        v16 = (unsigned int)v14;
        v17 = 654LL;
LABEL_62:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)v16);
      }
      return v15;
    }
    v50 = (struct KnownGameList::IEnumerateEntries **)operator new[](v77, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v50;
    v13 = v50;
    *(_QWORD *)&v92 = v50;
    if ( !v50 )
    {
      v15 = -2147024882;
      v16 = 2147942414LL;
      v17 = 659LL;
      goto LABEL_62;
    }
    v51 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
            this,
            v11,
            v50,
            &v77);
    v15 = v51;
    if ( v51 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x297,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v51);
LABEL_59:
      operator delete(v13, v52);
      return v15;
    }
  }
  v73 = 0LL;
  v21 = v77;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v73,
                               v12,
                               (unsigned __int8 *)v21,
                               v22);
  v15 = EnumerateEntriesInstance;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29B,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    v56 = v73;
    if ( v73 )
    {
      v73 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    }
LABEL_82:
    if ( !v13 )
      return v15;
    goto LABEL_59;
  }
  v72 = 0LL;
  v24 = 0LL;
  v82 = 0LL;
  v25 = 0LL;
  v81 = 0LL;
  v26 = 0LL;
  v80 = 0LL;
  v27 = 0LL;
  v79 = 0LL;
  while ( 1 )
  {
LABEL_20:
    v28 = v73;
    v29 = *(__int64 (__fastcall **)(__int64, KnownGameList **))(*(_QWORD *)v73 + 24LL);
    v30 = (__int64)v72;
    if ( v72 )
    {
      v72 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = v29(v28, &v72);
    v85 = v31;
    v33 = 0;
    if ( v31 )
    {
LABEL_84:
      if ( !v24 )
      {
        if ( v31 == 1 )
          goto LABEL_86;
        v70 = v90;
LABEL_142:
        if ( *v70 )
        {
          std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v79);
          std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v80);
          std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v81);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
          if ( v13 )
            operator delete(v13, v71);
          return 0LL;
        }
LABEL_86:
        if ( v27 )
          operator delete(v27, v32);
        if ( v26 )
          operator delete(v26, v32);
        if ( v25 )
          operator delete(v25, v32);
        if ( v24 )
          (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v24 + 16LL))(v24);
        v57 = (__int64)v72;
        if ( v72 )
        {
          v72 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
        }
        v58 = v73;
        if ( v73 )
        {
          v73 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        }
        goto LABEL_53;
      }
LABEL_139:
      Locale = 0LL;
      v87 = (const unsigned __int16 *)v24;
      v68 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
              &Locale,
              &v87);
      v35 = v68;
      if ( v68 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x315,
          (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v68);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&Locale);
LABEL_138:
        std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v79);
        std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v80);
        std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v81);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
LABEL_76:
        if ( v13 )
          operator delete(v13, v53);
        return (unsigned int)v35;
      }
      v69 = Locale;
      Locale = 0LL;
      v70 = v90;
      *v90 = (struct KnownGameList::IGameEntry *)v69;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&Locale);
      goto LABEL_142;
    }
    v88 = 0LL;
    v83 = 0;
    v34 = (*(__int64 (__fastcall **)(KnownGameList *, KnownGameList **, unsigned int *))(*(_QWORD *)v72 + 24LL))(
            v72,
            &v88,
            &v83);
    v35 = v34;
    if ( v34 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A9,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v34);
      if ( v27 )
        operator delete(v27, v53);
      if ( v26 )
        operator delete(v26, v53);
      if ( v25 )
        operator delete(v25, v53);
      if ( v24 )
        (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v24 + 16LL))(v24);
      v54 = (__int64)v72;
      if ( v72 )
      {
        v72 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
      }
      v55 = v73;
      if ( v73 )
      {
        v73 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
      }
      goto LABEL_76;
    }
    v76 = v83;
    v91[0] = v88;
    v36 = 0;
    v74 = 0;
    v37 = _create_locale(0, "C");
    Locale = v37;
    while ( 1 )
    {
      v38 = v76;
      v39 = v33 == v76;
      if ( v33 >= v76 )
        break;
      if ( v33 >= (unsigned int)v89 )
        goto LABEL_29;
      v40 = _towlower_l(*((_WORD *)v91[0] + v33), v37);
      v41 = _towlower_l(v87[v33], Locale);
      v33 = ++v74;
      v36 = v40 - v41;
      v37 = Locale;
      if ( v36 )
      {
        v38 = v76;
LABEL_29:
        if ( v36 )
          goto LABEL_30;
        v39 = v33 == v38;
        break;
      }
    }
    if ( v39 )
    {
      if ( v33 != (_DWORD)v89 )
        v36 = -1;
    }
    else
    {
      v36 = 1;
    }
LABEL_30:
    _free_locale(v37);
    v42 = 0;
    if ( v36 > 0 )
      break;
    if ( !v36 )
    {
      LOWORD(v74) = 0;
      v35 = (*(__int64 (__fastcall **)(KnownGameList *, int *))(*(_QWORD *)v72 + 40LL))(v72, &v74);
      if ( v35 < 0 )
      {
        v67 = 703LL;
LABEL_136:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v67,
          (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v35);
        goto LABEL_138;
      }
      v43 = v74;
      if ( !(_WORD)v74 || v78 )
      {
        while ( v42 < v43 )
        {
          v76 = 0;
          v91[0] = 0LL;
          v84 = 0;
          Locale = 0LL;
          v35 = (*(__int64 (__fastcall **)(KnownGameList *, _QWORD, unsigned int *, KnownGameList **, unsigned int *))(*(_QWORD *)v72 + 56LL))(
                  v72,
                  v42,
                  &v76,
                  v91,
                  &v84);
          if ( v35 < 0 )
          {
            v67 = 724LL;
            goto LABEL_136;
          }
          if ( v76 )
          {
            if ( v76 == 1 )
            {
              if ( !v26 )
              {
                ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                                 v86,
                                                 v78,
                                                 (const unsigned __int16 **)&Locale);
                v60 = ProcessWorkingDirectoryByPID;
                if ( ProcessWorkingDirectoryByPID < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2E3,
                    (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                    (const char *)(unsigned int)ProcessWorkingDirectoryByPID);
                  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v79);
                  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v80);
                  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v81);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
                  if ( v13 )
                    operator delete(v13, v65);
                  return v60;
                }
                v26 = Locale;
                v80 = Locale;
              }
              v47 = (unsigned int)v26;
            }
            else
            {
              if ( v76 != 2 )
              {
                v15 = -2147418113;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2F3,
                  (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                  (const char *)0x8000FFFFLL);
                std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v79);
                std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v80);
                std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v81);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
                goto LABEL_82;
              }
              if ( !v27 )
              {
                ProcessParentDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                                v86,
                                                v78,
                                                (const unsigned __int16 **)&Locale);
                v62 = ProcessParentDirectoryByPID;
                if ( ProcessParentDirectoryByPID < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2EC,
                    (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                    (const char *)(unsigned int)ProcessParentDirectoryByPID);
                  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v79);
                  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v80);
                  std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v81);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
                  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
                  if ( v13 )
                    operator delete(v13, v66);
                  return v62;
                }
                v27 = Locale;
                v79 = Locale;
              }
              v47 = (unsigned int)v27;
            }
          }
          else
          {
            if ( !v25 )
            {
              ProcessArgsByPID = CQueryKnownGameList::GetProcessArgsByPID(v86, v78, (const unsigned __int16 **)&Locale);
              v46 = ProcessArgsByPID;
              if ( ProcessArgsByPID < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2DA,
                  (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                  (const char *)(unsigned int)ProcessArgsByPID);
                std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v79);
                std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v80);
                std::unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>::~unique_ptr<DISPLAYCONFIG_PATH_INFO [0]>(&v81);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v82);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v72);
                Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v73);
                if ( v13 )
                  operator delete(v13, v64);
                return v46;
              }
              v25 = Locale;
              v81 = Locale;
            }
            v47 = (unsigned int)v25;
          }
          if ( !KnownGameList::StrStrInsensitive(v91[0], (const unsigned __int16 *)v84, v47, v44) )
            goto LABEL_20;
          ++v42;
          v43 = v74;
        }
        v63 = (__int64)v72;
        if ( v24 != v72 )
        {
          if ( v72 )
            (*(void (__fastcall **)(KnownGameList *))(*(_QWORD *)v72 + 8LL))(v72);
          v91[0] = v24;
          v24 = (KnownGameList *)v63;
          v82 = v63;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v91);
          v43 = v74;
        }
        if ( v43 )
        {
          v31 = v85;
          goto LABEL_84;
        }
      }
    }
  }
  if ( v24 )
    goto LABEL_139;
  if ( v27 )
    operator delete(v27, v32);
  if ( v26 )
    operator delete(v26, v32);
  if ( v25 )
    operator delete(v25, v32);
  v48 = (__int64)v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
  }
  v49 = v73;
  if ( v73 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  }
LABEL_53:
  if ( v13 )
    operator delete(v13, v32);
  return 2147943568LL;
}
