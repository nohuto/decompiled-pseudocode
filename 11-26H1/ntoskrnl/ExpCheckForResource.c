/*
 * XREFs of ExpCheckForResource @ 0x140344B48
 * Callers:
 *     ExpFreePoolChecks @ 0x140344A90 (ExpFreePoolChecks.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     DbgPrintEx @ 0x140397530 (DbgPrintEx.c)
 *     VfCheckForResource @ 0x140C461BC (VfCheckForResource.c)
 */

__int64 __fastcall ExpCheckForResource(struct _KTHREAD *a1, ULONG_PTR a2)
{
  KIRQL v5; // al
  struct _KTHREAD *i; // rbx

  if ( ((MmVerifierData & 0x800) == 0 || !(unsigned int)VfCheckForResource((ULONG_PTR)a1, a2))
    && (unsigned int)KeNumberProcessors_0 <= 1
    && (ExResourceCheckFlags & 1) != 0 )
  {
    v5 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
    for ( i = *(struct _KTHREAD **)&ExSaPageGroupDescriptorArrayLock.Spare36;
          i != (struct _KTHREAD *)&ExSaPageGroupDescriptorArrayLock.Spare36;
          i = *(struct _KTHREAD **)&i->Header.Lock )
    {
      if ( i >= a1 && i < (struct _KTHREAD *)((char *)a1 + a2) )
      {
        DbgPrintEx(
          0,
          0,
          "EX: ExFreePool( %p, %Ix ) contains an ERESOURCE structure that has not been ExDeleteResourced\n",
          a1,
          a2);
        __debugbreak();
      }
    }
    ExReleaseSpinLockShared(&ExpResourceSpinLock, v5);
  }
  return 0LL;
}
