/*
 * XREFs of CmpDisableLazyFlush @ 0x14050BABC
 * Callers:
 *     CmFreezeRegistry @ 0x140AE0F10 (CmFreezeRegistry.c)
 *     CmSetLazyFlushState @ 0x140B48A54 (CmSetLazyFlushState.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpDisableLazyFlush(unsigned int a1)
{
  _InterlockedOr(&CmpHoldLazyFlush, a1);
}
