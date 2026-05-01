/*
 * XREFs of _BroadcastDVRComponent::GetNonServiceProcessListAndIds_::_1_::catch$7 @ 0x1806CF5C3
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::GetNonServiceProcessListAndIds_::_1_::catch_7(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::_Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 4232),
    (void *)0x873,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
