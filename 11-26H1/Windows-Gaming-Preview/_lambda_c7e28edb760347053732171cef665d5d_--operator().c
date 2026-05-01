/*
 * XREFs of _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001A51C
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x1800213C0 (Windows--Internal--COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d___ea_1800213C0.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800142E8 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800220CC (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@Shim@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18002269C (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall lambda_c7e28edb760347053732171cef665d5d_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  HRESULT v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbx
  unsigned int (__fastcall *v14)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **); // rsi
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v15; // rdx
  unsigned int v16; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v17; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rdx
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v21; // rbx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v22; // rdx
  int v23; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v24; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HRESULT v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v33; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, HSTRING, __int64 *); // rsi
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v43; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // r14d
  volatile signed __int32 *v49; // rsi
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v52; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // esi
  volatile signed __int32 *v58; // rbx
  __int64 v59; // rcx
  __int64 v60; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v61; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  int v65; // eax
  volatile signed __int32 *v66; // rbx
  __int64 v67; // rcx
  __int64 v68; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v69; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v70; // rcx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 *v73; // rdi
  __int64 v74; // rcx
  __int64 v75; // rcx
  volatile signed __int32 *v76; // rsi
  __int64 v77; // rcx
  __int64 v78; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v79; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  __int64 v83; // [rsp+20h] [rbp-79h] BYREF
  __int64 v84; // [rsp+28h] [rbp-71h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v85; // [rsp+30h] [rbp-69h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v86; // [rsp+38h] [rbp-61h] BYREF
  __int64 v87; // [rsp+40h] [rbp-59h] BYREF
  __int64 v88; // [rsp+48h] [rbp-51h] BYREF
  int v89; // [rsp+50h] [rbp-49h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v90; // [rsp+58h] [rbp-41h] BYREF
  __int128 v91; // [rsp+60h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-29h] BYREF
  HSTRING string; // [rsp+88h] [rbp-11h] BYREF
  HSTRING_HEADER v94; // [rsp+90h] [rbp-9h] BYREF
  HSTRING v95; // [rsp+A8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v84 = 0LL;
  v83 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, &v84);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v4);
    v6 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[1] + 72LL))(a1[1], &v83);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    v9 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v5;
  }
  string = 0LL;
  v11 = WindowsCreateStringReference(L"FullTileId", 0xAu, &hstringHeader, &string);
  if ( v11 < 0 )
  {
LABEL_171:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    JUMPOUT(0x18001AFEFLL);
  }
  v86 = 0LL;
  v85 = 0LL;
  v12 = (*(unsigned int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **))(*(_QWORD *)v84 + 48LL))(
          v84,
          string,
          &v86) >> 31;
  v13 = v83;
  v14 = *(unsigned int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **))(*(_QWORD *)v83 + 48LL);
  v15 = v85;
  if ( v85 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v14(v13, string, &v85) >> 31;
  if ( !(_BYTE)v12 && !(_BYTE)v16 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    v17 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    string = 0LL;
    v19 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v5;
  }
  v21 = 0LL;
  v90 = 0LL;
  if ( !(_BYTE)v12 || !(_BYTE)v16 )
  {
    v22 = v85;
    if ( !(_BYTE)v12 )
      v22 = v86;
    v23 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_CreateGameListEntryFromTileId(
            (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *)a1[2],
            v22,
            &v90);
    v5 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v23);
      if ( v90 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v90);
      v24 = v85;
      if ( v85 )
      {
        v85 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v25 + 16LL))(v25);
      }
      string = 0LL;
      v26 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = v84;
      if ( v84 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      return v5;
    }
    v21 = v90;
  }
  v95 = 0LL;
  v28 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &v94, &v95);
  if ( v28 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28);
    goto LABEL_171;
  }
  v88 = 0LL;
  v87 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v84 + 48LL))(v84, v95, &v88);
  v30 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v29);
    v31 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v95 = 0LL;
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
    v33 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v34 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    string = 0LL;
    v35 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    return v30;
  }
  v37 = v83;
  v38 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v83 + 48LL);
  v39 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = v38(v37, v95, &v87);
  v30 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v40);
    v41 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v95 = 0LL;
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
    v43 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v44 + 16LL))(v44);
    }
    string = 0LL;
    v45 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v46 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    return v30;
  }
  v91 = 0LL;
  v47 = CreateGameConfigStoreClientIfNeeded(&v91);
  v48 = v47;
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v47);
    v49 = (volatile signed __int32 *)*((_QWORD *)&v91 + 1);
    if ( *((_QWORD *)&v91 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      }
    }
    v50 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v51 = v88;
    if ( v88 )
    {
      v88 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v95 = 0LL;
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
    v52 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v53 + 16LL))(v53);
    }
    string = 0LL;
    v54 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    return v48;
  }
  v89 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v88 + 56LL))(v88, &v89) >= 0 && v89 )
  {
    v56 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
            a1[2],
            v88,
            &v90,
            &v91);
    v57 = v56;
    if ( v56 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v56);
      v58 = (volatile signed __int32 *)*((_QWORD *)&v91 + 1);
      if ( *((_QWORD *)&v91 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v58)(v58);
          if ( _InterlockedExchangeAdd(v58 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v58 + 8LL))(v58);
        }
      }
      v59 = v87;
      if ( v87 )
      {
        v87 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      }
      v60 = v88;
      if ( v88 )
      {
        v88 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v60 + 16LL))(v60);
      }
      v95 = 0LL;
      if ( v90 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v90);
      v61 = v85;
      if ( v85 )
      {
        v85 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v61 + 16LL))(v61);
      }
      v62 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v62 + 16LL))(v62);
      }
      string = 0LL;
      v63 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      }
      v64 = v84;
      if ( v84 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
      }
      return v57;
    }
    v21 = v90;
  }
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v87 + 56LL))(v87, &v89) >= 0 && v89 )
  {
    v65 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
            a1[2],
            v87,
            &v90,
            &v91);
    v57 = v65;
    if ( v65 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v65);
      v66 = (volatile signed __int32 *)*((_QWORD *)&v91 + 1);
      if ( *((_QWORD *)&v91 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v66)(v66);
          if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
        }
      }
      v67 = v87;
      if ( v87 )
      {
        v87 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
      }
      v68 = v88;
      if ( v88 )
      {
        v88 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v95 = 0LL;
      if ( v90 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v90);
      v69 = v85;
      if ( v85 )
      {
        v85 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v69 + 16LL))(v69);
      }
      v70 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v70 + 16LL))(v70);
      }
      string = 0LL;
      v71 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
      }
      v72 = v84;
      if ( v84 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v72 + 16LL))(v72);
      }
      return v57;
    }
    v21 = v90;
  }
  v73 = (__int64 *)(a2 + 16);
  v74 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( v74 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  v75 = *v73;
  if ( v21 )
  {
    if ( v75 )
    {
      *v73 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    }
    RoGetAgileReference(0LL, &GUID_735924d3_811f_4494_b69c_c641a0c61543, v21, a2 + 16);
  }
  else
  {
    *v73 = 0LL;
    if ( v75 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
  }
  v76 = (volatile signed __int32 *)*((_QWORD *)&v91 + 1);
  if ( *((_QWORD *)&v91 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v76)(v76);
      if ( _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v76 + 8LL))(v76);
    }
  }
  v77 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
  }
  v78 = v88;
  if ( v88 )
  {
    v88 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 16LL))(v78);
  }
  v95 = 0LL;
  if ( v21 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
  v79 = v85;
  if ( v85 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v79 + 16LL))(v79);
  }
  v80 = v86;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v80 + 16LL))(v80);
  }
  string = 0LL;
  v81 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
  }
  v82 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v82 + 16LL))(v82);
  }
  return 0LL;
}
