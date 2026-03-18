/*
 * XREFs of PopDirectedDripsDiagTraceProblemDevice @ 0x140B0C00C
 * Callers:
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14077151C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1407E29BC (PopDirectedDripsVisitPs4Device.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x140B0BCE4 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     PopDirectedDripsDiagInsertErrorRecord @ 0x140B45AA4 (PopDirectedDripsDiagInsertErrorRecord.c)
 */

void __fastcall PopDirectedDripsDiagTraceProblemDevice(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rdi
  __int64 v9; // rdi
  unsigned int v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  unsigned int *v15; // [rsp+60h] [rbp-20h]
  __int64 v16; // [rsp+68h] [rbp-18h]

  v11 = a1;
  v10 = a3;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
      v5,
      (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(_QWORD *)(v11 + 776);
  if ( a2 )
  {
    ++*(_DWORD *)(a2 + 4LL * (int)v10 + 192);
    if ( !v9 )
      goto LABEL_14;
    PopDirectedDripsDiagInsertErrorRecord(a2, v9, v10);
  }
  else if ( !v9 )
  {
    goto LABEL_14;
  }
  *(_DWORD *)(v9 + 152) |= 1 << v10;
  if ( byte_140E67628
    && EtwEventEnabled(
         *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
         &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE) )
  {
    UserData.Ptr = v9 + 148;
    *(_QWORD *)&UserData.Size = 4LL;
    v13 = &v11;
    v14 = 8LL;
    v15 = &v10;
    v16 = 4LL;
    EtwWrite(
      *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
      &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE,
      0LL,
      3u,
      &UserData);
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
}
