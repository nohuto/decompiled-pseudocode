/*
 * XREFs of CmpCreateSiloKeyLockEntry @ 0x140A41684
 * Callers:
 *     CmLockKeyForWrite @ 0x140A4BA6C (CmLockKeyForWrite.c)
 * Callees:
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1408C2C40 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x140A41830 (CmpDereferenceKeyControlBlockUnsafe.c)
 */

__int64 __fastcall CmpCreateSiloKeyLockEntry(volatile signed __int64 *a1)
{
  __int64 Pool; // rax
  __int64 v3; // rbx

  CmpReferenceKeyControlBlockUnsafe(a1);
  Pool = CmpAllocatePool(0x100uLL);
  v3 = Pool;
  if ( Pool )
    *(_QWORD *)(Pool + 16) = a1;
  else
    CmpDereferenceKeyControlBlockUnsafe(a1);
  return v3;
}
