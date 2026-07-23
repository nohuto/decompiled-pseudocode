/*
 * XREFs of CcDereferenceVacbArray @ 0x140409730
 * Callers:
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcRemoveVacbArray @ 0x1405B46B4 (CcRemoveVacbArray.c)
 *     CcFreeVacbArray @ 0x14078CC5C (CcFreeVacbArray.c)
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
