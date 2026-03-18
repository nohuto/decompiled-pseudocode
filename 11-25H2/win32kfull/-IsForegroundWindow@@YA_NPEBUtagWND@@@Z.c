/*
 * XREFs of ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x1401EF48C
 * Callers:
 *     ?IncVisWindows@@YAXPEAUtagWND@@@Z @ 0x14005A898 (-IncVisWindows@@YAXPEAUtagWND@@@Z.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1401EF420 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     ?IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z @ 0x14026B178 (-IsWindowEligibleForMinimize@CRecalcState@@AEAA_NPEBUtagWND@@@Z.c)
 *     ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x140279DF0 (-xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsForegroundWindow(const struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18888);
  return v3 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 472LL)
      && *(const struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 18888) + 128LL) == a1;
}
