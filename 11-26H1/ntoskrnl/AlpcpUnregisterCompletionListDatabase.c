/*
 * XREFs of AlpcpUnregisterCompletionListDatabase @ 0x140B25D8C
 * Callers:
 *     AlpcpInitializeCompletionList @ 0x140A918A8 (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x140B25D2C (AlpcpFreeCompletionList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 */

void __fastcall AlpcpUnregisterCompletionListDatabase(_QWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  AutoBoost *v5; // rax
  void *v6; // rdx
  signed __int8 v7; // cf
  AutoBoost *v8; // rbx
  __int64 v9; // rdx
  _QWORD *v10; // rax

  v5 = (AutoBoost *)KeAbPreAcquire((__int64)&AlpcpMessageLogLock.KernelStack, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpMessageLogLock.KernelStack, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&AlpcpMessageLogLock.KernelStack,
      v5,
      (__int64)&AlpcpMessageLogLock.KernelStack);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v6);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v10 = (_QWORD *)a1[1], (_QWORD *)*v10 != a1) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  --LODWORD(AlpcpMessageLogLock.StateSaveArea);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock.KernelStack, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock.KernelStack);
  KeAbPostRelease((unsigned __int64)&AlpcpMessageLogLock.KernelStack);
}
