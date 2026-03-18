/*
 * XREFs of ??B?$SGTRACINGgBaseLog@PEAURECORDER_LOG__@@@@QEBAPEAURECORDER_LOG__@@XZ @ 0x14012AE68
 * Callers:
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x14004BBA0 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SGTRACINGgBaseLog<RECORDER_LOG__ *>::operator RECORDER_LOG__ *(int a1, int a2, int a3)
{
  return *(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 69136);
}
