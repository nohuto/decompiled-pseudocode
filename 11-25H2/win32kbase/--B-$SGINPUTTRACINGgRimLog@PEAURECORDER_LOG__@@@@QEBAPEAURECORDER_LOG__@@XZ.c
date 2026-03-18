/*
 * XREFs of ??B?$SGINPUTTRACINGgRimLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x1400E7F08
 * Callers:
 *     RIMOnPnpNotification @ 0x140039E20 (RIMOnPnpNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGINPUTTRACINGgRimLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *(__int64 a1, __int64 a2)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19336);
}
