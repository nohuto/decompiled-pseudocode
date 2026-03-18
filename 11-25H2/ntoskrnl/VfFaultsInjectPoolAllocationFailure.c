/*
 * XREFs of VfFaultsInjectPoolAllocationFailure @ 0x140B864B0
 * Callers:
 *     VerifierExAllocatePool @ 0x140B81090 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140B811B0 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePool3 @ 0x140B81300 (VerifierExAllocatePool3.c)
 *     VerifierExAllocatePoolWithTag @ 0x140B815E0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140B81700 (VerifierExAllocatePoolWithTagPriority.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExCheckSingleFilter @ 0x1403F904C (ExCheckSingleFilter.c)
 *     VfFaultsInjectResourceFailure @ 0x140B86588 (VfFaultsInjectResourceFailure.c)
 *     ViFaultsIsTagPresentInList @ 0x140B86E14 (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall VfFaultsInjectPoolAllocationFailure(unsigned int a1)
{
  KIRQL v3; // r11
  unsigned int IsTagPresentInList; // ebx

  if ( (MmVerifierData & 4) == 0 )
    return 0LL;
  if ( !ViFaultsInitialized )
  {
    ++dword_140FFDF84;
    return 0LL;
  }
  if ( ViFaultsDisabled )
  {
    ++dword_140FFDFAC;
    return 0LL;
  }
  KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(a1, 1819692358) )
  {
    IsTagPresentInList = 0;
  }
  else
  {
    IsTagPresentInList = ViFaultTagsList == &ViFaultTagsList;
    if ( ViFaultTagsList != &ViFaultTagsList )
    {
      IsTagPresentInList = ViFaultsIsTagPresentInList(a1);
      if ( IsTagPresentInList )
        ++dword_140FFDFA8;
      else
        ++dword_140FFDFA4;
    }
  }
  KeReleaseSpinLock(&ViFaultInjectionLock, v3);
  if ( IsTagPresentInList )
    return (unsigned int)VfFaultsInjectResourceFailure(1LL);
  return IsTagPresentInList;
}
