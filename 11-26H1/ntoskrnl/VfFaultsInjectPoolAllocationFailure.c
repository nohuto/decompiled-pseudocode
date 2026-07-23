/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x140C3A6F4
 * Callers:
 *     VerifierExAllocatePool @ 0x140C357A0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool3 @ 0x140C358C0 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithTag @ 0x140C35BA0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140C35CD0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExAllocatePool2 @ 0x140C4AE10 (VerifierExAllocatePool2.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExCheckSingleFilter @ 0x14042D60C (ExCheckSingleFilter.c)
 *     VfFaultsInjectResourceFailure @ 0x140C3A7C4 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagPresentInList @ 0x140C3AFB8 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  KIRQL v3; // r11
  unsigned int IsTagPresentInList; // ebx

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_140FF293C;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FF2964;
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
      ++dword_140FF2960;
    else
      ++dword_140FF295C;
  }
  KeReleaseSpinLock(&ViFaultInjectionLock, v3);
  if ( IsTagPresentInList )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return IsTagPresentInList;
}
