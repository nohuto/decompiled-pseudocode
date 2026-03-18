/*
 * XREFs of CmpDisableLazyFlush @ 0x14051204C
 * Callers:
 *     CmFreezeRegistry @ 0x140AE3390 (CmFreezeRegistry.c)
 *     CmSetLazyFlushState @ 0x140B46A24 (CmSetLazyFlushState.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
