/*
 * XREFs of _BroadcastDVRComponent::CompleteInitializationTask_::_1_::catch$49 @ 0x1806AA6FA
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802E0170 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall BroadcastDVRComponent::CompleteInitializationTask_::_1_::catch_49(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 312),
    (void *)0x122,
    (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
    a4);
  return 0LL;
}
