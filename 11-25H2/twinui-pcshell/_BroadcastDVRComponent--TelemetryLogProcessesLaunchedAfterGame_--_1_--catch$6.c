/*
 * XREFs of _BroadcastDVRComponent::TelemetryLogProcessesLaunchedAfterGame_::_1_::catch$6 @ 0x1806AD881
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::TelemetryLogProcessesLaunchedAfterGame_::_1_::catch_6(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::_Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x8BF,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    (const char *)0x8007000ELL);
  return 0LL;
}
