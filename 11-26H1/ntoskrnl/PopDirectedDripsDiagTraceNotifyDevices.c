/*
 * XREFs of PopDirectedDripsDiagTraceNotifyDevices @ 0x1404CFC70
 * Callers:
 *     PopDirectedDripsSuspendDevices @ 0x140AC6E74 (PopDirectedDripsSuspendDevices.c)
 *     PopDirectedDripsResumeDevices @ 0x140AC6FD4 (PopDirectedDripsResumeDevices.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
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
  _BYTE *v8; // rbx
  void **i; // rdx
  _BYTE *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  void **v13; // rsi
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
    v5 = (AutoBoost *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL, 0LL, a4);
    v6 = _interlockedbittestandset64(&PopDirectedDripsDiagLock.Header.Lock, 0LL);
    v7 = v5;
    if ( v6 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&PopDirectedDripsDiagLock,
        v5,
        (__int64)&PopDirectedDripsDiagLock);
    if ( v7 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        *((_BYTE *)v7 + 33) |= 2u;
      else
        *((_BYTE *)v7 + 10) = 1;
    }
    v8 = (_BYTE *)MEMORY[0xFFFFF78000000008];
    for ( i = (void **)PopDirectedDripsDiagLock.SListFaultAddress;
          i != &PopDirectedDripsDiagLock.SListFaultAddress;
          i = (void **)*i )
    {
      if ( (_BYTE)v4 )
      {
        v10 = i[6];
        v11 = 7LL;
        i[6] = 0LL;
        v12 = 10LL;
      }
      else
      {
        v10 = i[15];
        v11 = 16LL;
        i[15] = 0LL;
        v12 = 19LL;
      }
      v13 = &i[v12];
      if ( *((_DWORD *)i + 9) == *(_DWORD *)&PopDirectedDripsDiagLock.SavedApcStateFill[8]
        && v10
        && ((_DWORD)i[5] & 0x100) == 0 )
      {
        v14 = v8 - v10;
        v15 = 0;
        v16 = 0LL;
        v17 = 0LL;
        do
        {
          if ( v14 >= PopFxAccountingBucketLimits[v16] && v14 < PopFxAccountingBucketLimits[v15 + 1] )
          {
            ++*(_DWORD *)((char *)&i[v11] + v17);
            v13[v16] = (char *)v13[v16] + v14;
          }
          ++v15;
          v17 += 4LL;
          ++v16;
        }
        while ( v15 < 5 );
        if ( (_BYTE)v4 )
          i[15] = v8;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&PopDirectedDripsDiagLock);
  }
  if ( PopDiagHandleRegistered )
  {
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES) )
    {
      UserData.Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      v18 = v4;
      v20 = &v18;
      *(_QWORD *)&UserData.Size = 1LL;
      v22 = &v26;
      v21 = 4LL;
      v24 = &v27;
      v23 = 4LL;
      v25 = 8LL;
      EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_NOTIFY_DEVICES, 0LL, 0, 0LL, 0LL, 4u, &UserData);
    }
  }
}
