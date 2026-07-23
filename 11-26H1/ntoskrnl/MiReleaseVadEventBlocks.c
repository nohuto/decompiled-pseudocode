/*
 * XREFs of MiReleaseVadEventBlocks @ 0x140A01D8C
 * Callers:
 *     MiDeleteNewlyCreatedPartialVads @ 0x1408853D4 (MiDeleteNewlyCreatedPartialVads.c)
 *     MiDataVadErrorCleanup @ 0x1409976EC (MiDataVadErrorCleanup.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14099B400 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfImageSection @ 0x14099E35C (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140A00E9C (MiReserveUserMemory.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MiDeletePartialCloneVads @ 0x140A076D8 (MiDeletePartialCloneVads.c)
 *     MiCloneAncillaryVadInfo @ 0x140A07A00 (MiCloneAncillaryVadInfo.c)
 *     MiInitializePartialVad @ 0x140AC26F4 (MiInitializePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14043B9B0 (MiGetVadWakeList.c)
 *     MiDeleteVadEventBlock @ 0x140A01DE0 (MiDeleteVadEventBlock.c)
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
