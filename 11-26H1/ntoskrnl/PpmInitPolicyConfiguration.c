/*
 * XREFs of PpmInitPolicyConfiguration @ 0x140CD2D80
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PpmPolicySettingsMaskMerge @ 0x1404D2F88 (PpmPolicySettingsMaskMerge.c)
 *     qsort @ 0x140536F00 (qsort.c)
 *     PpmBeginProfileAccumulation @ 0x14077793C (PpmBeginProfileAccumulation.c)
 *     PpmEnableProfile @ 0x140A9C6CC (PpmEnableProfile.c)
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
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  v3 = (unsigned __int8 *)&unk_140FBEF90;
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
    qword_140F0B0E0[v6 + 5] |= 1LL << v5;
    qword_140F0B0E0[v6 + 94] |= 1LL << v5;
    --v4;
  }
  while ( v4 );
  v7 = (_QWORD **)v15;
  do
  {
    PpmPolicySettingsMaskMerge(
      (__int64)&PopSleepstudySessionLock.QuantumTarget,
      (__int64)&PopSleepstudySessionLock.QuantumTarget,
      *v7);
    v7 = (_QWORD **)(v8 + 8);
  }
  while ( v9 != 1 );
  v10 = (_QWORD **)v14;
  do
  {
    PpmPolicySettingsMaskMerge(
      (__int64)&PopSleepstudySessionLock.Header.WaitListHead.Blink,
      (__int64)&PopSleepstudySessionLock.Header.WaitListHead.Blink,
      *v10);
    v10 = (_QWORD **)(v11 + 8);
  }
  while ( v12 != 1 );
  dword_140F0B0FC = 2;
  qword_140F0B0E0[0] = (__int64)PpmInfoDefaultProfileName;
  xmmword_140F0B0EC = (__int128)GUID_POWER_POLICY_PROFILE_DEFAULT;
  qword_140F0B6B0 = -1LL;
  PpmEnableProfile((__int64)qword_140F0B0E0);
  PpmBeginProfileAccumulation((__int64)qword_140F0B0E0, MEMORY[0xFFFFF78000000008]);
  qsort(&PpmPolicyConfigTable, 0x4BuLL, 0x28uLL, (int (__cdecl *)(const void *, const void *))PpmInfoConfigComparer);
  return PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
}
