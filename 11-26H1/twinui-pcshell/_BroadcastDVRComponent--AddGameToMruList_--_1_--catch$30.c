/*
 * XREFs of _BroadcastDVRComponent::AddGameToMruList_::_1_::catch$30 @ 0x1806D5D4E
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::AddGameToMruList_::_1_::catch_30(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::_Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 792),
    (void *)0x1037,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
