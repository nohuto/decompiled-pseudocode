/*
 * XREFs of IommupHvCreateSvmPasidSpace @ 0x14059DF18
 * Callers:
 *     IommupGetSystemContext @ 0x14059CF00 (IommupGetSystemContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x140444460 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommupHvCreateSvmPasidSpace(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // ebx
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rdi

  v4 = 0;
  if ( !BYTE5(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
    return 3221225659LL;
  if ( BYTE2(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
    return a1 != LODWORD(IommuInterfaceStateChangeCallbackPushLock.CycleTime) ? 0xC00000BB : 0;
  v7 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock.ThreadLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64(
         (volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock.ThreadLock,
         0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(
      &IommuInterfaceStateChangeCallbackPushLock.ThreadLock,
      v7,
      (__int64)&IommuInterfaceStateChangeCallbackPushLock.ThreadLock);
  if ( v10 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v8) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v10 + 33), v8, 1);
    }
    else
    {
      *((_BYTE *)v10 + 10) = 1;
    }
  }
  if ( BYTE2(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
  {
    if ( LODWORD(IommuInterfaceStateChangeCallbackPushLock.CycleTime) != a1 )
      v4 = -1073741637;
    goto LABEL_17;
  }
  if ( BYTE4(IommuInterfaceStateChangeCallbackPushLock.StackLimit) )
    goto LABEL_16;
  v4 = guard_dispatch_icall_no_overrides(0LL, LODWORD(IommuInterfaceStateChangeCallbackPushLock.KernelStack));
  if ( v4 >= 0 )
  {
    BYTE4(IommuInterfaceStateChangeCallbackPushLock.StackLimit) = 1;
LABEL_16:
    LODWORD(IommuInterfaceStateChangeCallbackPushLock.CycleTime) = a1;
    BYTE2(IommuInterfaceStateChangeCallbackPushLock.StackLimit) = 1;
  }
LABEL_17:
  if ( (_InterlockedExchangeAdd64(
          (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.ThreadLock,
          0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.ThreadLock);
  KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock.ThreadLock);
  return (unsigned int)v4;
}
