/*
 * XREFs of ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14015BB1C
 * Callers:
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::operator() @ 0x14015BAAC (_lambda_1a8a671d465f8785bc97c99107a222a3_--operator().c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z @ 0x14015BDEC (-IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z.c)
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x140295F3C (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x14029D8E8 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsForegroundWindow(const struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18928);
  return v3 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL)
      && *(const struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18928) + 128LL) == a1;
}
