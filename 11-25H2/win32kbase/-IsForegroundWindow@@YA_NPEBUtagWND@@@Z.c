/*
 * XREFs of ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x14009D3C4
 * Callers:
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x14009C850 (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
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
