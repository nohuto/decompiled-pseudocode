/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x140861CAC
 * Callers:
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A74604 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140861CF4 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(ULONG_PTR *a1)
{
  if ( a1[3] )
    CmpGlobalUnlockKeyForWrite(a1[2]);
  CmpDereferenceKeyControlBlock(a1[2]);
  CmpFreeTransientPoolWithTag(a1, 0x34374D43u);
}
