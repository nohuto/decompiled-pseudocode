/*
 * XREFs of HalQueryEnvironmentVariableInfoEx @ 0x140471990
 * Callers:
 *     IopQueryEnvironmentVariableInfoHal @ 0x14079B000 (IopQueryEnvironmentVariableInfoHal.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     HalpEfiStartRuntimeCode @ 0x140472300 (HalpEfiStartRuntimeCode.c)
 *     HalpConvertEfiToNtStatus @ 0x140472358 (HalpConvertEfiToNtStatus.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

__int64 __fastcall HalQueryEnvironmentVariableInfoEx(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  char v8; // di
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v12; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( !HalpDeviceBlockUnblockPushLock.WaitBlockFill6[104] )
    return 3221225474LL;
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  v7 = a1 | 6;
  if ( KeGetCurrentIrql() < 2u )
  {
    v8 = 1;
    v12 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * KeGetPcr()->Prcb.Number);
    Affinity.Reserved[1] = 0;
    Affinity.Reserved[2] = 0;
    *(_DWORD *)&Affinity.Group = (unsigned __int16)(v12 >> 6);
    Affinity.Mask = 1LL << v12;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  else
  {
    v8 = 0;
  }
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[8] )
  {
    _InterlockedIncrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
    HalpEfiStartRuntimeCode(256LL);
    v9 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))HalEfiRuntimeServicesTable[8])(v7, a2, a3, a4);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFEFF);
    _InterlockedDecrement((_DWORD *)&HalpDeviceBlockUnblockPushLock.OtherTransferCount + 1);
    v10 = HalpConvertEfiToNtStatus(v9);
  }
  else
  {
    v10 = -1073741822;
  }
  if ( v8 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  return v10;
}
