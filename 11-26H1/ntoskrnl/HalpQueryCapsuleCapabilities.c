/*
 * XREFs of HalpQueryCapsuleCapabilities @ 0x14059A7C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x140472300 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140472358 (HalpConvertEfiToNtStatus.c)
 *     HalpEfiIncrementEfiCall @ 0x14048F3D0 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x1404AC694 (HalpEfiDecrementEfiCall.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HalpQueryCapsuleCapabilities(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  char v9; // di
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // ebx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  v4 = a2;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalpDeviceBlockUnblockPushLock.WaitBlockFill6[104] )
    return 3221225474LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v9 = 0;
  }
  else
  {
    v9 = 1;
    v10 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v10 >> 6);
    Affinity.Mask = 1LL << v10;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[7] )
  {
    HalpEfiIncrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.QueuedScb + 1);
    HalpEfiStartRuntimeCode(0x80u);
    ((void (__fastcall *)(__int64, __int64, __int64, __int64))HalEfiRuntimeServicesTable[7])(a1, v4, a3, a4);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFF7F);
    HalpEfiDecrementEfiCall((volatile signed __int32 *)&HalpDeviceBlockUnblockPushLock.QueuedScb + 1);
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
