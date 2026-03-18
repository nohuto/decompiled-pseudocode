/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x140C346E4
 * Callers:
 *     VerifierExAllocatePool @ 0x140C2F790 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool3 @ 0x140C2F8B0 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithTag @ 0x140C2FB90 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140C2FCC0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool2 @ 0x140C44E00 (VerifierExAllocatePool2.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExCheckSingleFilter @ 0x14043AD5C (ExCheckSingleFilter.c)
 *     VfFaultsInjectResourceFailure @ 0x140C347B4 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagPresentInList @ 0x140C34FA8 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  KIRQL v3; // r11
  unsigned int IsTagPresentInList; // ebx

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_140FF193C;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FF1964;
    return 0LL;
  }
  KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(a1, 1819692358) )
  {
    IsTagPresentInList = 0;
  }
  else if ( ViFaultTagsList == &ViFaultTagsList )
  {
    IsTagPresentInList = 1;
  }
  else
  {
    IsTagPresentInList = ViFaultsIsTagPresentInList(a1);
    if ( IsTagPresentInList )
      ++dword_140FF1960;
    else
      ++dword_140FF195C;
  }
  KeReleaseSpinLock(&ViFaultInjectionLock, v3);
  if ( IsTagPresentInList )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return IsTagPresentInList;
}
