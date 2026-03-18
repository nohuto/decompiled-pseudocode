/*
 * XREFs of HalEfiSetEnvironmentVariable @ 0x140471C74
 * Callers:
 *     HalSetEnvironmentVariableEx @ 0x140471AF0 (HalSetEnvironmentVariableEx.c)
 * Callees:
 *     HalpEfiStartRuntimeCode @ 0x140472300 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140472358 (HalpConvertEfiToNtStatus.c)
 */

__int64 __fastcall HalEfiSetEnvironmentVariable(__int64 a1)
{
  unsigned int v2; // r10d
  __int64 v3; // r11
  __int64 v4; // rax

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[5] )
    return 3221225474LL;
  _InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
  _InterlockedIncrement((volatile signed __int32 *)HalpDeviceBlockUnblockPushLock.TracingPrivate);
  _InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
  _InterlockedIncrement((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount);
  HalpEfiStartRuntimeCode(32LL);
  v4 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalEfiRuntimeServicesTable[5])(a1, v3, v2);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFDF);
  _InterlockedDecrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
  _InterlockedDecrement((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount);
  _InterlockedDecrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
  _InterlockedDecrement((volatile signed __int32 *)HalpDeviceBlockUnblockPushLock.TracingPrivate);
  return HalpConvertEfiToNtStatus(v4);
}
