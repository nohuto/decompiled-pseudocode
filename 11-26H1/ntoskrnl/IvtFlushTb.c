/*
 * XREFs of IvtFlushTb @ 0x1405A8D10
 * Callers:
 *     <none>
 * Callees:
 *     IvtFlushTbInternal @ 0x14043417C (IvtFlushTbInternal.c)
 */

void __fastcall IvtFlushTb(__int64 a1, int a2, __int64 a3, __int64 a4, _QWORD *a5, unsigned int a6, __int64 a7)
{
  IvtFlushTbInternal(a1, 0LL, a2, a3, 0, a4, a5, a6, a7);
}
