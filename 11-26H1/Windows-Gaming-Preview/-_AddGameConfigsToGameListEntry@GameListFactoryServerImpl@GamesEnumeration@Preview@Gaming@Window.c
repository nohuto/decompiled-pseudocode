/*
 * XREFs of ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800220CC
 * Callers:
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x1800196C4 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001A51C (_lambda_c7e28edb760347053732171cef665d5d_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ @ 0x18000CD0C (--0GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x180014968 (-GetGameFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@AEAV-$unique_ptr@UG.c)
 *     ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800275B0 (-AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QE.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002EA48 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
        __int64 a1,
        __int64 a2,
        volatile signed __int64 **a3,
        __int64 **a4)
{
  int v7; // edx
  unsigned int v8; // esi
  unsigned int v9; // r15d
  __int128 v10; // xmm6
  int GameFromGameConfigStore; // ebx
  volatile signed __int64 *v12; // rcx
  __int64 v13; // rdi
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v14; // rax
  volatile signed __int64 *v15; // rbx
  const struct std::nothrow_t *v16; // rdx
  int v17; // edi
  signed __int64 v18; // rcx
  bool v19; // zf
  signed __int64 v20; // rax
  signed __int32 v21; // eax
  const struct std::nothrow_t *v22; // rdx
  __int64 v24; // rdx
  const struct std::nothrow_t *v25; // rdx
  void *v26[2]; // [rsp+38h] [rbp-59h] BYREF
  __int128 v27; // [rsp+48h] [rbp-49h] BYREF
  __int128 v28; // [rsp+58h] [rbp-39h] BYREF
  volatile signed __int64 *v29; // [rsp+68h] [rbp-29h]
  __int64 v30; // [rsp+70h] [rbp-21h]
  unsigned int v31; // [rsp+78h] [rbp-19h] BYREF
  int *v32; // [rsp+80h] [rbp-11h]
  int v33; // [rsp+88h] [rbp-9h] BYREF
  __int128 v34; // [rsp+8Ch] [rbp-5h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v30 = a2;
  v32 = &v33;
  v33 = 0;
  v34 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 56LL))(a2, &v31);
  *v32 = v7;
  if ( v7 >= 0 && v31 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v30 + 48LL))(v30, 0LL, &v34);
    *v32 = v7;
  }
  v8 = 0;
  v9 = v31;
  while ( 1 )
  {
    if ( v7 < 0 || v8 == v9 )
      return 0LL;
    v10 = v34;
    v26[0] = 0LL;
    v28 = v34;
    GameFromGameConfigStore = GetGameFromGameConfigStore(*a4, &v28, v26);
    if ( GameFromGameConfigStore < 0 )
    {
      v24 = 549LL;
      goto LABEL_37;
    }
    v12 = *a3;
    if ( *a3 )
      break;
    v13 = *(_QWORD *)(a1 + 128);
    *a3 = 0LL;
    v14 = (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)operator new(
                                                                               0x130uLL,
                                                                               (const struct std::nothrow_t *)&std::nothrow);
    if ( !v14 )
    {
      v17 = -2147024882;
LABEL_32:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v17);
      if ( v26[0] )
        operator delete(v26[0], v22);
      return (unsigned int)v17;
    }
    v15 = (volatile signed __int64 *)Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::GameListEntryServer(v14);
    v29 = v15;
    *(_QWORD *)&v28 = 0LL;
    v27 = v10;
    v17 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
            (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)v15,
            (v13 + 8) & -(__int64)(v13 != 0));
    if ( v17 < 0 )
    {
      if ( v15 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v15);
      goto LABEL_32;
    }
    if ( v15 )
    {
      v18 = *((_QWORD *)v15 + 17);
      while ( v18 >= 0 )
      {
        if ( (_DWORD)v18 != 0x7FFFFFFF )
        {
          v16 = (const struct std::nothrow_t *)(v18 + 1);
          v20 = _InterlockedCompareExchange64(v15 + 17, v18 + 1, v18);
          v19 = v18 == v20;
          v18 = v20;
          if ( !v19 )
            continue;
        }
        goto LABEL_19;
      }
      do
      {
        v21 = *(_DWORD *)(2 * v18 + 0x10);
        if ( v21 == 0x7FFFFFFF )
          break;
        v16 = (const struct std::nothrow_t *)(unsigned int)(v21 + 1);
      }
      while ( v21 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v18 + 16), (signed __int32)v16, v21) );
    }
LABEL_19:
    *a3 = v15;
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v15);
LABEL_23:
    if ( v26[0] )
      operator delete(v26[0], v16);
    ++v8;
    v7 = *v32;
    if ( *v32 < 0 )
      return 0LL;
    if ( v8 < v31 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v30 + 48LL))(v30, v8, &v34);
      *v32 = v7;
    }
  }
  v27 = v10;
  GameFromGameConfigStore = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
                              v12 + 3,
                              &v27,
                              v26,
                              a4);
  if ( GameFromGameConfigStore >= 0 )
    goto LABEL_23;
  v24 = 566LL;
LABEL_37:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v24,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
    (const char *)(unsigned int)GameFromGameConfigStore);
  if ( v26[0] )
    operator delete(v26[0], v25);
  return (unsigned int)GameFromGameConfigStore;
}
