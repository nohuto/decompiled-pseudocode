/*
 * XREFs of NtMakePermanentObject @ 0x140B1F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtMakePermanentObject(HANDLE Handle)
{
  KPROCESSOR_MODE PreviousMode; // bl
  NTSTATUS result; // eax
  struct _KLOCK_ENTRIES *v4; // r9
  NTSTATUS v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rbp
  AutoBoost *v8; // rax
  void *v9; // rdx
  AutoBoost *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  __int64 v13; // rtt
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(*(LUID *)&PspSiloMonitorLock.SystemCallNumber, PreviousMode) )
    return -1073741727;
  Object = 0LL;
  result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, &Object, 0LL);
  v5 = result;
  if ( result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = (unsigned __int64 *)Object;
    --CurrentThread->KernelApcDisable;
    v8 = (AutoBoost *)KeAbPreAcquire((__int64)(v7 - 4), 0LL, 0LL, v4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v7 - 8, 0LL) )
      ExfAcquirePushLockExclusiveEx(v7 - 4, v8, (__int64)(v7 - 4));
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    *((_BYTE *)v7 - 21) |= 0x10u;
    _m_prefetchw(v7 - 4);
    v11 = *(v7 - 4);
    v12 = v11 - 16;
    if ( (v11 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v12 = 0LL;
    if ( (v11 & 2) != 0
      || (v13 = *(v7 - 4), v13 != _InterlockedCompareExchange64((volatile signed __int64 *)v7 - 4, v12, v11)) )
    {
      ExfReleasePushLock(v7 - 4);
    }
    KeAbPostRelease((unsigned __int64)(v7 - 4));
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
    return v5;
  }
  return result;
}
