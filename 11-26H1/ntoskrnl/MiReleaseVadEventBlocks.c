/*
 * XREFs of MiReleaseVadEventBlocks @ 0x14095C4CC
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x14087EFD4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiReserveUserMemory @ 0x14095B5DC (MiReserveUserMemory.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x1409619E4 (MiDeletePartialCloneVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140961D0C (MiCloneAncillaryVadInfo.c)
 *     MiDataVadErrorCleanup @ 0x1409C670C (MiDataVadErrorCleanup.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1409CA420 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x1409CD37C (MiMapViewOfImageSection.c)
 *     MiInitializePartialVad @ 0x140AC0654 (MiInitializePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140442EA0 (MiGetVadWakeList.c)
 *     MiDeleteVadEventBlock @ 0x14095C520 (MiDeleteVadEventBlock.c)
 */

_QWORD *__fastcall MiReleaseVadEventBlocks(__int64 a1)
{
  _KPROCESS *Process; // rdi
  _QWORD *result; // rax
  _QWORD *v3; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (_QWORD *)MiGetVadWakeList(a1, 4294966750LL);
  if ( result )
  {
    do
    {
      v3 = (_QWORD *)*result;
      MiDeleteVadEventBlock((ULONG_PTR)Process, result);
      result = v3;
    }
    while ( v3 );
  }
  return result;
}
