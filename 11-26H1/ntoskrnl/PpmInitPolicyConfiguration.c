/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140CD8F20
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PpmPolicySettingsMaskMerge @ 0x1404CC7F8 (PpmPolicySettingsMaskMerge.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x14077A7DC (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x140AD850C (PpmEnableProfile.c)
 */

LONG __fastcall PpmInitPolicyConfiguration(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // edx
  unsigned __int64 v6; // rcx
  _QWORD **v7; // rax
  __int64 v8; // rax
  __int64 v9; // r11
  _QWORD **v10; // rax
  __int64 v11; // rax
  __int64 v12; // r11
  _QWORD v14[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v15[10]; // [rsp+30h] [rbp-50h] BYREF

  v15[8] = &PpmPolicyClassSpecificQosSettingsMask;
  v15[0] = &PpmPolicyActionPerfResizeHistoryMask;
  v15[1] = &PpmPolicyActionProcessorPolicyMask;
  v15[2] = &PpmPolicyActionParkingMask;
  v15[3] = &PpmPolicyActionPerfMask;
  v15[4] = &PpmPolicyActionPerfReinitMask;
  v15[5] = &PpmPolicyActionIdleMask;
  v15[6] = PpmPolicyActionHeteroPpmMask;
  v15[7] = &PpmPolicyActionHeteroSchedulerMask;
  v14[0] = &PpmPolicyClassSpecificQosSettingsMask;
  v15[9] = &PpmPolicyClassAgnosticQosSettingsMask;
  v14[1] = &PpmPolicyClassAgnosticQosSettingsMask;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  v3 = (unsigned __int8 *)&unk_140FBFF90;
  v4 = 75LL;
  do
  {
    if ( (v3[5] & 4) != 0 )
      *(_DWORD *)v3 /= 3u;
    v5 = v3[4];
    v3 += 40;
    v6 = v5;
    LOBYTE(v5) = v5 & 0x3F;
    v6 >>= 6;
    *((_QWORD *)&PopDirectedDripsDiagLock.SchedulerAssistPriorityFloor + v6) |= 1LL << v5;
    *((_QWORD *)&PopDirectedDripsDiagLock + v6 + 217) |= 1LL << v5;
    --v4;
  }
  while ( v4 );
  v7 = (_QWORD **)v15;
  do
  {
    PpmPolicySettingsMaskMerge((__int64)&PpmPolicySettingGlobalMask, (__int64)&PpmPolicySettingGlobalMask, *v7);
    v7 = (_QWORD **)(v8 + 8);
  }
  while ( v9 != 1 );
  v10 = (_QWORD **)v14;
  do
  {
    PpmPolicySettingsMaskMerge((__int64)&PpmPolicyQosSettingsMask, (__int64)&PpmPolicyQosSettingsMask, *v10);
    v10 = (_QWORD **)(v11 + 8);
  }
  while ( v12 != 1 );
  HIDWORD(PopDirectedDripsDiagLock.UpdateVpThreadPriorityDpcStackListEntry.Next) = 2;
  *(_QWORD *)&PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue = PpmInfoDefaultProfileName;
  *(GUID *)((char *)&PopDirectedDripsDiagLock.KernelWaitTime + 4) = GUID_POWER_POLICY_PROFILE_DEFAULT;
  qword_140F0BA70 = -1LL;
  PpmEnableProfile((__int64)&PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue);
  PpmBeginProfileAccumulation(
    (__int64)&PopDirectedDripsDiagLock.ReservedPreviousReadyTimeValue,
    MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x4BuLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
}
