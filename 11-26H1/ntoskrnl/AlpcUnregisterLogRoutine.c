/*
 * XREFs of AlpcUnregisterLogRoutine @ 0x1407C49A8
 * Callers:
 *     EtwpDisableKernelTrace @ 0x140A00180 (EtwpDisableKernelTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcUnregisterLogRoutine(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // edi
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  __int64 (__fastcall **i)(__int64, int); // rcx
  __int64 (__fastcall *v10)(__int64, int); // rax
  __int64 (__fastcall ***v11)(__int64, int); // rdx

  v4 = -1073741275;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.CycleTime, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.CycleTime, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&AlpcpMessageLogLock.CycleTime,
      v5,
      (__int64)&AlpcpMessageLogLock.CycleTime);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  for ( i = (__int64 (__fastcall **)(__int64, int))AlpcpLogCallbackListHead;
        i != (__int64 (__fastcall **)(__int64, int))&AlpcpLogCallbackListHead;
        i = (__int64 (__fastcall **)(__int64, int))*i )
  {
    v10 = *i;
    if ( i[2] == EtwpTraceALPC )
    {
      if ( *((__int64 (__fastcall ***)(__int64, int))v10 + 1) != i
        || (v11 = (__int64 (__fastcall ***)(__int64, int))i[1], *v11 != i) )
      {
        __fastfail(3u);
      }
      *v11 = (__int64 (__fastcall **)(__int64, int))v10;
      *((_QWORD *)v10 + 1) = v11;
      ExFreePoolWithTag(i, 0);
      v4 = 0;
      break;
    }
  }
  LOBYTE(stru_140E66D40.CycleTime) = AlpcpLogCallbackListHead != &AlpcpLogCallbackListHead;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock.CycleTime, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.CycleTime);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.CycleTime);
  return v4;
}
