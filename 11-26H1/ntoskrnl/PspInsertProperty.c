/*
 * XREFs of PspInsertProperty @ 0x14045940C
 * Callers:
 *     PspSetPropertyHelper @ 0x1404593E8 (PspSetPropertyHelper.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PspFindPropertySetEntry @ 0x1404595B0 (PspFindPropertySetEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInsertProperty(KSPIN_LOCK *a1, KSPIN_LOCK a2, void *a3)
{
  int v3; // edi
  KSPIN_LOCK *Pool2; // rbx
  KIRQL v8; // r12
  KSPIN_LOCK v9; // rax

  v3 = 0;
  Pool2 = (KSPIN_LOCK *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v8 = KeAcquireSpinLockRaiseToDpc(a1 + 2);
    if ( PspFindPropertySetEntry(a1, a2) )
    {
      v3 = -1073741771;
    }
    else
    {
      Pool2[2] = a2;
      Pool2[3] = (KSPIN_LOCK)a3;
      v9 = *a1;
      if ( *(KSPIN_LOCK **)(*a1 + 8) != a1 )
        __fastfail(3u);
      *Pool2 = v9;
      Pool2[1] = (KSPIN_LOCK)a1;
      *(_QWORD *)(v9 + 8) = Pool2;
      *a1 = (KSPIN_LOCK)Pool2;
      ObfReferenceObjectWithTag(a3, 0x72507350u);
    }
    KeReleaseSpinLock(a1 + 2, v8);
    if ( v3 < 0 )
      ExFreePoolWithTag(Pool2, 0x50737050u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
