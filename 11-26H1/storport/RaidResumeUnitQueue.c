/*
 * XREFs of RaidResumeUnitQueue @ 0x140029480
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1400197D8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidUnitPauseTimerDpcRoutine @ 0x140028050 (RaidUnitPauseTimerDpcRoutine.c)
 *     RaidAdapterResumeUnit @ 0x140028A9C (RaidAdapterResumeUnit.c)
 *     RaidSetUnitPauseTimer @ 0x140028BD4 (RaidSetUnitPauseTimer.c)
 *     RaUnitRequestPowerUp @ 0x140034934 (RaUnitRequestPowerUp.c)
 *     RaidCompletionDpcRoutine @ 0x14006C160 (RaidCompletionDpcRoutine.c)
 *     StorPortCompleteRequest @ 0x14007B250 (StorPortCompleteRequest.c)
 *     RaUnitRequestPowerUpForPLDR @ 0x14007F2EC (RaUnitRequestPowerUpForPLDR.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidResumeIoQueue @ 0x1400295D0 (RaidResumeIoQueue.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline @ 0x140097F6C (Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaidResumeUnitQueue(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rax
  unsigned __int8 v4; // cl
  int v5; // r9d
  __int64 v6; // rcx
  __int64 v7; // r11
  unsigned int v8; // r10d
  __int64 v9; // r8
  __int64 v10; // rdx
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  KIRQL v16; // di
  __int64 v17; // rdx
  __int64 v18; // rax
  __int16 v19; // cx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int128 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h]
  __int64 v25; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]

  v2 = (unsigned int)RaidResumeIoQueue(a1 + 704);
  v22 = 0LL;
  v25 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  if ( *(_QWORD *)(a1 + 32) && RaidIsUnitControlSupported(a1, 31) )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL));
    v15 = *(_QWORD *)(a1 + 32);
    v16 = v12;
    --*(_DWORD *)(v15 + 84);
    v17 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v17 + 80) & 0x1E0) == 0 && *(int *)(v17 + 84) <= 0 )
    {
      LODWORD(v22) = 56;
      *(_QWORD *)((char *)&v22 + 4) = 0x300000038LL;
      if ( (unsigned int)Feature_Servicing_perLunLockingEnable__private_IsEnabledDeviceUsageNoInline(
                           v15,
                           v17,
                           v13,
                           v14,
                           v22,
                           *((_QWORD *)&v22 + 1),
                           v23) )
      {
        v18 = *(_QWORD *)(a1 + 24);
        WORD4(v24) = 1;
        HIDWORD(v24) = 4;
        v19 = *(_WORD *)(v18 + 56);
        LOWORD(v25) = *(_WORD *)(a1 + 104);
        BYTE2(v25) = *(_BYTE *)(a1 + 106);
        WORD5(v24) = v19;
      }
      v20 = *(_DWORD **)(a1 + 24);
      if ( *v20 == 1094997074 )
      {
        v21 = v20 + 94;
      }
      else if ( *v20 == 1314275652 )
      {
        v21 = v20 + 42;
      }
      else
      {
        v21 = 0LL;
      }
      RaCallMiniportUnitControl(v21, 31LL, &v22);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 24LL), v16);
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    v4 = *(_BYTE *)(v3 + 56);
  else
    v4 = -1;
  v5 = (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)BYTE1(*(_DWORD *)(a1 + 104)) | (((unsigned __int8)*(_DWORD *)(a1 + 104) | (v4 << 8)) << 8)) << 8);
  if ( (qword_140172448 & 0x200) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(int *)(a1 + 744);
    if ( v6 )
    {
      if ( *(_DWORD *)v6 != 1314275652 )
      {
        v8 = *(_DWORD *)(v6 + 4996);
        if ( v8 )
        {
          v9 = *(_QWORD *)(v6 + 5000);
          if ( v9 )
          {
            v10 = 6LL * (_InterlockedIncrement((volatile signed __int32 *)(v6 + 4992)) % v8);
            *(_DWORD *)(v9 + 8 * v10) = 5;
            *(_QWORD *)(v9 + 8 * v10 + 40) = MEMORY[0xFFFFF78000000014];
            *(_QWORD *)(v9 + 8 * v10 + 16) = v5;
            *(_QWORD *)(v9 + 8 * v10 + 8) = retaddr;
            *(_QWORD *)(v9 + 8 * v10 + 24) = v7;
            *(_QWORD *)(v9 + 8 * v10 + 32) = v2;
          }
        }
      }
    }
  }
  return (unsigned int)v2;
}
