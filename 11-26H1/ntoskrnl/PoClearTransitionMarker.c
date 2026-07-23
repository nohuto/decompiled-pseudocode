/*
 * XREFs of PoClearTransitionMarker @ 0x1407CB8BC
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1408547AC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     RtlComputeCrc32 @ 0x14047DD50 (RtlComputeCrc32.c)
 *     ExIsSoftBoot @ 0x14052CBE0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     PopRecordLongPowerButtonPressDetected @ 0x1407CC060 (PopRecordLongPowerButtonPressDetected.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14080B464 (RtlInitializeBootStatusDataBlackBox.c)
 *     RtlUnlockBootStatusData @ 0x140ACDFB0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140B14C40 (RtlLockBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x140B1DA64 (RtlpSystemBootStatusRequest.c)
 */

__int64 PoClearTransitionMarker()
{
  unsigned int v0; // ebx
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _KLOCK_ENTRIES *v4; // r9
  ULONG32 v5; // eax
  __int64 v6; // rdx
  char v8; // [rsp+20h] [rbp-19h] BYREF
  HANDLE FileHandle; // [rsp+28h] [rbp-11h] BYREF
  int v10; // [rsp+30h] [rbp-9h] BYREF
  void *volatile *p_AbWaitObject; // [rsp+38h] [rbp-1h]
  int v12; // [rsp+40h] [rbp+7h]
  int v13; // [rsp+48h] [rbp+Fh]
  unsigned __int64 *Spare35; // [rsp+50h] [rbp+17h]
  int v15; // [rsp+58h] [rbp+1Fh]
  int v16; // [rsp+60h] [rbp+27h]
  char *v17; // [rsp+68h] [rbp+2Fh]
  int v18; // [rsp+70h] [rbp+37h]

  FileHandle = 0LL;
  v8 = 0;
  if ( RtlLockBootStatusData(&FileHandle) >= 0 )
  {
    RtlInitializeBootStatusDataBlackBox(FileHandle);
    RtlUnlockBootStatusData(FileHandle);
  }
  v10 = 7;
  p_AbWaitObject = &stru_140E67200.AbWaitObject;
  v0 = 2;
  v12 = 32;
  Spare35 = stru_140E67200.Spare35;
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
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopBsdUpdateLock, v2, v3, v4);
  *(_OWORD *)&stru_140E67200.AbWaitObject = 0LL;
  LOBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) = 1;
  *(_OWORD *)&stru_140E67200.KernelWaitTime = 0LL;
  *(_OWORD *)stru_140E67200.Spare35 = 0LL;
  *(_OWORD *)&stru_140E67200.Spare36 = 0LL;
  HIDWORD(stru_140E67200.UserWaitTime) = MEMORY[0xFFFFF780000002C4];
  BYTE1(stru_140E67200.Spare35[0]) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 1)) & 0xF3;
  HIBYTE(stru_140E67200.ReservedPreviousReadyTimeValue) = -64;
  *(_DWORD *)&PopPdcDeviceListLock.SavedApcStateFill[36] = 3;
  stru_140E67200.KernelWaitTime = MEMORY[0xFFFFF78000000014];
  v5 = RtlComputeCrc32(0, &stru_140E67200.KernelWaitTime, 8u);
  *((_BYTE *)&stru_140E67200.ReservedPreviousReadyTimeValue + 6) &= ~0x10u;
  LODWORD(stru_140E67200.UserWaitTime) = v5;
  RtlpSystemBootStatusRequest(32LL, &v10, v0);
  PopReleaseRwLock((struct _KTHREAD *)&PopBsdUpdateLock);
  LOBYTE(v6) = v1;
  return PopRecordLongPowerButtonPressDetected(0LL, v6);
}
