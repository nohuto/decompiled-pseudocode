/*
 * XREFs of CmpCreateGlobalKeyLockEntry @ 0x140B4EA48
 * Callers:
 *     CmpGlobalLockKeyForWrite @ 0x140B1034C (CmpGlobalLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408BC670 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A2F9B0 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateGlobalKeyLockEntry(volatile signed __int64 *a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(0x100uLL);
  v3 = Pool;
  if ( Pool )
  {
    *(_QWORD *)(Pool + 16) = 1LL;
    *(_QWORD *)(Pool + 24) = a1;
  }
  else
  {
    CmpDereferenceKeyControlBlockUnsafe(a1);
  }
  return v3;
}
