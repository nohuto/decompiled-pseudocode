/*
 * XREFs of PoClearTransitionMarker @ 0x1407C881C
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x14084E49C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x1404843E0 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x14052A6C0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x1407C8FC0 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1408059C4 (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlUnlockBootStatusData @ 0x140ACBD70 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140B12DA0 (RtlLockBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140B1B7B4 (RtlpSystemBootStatusRequest.c)
 */

__int64 PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  int v5; // eax
  __int64 v6; // rdx
  char v8; // [rsp+20h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+28h] [rbp-11h] BYREF
  int v10; // [rsp+30h] [rbp-9h] BYREF
  struct _LIST_ENTRY **p_Blink; // [rsp+38h] [rbp-1h]
  int v12; // [rsp+40h] [rbp+7h]
  int v13; // [rsp+48h] [rbp+Fh]
  unsigned __int8 *v14; // [rsp+50h] [rbp+17h]
  int v15; // [rsp+58h] [rbp+1Fh]
  int v16; // [rsp+60h] [rbp+27h]
  char *v17; // [rsp+68h] [rbp+2Fh]
  int v18; // [rsp+70h] [rbp+37h]

  FileHandle = 0LL;
  v8 = 0;
  if ( (int)RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v10 = 7;
  p_Blink = &stru_140E66FF0.SavedApcState.ApcListHead[1].Blink;
  v0 = 2;
  v12 = 32;
  v14 = &stru_140E66FF0.PriorityFloorCounts[24];
  v1 = 1;
  v13 = 16;
  v15 = 32;
  if ( ExIsSoftBoot() )
  {
    v16 = 5;
    v17 = &v8;
    v1 = 0;
    v0 = 3;
    v18 = 1;
  }
  PopAcquireRwLockExclusive((unsigned __int64 *)&stru_140F12D20.AbWaitObject, v2, v3, v4);
  *(_OWORD *)&stru_140E66FF0.SavedApcStateFill[24] = 0LL;
  stru_140E66FF0.SavedApcStateFill[32] = 1;
  *(_OWORD *)&stru_140E66FF0.SavedApcStateFill[40] = 0LL;
  *(_OWORD *)&stru_140E66FF0.PriorityFloorCounts[24] = 0LL;
  *(_OWORD *)&stru_140E66FF0.AbCompletedIoQoSBoostCount = 0LL;
  stru_140E66FF0.SchedulerApc.SpareLong0 = MEMORY[0xFFFFF780000002C4];
  stru_140E66FF0.PriorityFloorCounts[25] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  stru_140E66FF0.SavedApcStateFill[35] = -64;
  HIDWORD(PopModernStandbyStateNotify.SchedulerSharedSwappablePage) = 3;
  *(_QWORD *)&stru_140E66FF0.SavedApcStateFill[40] = MEMORY[0xFFFFF78000000014];
  v5 = RtlComputeCrc32(0LL, (__int64)&stru_140E66FF0.SavedApcStateFill[40], 8u);
  stru_140E66FF0.SavedApcStateFill[38] &= ~0x10u;
  *(_DWORD *)&stru_140E66FF0.SchedulerApc.Type = v5;
  RtlpSystemBootStatusRequest(32LL, &v10, v0);
  PopReleaseRwLock((struct _KTHREAD *)&stru_140F12D20.AbWaitObject);
  LOBYTE(v6) = v1;
  return PopRecordLongPowerButtonPressDetected(0LL, v6);
}
