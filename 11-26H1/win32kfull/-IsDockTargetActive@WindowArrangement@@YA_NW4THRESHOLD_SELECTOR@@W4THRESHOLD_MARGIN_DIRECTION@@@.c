/*
 * XREFs of ?IsDockTargetActive@WindowArrangement@@YA_NW4THRESHOLD_SELECTOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402F01CC
 * Callers:
 *     ?IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1402C46F4 (-IsDockTargetActive@@YAEPEAUMOVESIZEDATA@@W4THRESHOLD_MARGIN_DIRECTION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangement::IsDockTargetActive(__int64 a1, __int64 a2)
{
  return *(_BYTE *)(*(_QWORD *)(W32GetUserSessionState(a1, a2) + 63432) + 4LL * (int)a1 + (int)a2) != 0;
}
