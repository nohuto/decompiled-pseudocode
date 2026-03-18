/*
 * XREFs of AlpcRegisterLogRoutine @ 0x140778674
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14095ACA0 (EtwpEnableKernelTrace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 AlpcRegisterLogRoutine()
{
  __int64 Pool2; // rax
  struct _KLOCK_ENTRIES *v1; // r9
  unsigned int v2; // edi
  _QWORD *v3; // rbx
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rsi
  __int64 (__fastcall **i)(__int64, int); // rax
  _QWORD *v10; // rax

  Pool2 = ExAllocatePool2(0x100uLL);
  v2 = 0;
  v3 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_QWORD *)(Pool2 + 16) = EtwpTraceALPC;
  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.CurrentRunTime, 0LL, 0LL, v1);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.CurrentRunTime, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&AlpcpMessageLogLock.CurrentRunTime,
      v5,
      (__int64)&AlpcpMessageLogLock.CurrentRunTime);
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
    if ( i[2] == EtwpTraceALPC )
    {
      ExFreePoolWithTag(v3, 0);
      v2 = -1073740008;
      goto LABEL_17;
    }
  }
  v10 = off_140E07358;
  if ( *off_140E07358 != (_UNKNOWN *)&AlpcpLogCallbackListHead )
    __fastfail(3u);
  *v3 = &AlpcpLogCallbackListHead;
  v3[1] = v10;
  *v10 = v3;
  off_140E07358 = (_UNKNOWN **)v3;
  BYTE4(stru_140E66B30.StackBase) = 1;
LABEL_17:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock.CurrentRunTime, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.CurrentRunTime);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.CurrentRunTime);
  return v2;
}
