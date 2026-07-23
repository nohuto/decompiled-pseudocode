/*
 * XREFs of PspSetProcessFreezeStateCallback @ 0x140618E70
 * Callers:
 *     <none>
 * Callees:
 *     PspRequestProcessExecutionState @ 0x140AFC0F8 (PspRequestProcessExecutionState.c)
 */

__int64 __fastcall PspSetProcessFreezeStateCallback(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = *(_BYTE *)(a2 + 8);
  PspRequestProcessExecutionState(a1, a2, 0LL);
  return 0LL;
}
