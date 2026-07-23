/*
 * XREFs of HalpQueryCapsuleCapabilities @ 0x14059CF40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x14046BA80 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x14046BAD8 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x140488E18 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x1404A5D24 (HalpEfiDecrementEfiCall.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall HalpQueryCapsuleCapabilities(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v9; // di
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // ebx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalpDeviceBlockUnblockPushLock.WaitBlockFill6[72] )
    return 3221225474LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v10 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << v10;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[7] )
  {
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.OtherOperationCount + 1);
    HalpEfiStartRuntimeCode(0x80u);
    ((void (__fastcall *)(__int64, __int64, __int64, __int64))HalEfiRuntimeServicesTable[7])(a1, v4, a3, a4);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFF7F);
    HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.OtherOperationCount + 1);
    v12 = HalpConvertEfiToNtStatus(v11);
  }
  else
  {
    v12 = -1073741822;
  }
  if ( v9 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v12;
}
