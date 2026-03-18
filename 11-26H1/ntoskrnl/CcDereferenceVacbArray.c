/*
 * XREFs of CcDereferenceVacbArray @ 0x140415100
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAcquireQueuedSpinLock @ 0x1402B4690 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x1405B1EA4 (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x14078A12C (CcFreeVacbArray.c)
 */

__int64 __fastcall CcDereferenceVacbArray(__int64 a1, char a2)
{
  KIRQL v2; // bl
  int v5; // eax
  __int64 result; // rax

  v2 = 0;
  if ( !a2 )
    v2 = KeAcquireQueuedSpinLock(4uLL);
  v5 = *(_DWORD *)(a1 + 4);
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x1A5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  result = (unsigned int)(v5 - 1);
  *(_DWORD *)(a1 + 4) = result;
  if ( !a2 )
  {
    if ( (_DWORD)result )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer
                                                                     + 64));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
      result = v2;
      __writecr8(v2);
    }
    else
    {
      CcRemoveVacbArray(a1);
      KeReleaseQueuedSpinLock(4uLL, v2);
      return CcFreeVacbArray(a1);
    }
  }
  return result;
}
