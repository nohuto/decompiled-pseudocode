/*
 * XREFs of HalEfiSetEnvironmentVariable @ 0x14046B3F4
 * Callers:
 *     HalSetEnvironmentVariableEx @ 0x14046B270 (HalSetEnvironmentVariableEx.c)
 * Callees:
 *     HalpEfiStartRuntimeCode @ 0x14046BA80 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x14046BAD8 (HalpConvertEfiToNtStatus.c)
 */

__int64 __fastcall HalEfiSetEnvironmentVariable(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[5] )
    return 3221225474LL;
  _InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount + 1);
  _InterlockedIncrement((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadTransferCount);
  _InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount + 1);
  _InterlockedIncrement((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount);
  HalpEfiStartRuntimeCode(32LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalEfiRuntimeServicesTable[5])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFDF);
  _InterlockedDecrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount + 1);
  _InterlockedDecrement((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount);
  _InterlockedDecrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.WriteOperationCount + 1);
  _InterlockedDecrement((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ReadTransferCount);
  return HalpConvertEfiToNtStatus(v4);
}
