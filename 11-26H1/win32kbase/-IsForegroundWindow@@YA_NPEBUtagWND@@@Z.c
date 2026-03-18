/*
 * XREFs of ?IsForegroundWindow@@YA_NPEBUtagWND@@@Z @ 0x1400DE1CC
 * Callers:
 *     ?doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z @ 0x1400DDE5C (-doImmediateBoostAll@GroupedFGBoostProp@@AEAAXW4BoostFlag@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsForegroundWindow(const struct tagWND *a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 18928);
  return v4 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL)
      && *(const struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v5, v4, v6) + 18928) + 128LL) == a1;
}
