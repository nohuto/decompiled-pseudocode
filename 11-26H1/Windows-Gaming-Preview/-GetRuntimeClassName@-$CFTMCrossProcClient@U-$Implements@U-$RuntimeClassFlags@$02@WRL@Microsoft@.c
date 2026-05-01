/*
 * XREFs of ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18002A4F0
 * Callers:
 *     ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A590 (-GetRuntimeClassName@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@W_ea_18002A590.c)
 *     ?GetRuntimeClassName@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18002A5A0 (-GetRuntimeClassName@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@W_ea_18002A5A0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CFTMCrossProcClient<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>>::GetRuntimeClassName(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 112);
  if ( v4 )
  {
    v7 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 24LL))(
           v4,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v7);
    if ( v5 >= 0 )
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v7 + 32LL))(v7, a2);
    v3 = v7;
  }
  else
  {
    v5 = -2147467259;
  }
  if ( v3 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return (unsigned int)v5;
}
