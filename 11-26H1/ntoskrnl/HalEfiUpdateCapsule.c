/*
 * XREFs of HalEfiUpdateCapsule @ 0x140586DE8
 * Callers:
 *     HalpUpdateCapsule @ 0x14059A910 (HalpUpdateCapsule.c)
 * Callees:
 *     HalpEfiStartRuntimeCode @ 0x140472300 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140472358 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14048F3D0 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x1404AC694 (HalpEfiDecrementEfiCall.c)
 */

__int64 HalEfiUpdateCapsule()
{
  __int64 v0; // r9
  __int64 v1; // r10
  __int64 v2; // r11
  __int64 v3; // r8

  if ( !HalEfiRuntimeServicesTable || !HalEfiRuntimeServicesTable[6] )
    return 3221225474LL;
  HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.QueuedScb + 1);
  HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ThreadTimerDelay);
  HalpEfiStartRuntimeCode(0x40u);
  ((void (__fastcall *)(__int64, __int64, __int64))HalEfiRuntimeServicesTable[6])(v2, v1, v0);
  _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFBF);
  HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.ThreadTimerDelay);
  HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.QueuedScb + 1);
  return HalpConvertEfiToNtStatus(v3);
}
