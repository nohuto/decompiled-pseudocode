/*
 * XREFs of HalEfiResetSystem @ 0x140586B0C
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x14057F824 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x14057FA90 (HalpShutdown.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     HalpEfiStartRuntimeCode @ 0x140472300 (HalpEfiStartRuntimeCode.c)
 *     HalpEfiIncrementEfiCall @ 0x14048F3D0 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x1404AC694 (HalpEfiDecrementEfiCall.c)
 */

__int64 *HalEfiResetSystem()
{
  __int64 *result; // rax
  bool v1; // bl
  unsigned int v2; // r10d

  result = HalEfiRuntimeServicesTable;
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[2] )
  {
    v1 = HalpDisableInterrupts();
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.Spare26);
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount);
    HalpEfiStartRuntimeCode(4u);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalEfiRuntimeServicesTable[2])(v2, 0LL, 0LL, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFB);
    HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount);
    result = (__int64 *)HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.Spare26);
    if ( v1 )
      _enable();
  }
  return result;
}
