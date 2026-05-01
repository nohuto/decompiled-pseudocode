/*
 * XREFs of ?SetCategoryAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJW4GameListCategory@2345@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___ @ 0x180024574 (Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Intern_ea_180024574.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetCategoryAsync(
        __int64 a1,
        int a2,
        __int64 a3)
{
  signed __int64 v5; // rcx
  bool v6; // zf
  signed __int64 v7; // rax
  signed __int32 v8; // eax
  signed __int64 v9; // rcx
  signed __int64 v10; // rax
  signed __int32 v11; // eax
  int v12; // edi
  int v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+24h] [rbp-34h]
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  volatile signed __int64 *v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(_DWORD *)(a1 + 144) == 1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x544,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 136);
    while ( v5 >= 0 )
    {
      if ( (_DWORD)v5 != 0x7FFFFFFF )
      {
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v5 + 1, v5);
        v6 = v5 == v7;
        v5 = v7;
        if ( !v6 )
          continue;
      }
      goto LABEL_10;
    }
    do
      v8 = *(_DWORD *)(2 * v5 + 0x10);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v5 + 16), v8 + 1, v8) );
LABEL_10:
    v9 = *(_QWORD *)(a1 + 136);
    v15 = a1;
    v16 = (volatile signed __int64 *)a1;
    while ( v9 >= 0 )
    {
      if ( (_DWORD)v9 != 0x7FFFFFFF )
      {
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 136), v9 + 1, v9);
        v6 = v9 == v10;
        v9 = v10;
        if ( !v6 )
          continue;
      }
      goto LABEL_17;
    }
    do
      v11 = *(_DWORD *)(2 * v9 + 0x10);
    while ( v11 != 0x7FFFFFFF
         && v11 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v9 + 16), v11 + 1, v11) );
LABEL_17:
    v17 = a2;
    v13 = 3;
    v14 = 128LL;
    v12 = Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_0adeea27616b30382c54e31f2f6dc703___(
            (__int64)&v13,
            a3,
            a3,
            (__int64)&v15);
    if ( v16 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v16);
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x557,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)a1);
    return (unsigned int)v12;
  }
}
