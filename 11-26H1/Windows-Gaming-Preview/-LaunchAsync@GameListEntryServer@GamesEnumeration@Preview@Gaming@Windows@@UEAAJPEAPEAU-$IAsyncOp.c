/*
 * XREFs of ?LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002B710
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800022B8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x1800249D8 (--0-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler.c)
 *     ?Start@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@MEAAJXZ @ 0x18002FB10 (-Start@-$AsyncBase@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::LaunchAsync(
        volatile signed __int64 *a1,
        _QWORD *a2)
{
  signed __int64 v4; // r8
  bool v5; // zf
  signed __int64 v6; // rax
  volatile signed __int64 *v7; // rbp
  signed __int32 v8; // eax
  signed __int64 v9; // rcx
  signed __int64 v10; // rax
  signed __int32 v11; // eax
  char *v12; // rax
  char *v13; // rdi
  char *v14; // rax
  void *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // edi
  int v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+34h] [rbp-24h]
  char v22; // [rsp+48h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( a1 )
  {
    v4 = *((_QWORD *)a1 + 17);
    while ( v4 >= 0 )
    {
      if ( (_DWORD)v4 != 0x7FFFFFFF )
      {
        v6 = _InterlockedCompareExchange64(a1 + 17, v4 + 1, v4);
        v5 = v4 == v6;
        v4 = v6;
        if ( !v5 )
          continue;
      }
      v7 = a1;
      goto LABEL_10;
    }
    do
      v8 = *(_DWORD *)(2 * v4 + 0x10);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v4 + 16), v8 + 1, v8) );
  }
  v7 = a1;
  if ( a1 )
  {
LABEL_10:
    v9 = *((_QWORD *)a1 + 17);
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = _InterlockedCompareExchange64(a1 + 17, v9 + 1, v9);
        v5 = v9 == v10;
        v9 = v10;
        if ( !v5 )
          continue;
      }
      goto LABEL_17;
    }
    do
      v11 = *(_DWORD *)(2 * v9 + 0x10);
    while ( v11 != 0x7FFFFFFF
         && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v9 + 16), v11 + 1, v11) );
  }
LABEL_17:
  v20 = 3;
  v21 = 128LL;
  v12 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( !v12 )
  {
    *a2 = 0LL;
    goto LABEL_29;
  }
  *((_QWORD *)v12 + 1) = a1;
  v14 = v12 + 16;
  *(_QWORD *)v14 = 0LL;
  if ( v14 != &v22 )
  {
    *(_QWORD *)v14 = a1;
    v7 = 0LL;
  }
  *(_QWORD *)v13 = &off_180049BF8;
  *((_DWORD *)v13 + 6) = 0;
  `eh vector constructor iterator'(v13 + 32, 8LL, 1LL, (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
  *((_DWORD *)v13 + 6) = 0;
  *a2 = 0LL;
  v15 = operator new(0x150uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v15
    || (v16 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
                (__int64)v15,
                (__int64)&v20,
                (__int64)L"Windows.Foundation.IAsyncOperation`1<Boolean>",
                0),
        (v17 = v16) == 0) )
  {
    (**(void (__fastcall ***)(char *, __int64))v13)(v13, 1LL);
LABEL_29:
    v18 = -2147024882;
    goto LABEL_30;
  }
  *(_QWORD *)(v16 + 264) = v13;
  v18 = Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::Start(v16 + 8);
  if ( v18 >= 0 )
  {
    *a2 = v17 + 184;
    v17 = 0LL;
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v17 + 8) + 16LL))(v17 + 8);
LABEL_30:
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v7);
  if ( v18 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x40E,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v18);
  if ( a1 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(a1);
  return (unsigned int)v18;
}
