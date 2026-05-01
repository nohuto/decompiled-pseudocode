/*
 * XREFs of ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FD58
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@5678@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000C0B8 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEA.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C768 (--$_Emplace_reallocate@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000CA8C (--$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@P.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800109DC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800363B0 (-get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *a2)
{
  _WORD *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  HSTRING v6; // rcx
  HSTRING v8; // rbx
  __int64 (__fastcall *v9)(HSTRING, HSTRING *); // rdi
  int v10; // eax
  HSTRING v11; // rcx
  const WCHAR *StringRawBuffer; // rax
  PWSTR v13; // rax
  HSTRING v14; // rcx
  _WORD *v15; // rax
  int v16; // eax
  HSTRING v17; // rcx
  HSTRING v18; // rbx
  __int64 (__fastcall *v19)(HSTRING, HSTRING *); // rdi
  int v20; // eax
  HSTRING v21; // rcx
  PCWSTR v22; // rax
  int v23; // r9d
  const WCHAR *v24; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  const WCHAR *v28; // rcx
  int v29; // eax
  HSTRING v30; // rcx
  HSTRING v31; // rcx
  int v32; // eax
  _QWORD *v33; // rax
  volatile signed __int64 *v34; // rdx
  signed __int64 v35; // rcx
  bool v36; // zf
  signed __int64 v37; // rax
  signed __int32 v38; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v39; // r15
  int v40; // eax
  unsigned int v41; // ebx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v42; // rcx
  volatile signed __int64 *v43; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v44; // rbx
  __int64 (__fastcall *v45)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *, HSTRING *); // rdi
  int v46; // eax
  unsigned int v47; // ebx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v48; // rcx
  volatile signed __int64 *v49; // rcx
  volatile signed __int64 *v50; // rbx
  __int64 v51; // rbx
  __int64 (__fastcall *v52)(__int64, HSTRING *); // rdi
  int v53; // eax
  unsigned int v54; // ebx
  __int64 v55; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v56; // rcx
  volatile signed __int64 *v57; // rcx
  int v58; // eax
  __int64 v59; // rdi
  __int64 (__fastcall *v60)(__int64, HSTRING *); // rbx
  int v61; // eax
  unsigned int v62; // ebx
  __int64 v63; // rcx
  __int64 v64; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v65; // rcx
  volatile signed __int64 *v66; // rcx
  __int64 v67; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v68; // rcx
  volatile signed __int64 *v69; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-78h]
  HSTRING string; // [rsp+30h] [rbp-68h] BYREF
  __int64 v72; // [rsp+38h] [rbp-60h] BYREF
  __int64 v73; // [rsp+40h] [rbp-58h] BYREF
  HSTRING v74[2]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v75[64]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *length; // [rsp+A0h] [rbp+8h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v78; // [rsp+A8h] [rbp+10h] BYREF
  volatile signed __int64 *v79; // [rsp+B0h] [rbp+18h] BYREF
  HSTRING v80; // [rsp+B8h] [rbp+20h] BYREF

  v78 = a2;
  v3 = (_WORD *)*((_QWORD *)this + 11);
  if ( v3 && *v3 )
  {
    v80 = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, HSTRING *, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *))(*(_QWORD *)a2 + 56LL))(
           a2,
           &v80,
           a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v4);
      v6 = v80;
      if ( v80 )
      {
        v80 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v5;
    }
    v8 = v80;
    if ( !v80 )
      return 0LL;
    string = 0LL;
    v9 = *(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v80 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v10 = v9(v8, &string);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v10);
      WindowsDeleteString(string);
      string = 0LL;
      v11 = v80;
      if ( v80 )
      {
        v80 = 0LL;
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return v5;
    }
    LODWORD(length) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
    v13 = StrStrNW(StringRawBuffer, *((PCWSTR *)this + 11), (UINT)length);
    v14 = string;
    if ( v13 )
      goto LABEL_39;
LABEL_36:
    WindowsDeleteString(v14);
    string = 0LL;
    v30 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v30 + 16LL))(v30);
    }
    return 0LL;
  }
  v15 = (_WORD *)*((_QWORD *)this + 8);
  if ( !v15 || !*v15 )
    goto LABEL_41;
  v80 = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, HSTRING *))(*(_QWORD *)a2 + 64LL))(
          a2,
          &v80);
  v5 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v16);
    v17 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v5;
  }
  v18 = v80;
  if ( !v80 )
    return 0LL;
  string = 0LL;
  v19 = *(__int64 (__fastcall **)(HSTRING, HSTRING *))(*(_QWORD *)v80 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v20 = v19(v18, &string);
  v5 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v20);
    WindowsDeleteString(string);
    string = 0LL;
    v21 = v80;
    if ( v80 )
    {
      v80 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v5;
  }
  LODWORD(length) = 0;
  v22 = WindowsGetStringRawBuffer(string, (UINT32 *)&length);
  v23 = v22 != 0LL ? (unsigned int)length : 0;
  v24 = &String1;
  if ( v22 )
    v24 = v22;
  v25 = *((_QWORD *)this + 9);
  v26 = -1LL;
  if ( v25 != -1 )
  {
    v28 = (const WCHAR *)*((_QWORD *)this + 8);
    v74[0] = *((HSTRING *)this + 9);
    LODWORD(v26) = v25;
    if ( v28 )
      goto LABEL_35;
    goto LABEL_34;
  }
  v27 = *((_QWORD *)this + 8);
  if ( !v27 )
  {
    LODWORD(v26) = 0;
LABEL_34:
    v28 = &String1;
    goto LABEL_35;
  }
  do
    ++v26;
  while ( *(_WORD *)(v27 + 2 * v26) );
  v28 = (const WCHAR *)*((_QWORD *)this + 8);
LABEL_35:
  v29 = CompareStringOrdinal(v28, v26, v24, v23, 1);
  v14 = string;
  if ( v29 != 2 )
    goto LABEL_36;
LABEL_39:
  WindowsDeleteString(v14);
  string = 0LL;
  v31 = v80;
  if ( v80 )
  {
    v80 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v31 + 16LL))(v31);
  }
LABEL_41:
  v79 = 0LL;
  length = (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)*((_QWORD *)this + 26);
  v80 = (HSTRING)*((_QWORD *)this + 14);
  v32 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile * &,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *>(
          &v79,
          &v78,
          (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **)&v80,
          &length);
  if ( v32 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD4,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v32,
      bIgnoreCase);
LABEL_99:
    v69 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v69);
    }
    return 0LL;
  }
  v33 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v33 == *((_QWORD **)this + 17) )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
      (_QWORD *)this + 15,
      *((_QWORD **)this + 16),
      (__int64 *)&v79);
  }
  else
  {
    v34 = v79;
    *v33 = v79;
    if ( v34 )
    {
      v35 = *((_QWORD *)v34 + 17);
      while ( v35 >= 0 )
      {
        if ( (_DWORD)v35 != 0x7FFFFFFF )
        {
          v37 = _InterlockedCompareExchange64(v34 + 17, v35 + 1, v35);
          v36 = v35 == v37;
          v35 = v37;
          if ( !v36 )
            continue;
        }
        goto LABEL_52;
      }
      do
        v38 = *(_DWORD *)(2 * v35 + 0x10);
      while ( v38 != 0x7FFFFFFF
           && v38 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v35 + 16), v38 + 1, v38) );
    }
LABEL_52:
    *((_QWORD *)this + 16) += 8LL;
  }
  length = 0LL;
  v39 = v78;
  v40 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler **))(*(_QWORD *)v78 + 48LL))(
          v78,
          &length);
  v41 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v40);
    v42 = length;
    if ( length )
    {
      length = 0LL;
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v43 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v43);
    }
    return v41;
  }
  v80 = 0LL;
  v44 = length;
  v45 = *(__int64 (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *, HSTRING *))(*(_QWORD *)length + 56LL);
  WindowsDeleteString(0LL);
  v80 = 0LL;
  v46 = v45(v44, &v80);
  v47 = v46;
  if ( v46 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v46);
    WindowsDeleteString(v80);
    v80 = 0LL;
    v48 = length;
    if ( length )
    {
      length = 0LL;
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = v79;
    if ( v79 )
    {
      v79 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v49);
    }
    return v47;
  }
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
    (__int64 *)this + 18,
    (__int64)v74,
    &v80,
    (__int64 *)&v79);
  string = 0LL;
  v50 = v79;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_TitleId(
         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v50 + 2),
         &string) >= 0
    && string )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (__int64 *)this + 20,
      (__int64)v74,
      &string,
      (__int64 *)&v79);
  }
  v72 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v39 + 64LL))(
         v39,
         &v72) >= 0 )
  {
    v51 = v72;
    if ( v72 )
    {
      v74[0] = 0LL;
      v52 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v72 + 48LL);
      WindowsDeleteString(0LL);
      v74[0] = 0LL;
      v53 = v52(v51, v74);
      v54 = v53;
      if ( v53 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEF,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v53);
        WindowsDeleteString(v74[0]);
        v74[0] = 0LL;
        v55 = v72;
        if ( v72 )
        {
          v72 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        }
        WindowsDeleteString(string);
        string = 0LL;
        WindowsDeleteString(v80);
        v80 = 0LL;
        v56 = length;
        if ( length )
        {
          length = 0LL;
          (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)v56 + 16LL))(v56);
        }
        v57 = v79;
        if ( v79 )
        {
          v79 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v57);
        }
        return v54;
      }
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
        (__int64 *)this + 22,
        (__int64)v75,
        v74,
        (__int64 *)&v79);
      WindowsDeleteString(v74[0]);
    }
  }
  v73 = 0LL;
  v58 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v39 + 56LL))(
          v39,
          &v73);
  v59 = v73;
  if ( v58 < 0 || !v73 )
  {
LABEL_93:
    if ( v59 )
    {
      v73 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
    }
    v67 = v72;
    if ( v72 )
    {
      v72 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    WindowsDeleteString(string);
    string = 0LL;
    WindowsDeleteString(v80);
    v80 = 0LL;
    v68 = length;
    if ( length )
    {
      length = 0LL;
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)v68 + 16LL))(v68);
    }
    goto LABEL_99;
  }
  v74[0] = 0LL;
  v60 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v73 + 48LL);
  WindowsDeleteString(0LL);
  v74[0] = 0LL;
  v61 = v60(v59, v74);
  v62 = v61;
  if ( v61 >= 0 )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (__int64 *)this + 24,
      (__int64)v75,
      v74,
      (__int64 *)&v79);
    WindowsDeleteString(v74[0]);
    v59 = v73;
    goto LABEL_93;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
    (const char *)(unsigned int)v61);
  WindowsDeleteString(v74[0]);
  v74[0] = 0LL;
  v63 = v73;
  if ( v73 )
  {
    v73 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  }
  v64 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v80);
  v80 = 0LL;
  v65 = length;
  if ( length )
  {
    length = 0LL;
    (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)v65 + 16LL))(v65);
  }
  v66 = v79;
  if ( v79 )
  {
    v79 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v66);
  }
  return v62;
}
