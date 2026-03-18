/*
 * XREFs of PopDirectedDripsDiagTraceNotifyDevices @ 0x1404D64A0
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140AC5204 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140AC5364 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void __fastcall PopDirectedDripsDiagTraceNotifyDevices(
        unsigned __int8 a1,
        int a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  int v4; // edi
  AutoBoost *v5; // rax
  signed __int8 v6; // cf
  AutoBoost *v7; // rbx
  struct _LIST_ENTRY *v8; // rbx
  struct _LIST_ENTRY *i; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  char *v13; // rsi
  unsigned __int64 v14; // r9
  unsigned int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // r11
  int v18; // [rsp+48h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-19h] BYREF
  int *v20; // [rsp+68h] [rbp-9h]
  __int64 v21; // [rsp+70h] [rbp-1h]
  int *v22; // [rsp+78h] [rbp+7h]
  __int64 v23; // [rsp+80h] [rbp+Fh]
  __int64 *v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  int v26; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+E8h] [rbp+77h] BYREF

  v27 = a3;
  v26 = a2;
  v4 = a1;
  if ( a2 >= 0 )
  {
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink, 0LL, 0LL, a4);
    v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsUmLock.ApcStateFill[8], 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
        v5,
        (__int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v7 + 33) |= 2u;
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    v8 = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000008];
    for ( i = PopDirectedDripsUmLock.ApcState.ApcListHead[1].Blink;
          i != (struct _LIST_ENTRY *)&PopDirectedDripsUmLock.ApcStateFill[24];
          i = i->Flink )
    {
      if ( (_BYTE)v4 )
      {
        Flink = i[3].Flink;
        v11 = 56LL;
        i[3].Flink = 0LL;
        v12 = 80LL;
      }
      else
      {
        Flink = i[7].Blink;
        v11 = 128LL;
        i[7].Blink = 0LL;
        v12 = 152LL;
      }
      v13 = (char *)i + v12;
      if ( HIDWORD(i[2].Flink) == LODWORD(PopDirectedDripsUmLock.ThreadListEntry.Flink)
        && Flink
        && ((__int64)i[2].Blink & 0x100) == 0 )
      {
        v14 = (char *)v8 - (char *)Flink;
        v15 = 0;
        v16 = 0LL;
        v17 = 0LL;
        do
        {
          if ( v14 >= PopFxAccountingBucketLimits[v16] && v14 < PopFxAccountingBucketLimits[v15 + 1] )
          {
            ++*(_DWORD *)((char *)&i->Flink + v11 + v17);
            *(_QWORD *)&v13[v16 * 8] += v14;
          }
          ++v15;
          v17 += 4LL;
          ++v16;
        }
        while ( v15 < 5 );
        if ( (_BYTE)v4 )
          i[7].Blink = v8;
      }
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsUmLock.ApcState.ApcListHead[0].Blink);
  }
  if ( byte_140E67628 )
  {
    if ( EtwEventEnabled(
           *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
           &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES) )
    {
      UserData.Ptr = (ULONGLONG)&qword_140F0F5D0;
      v18 = v4;
      v20 = &v18;
      *(_QWORD *)&UserData.Size = 1LL;
      v22 = &v26;
      v21 = 4LL;
      v24 = &v27;
      v23 = 4LL;
      v25 = 8LL;
      EtwWriteEx(
        *(REGHANDLE *)&PopSleepstudySessionLock.PriorityFloorCounts[16],
        &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES,
        0LL,
        0,
        0LL,
        0LL,
        4u,
        &UserData);
    }
  }
}
