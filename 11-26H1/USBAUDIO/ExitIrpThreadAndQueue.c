/*
 * XREFs of ExitIrpThreadAndQueue @ 0x14000BE20
 * Callers:
 *     DeviceStop @ 0x14002EEA0 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x140040850 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x14002E644 (CleanupPendingIrpQ.c)
 */

LONG_PTR __fastcall ExitIrpThreadAndQueue(__int64 a1)
{
  LONG_PTR result; // rax

  result = CleanupPendingIrpQ();
  if ( *(_QWORD *)(a1 + 704) )
  {
    *(_BYTE *)(a1 + 712) = 1;
    KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 672), 0, 1, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 704), Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(*(PVOID *)(a1 + 704));
    *(_QWORD *)(a1 + 704) = 0LL;
  }
  return result;
}
