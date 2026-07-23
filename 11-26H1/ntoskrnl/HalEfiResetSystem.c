/*
 * XREFs of HalEfiResetSystem @ 0x14058902C
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140581D44 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140581FB0 (HalpShutdown.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     HalpEfiStartRuntimeCode @ 0x14046BA80 (HalpEfiStartRuntimeCode.c)
 *     HalpEfiIncrementEfiCall @ 0x140488E18 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x1404A5D24 (HalpEfiDecrementEfiCall.c)
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
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadTransferCount + 1);
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount);
    HalpEfiStartRuntimeCode(4u);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalEfiRuntimeServicesTable[2])(v2, 0LL, 0LL, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFB);
    HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount);
    result = (__int64 *)HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadTransferCount + 1);
    if ( v1 )
      _enable();
  }
  return result;
}
