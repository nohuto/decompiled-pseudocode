/*
 * XREFs of SmGetRegistrationInfo @ 0x14081F03C
 * Callers:
 *     SmProcessRegistrationRequest @ 0x14082004C (SmProcessRegistrationRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     SmRegistrationCtxStart @ 0x140B51620 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(__int64 a1, KPROCESSOR_MODE a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  AutoBoost *v9; // rax
  void *v10; // rdx
  AutoBoost *v11; // rdi
  NTSTATUS v12; // edi
  void *v13; // rcx
  HANDLE v14; // rcx
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = (unsigned __int64 *)(a1 + 2264);
  --CurrentThread->KernelApcDisable;
  v9 = (AutoBoost *)KeAbPreAcquire(a1 + 2264, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v9, (__int64)v5);
  if ( v11 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v11, v10);
    else
      *((_BYTE *)v11 + 10) = 1;
  }
  if ( (*(_DWORD *)(a1 + 2248) & 8) != 0 )
  {
    v12 = 0;
  }
  else
  {
    v12 = SmRegistrationCtxStart(a1 + 2400);
    if ( v12 >= 0 )
      *(_DWORD *)(a1 + 2248) |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((unsigned __int64)v5);
  KeLeaveCriticalRegion();
  if ( v12 >= 0 )
  {
    v13 = *(void **)(a1 + 2400);
    Handle = 0LL;
    v12 = ObOpenObjectByPointer(v13, 0, 0LL, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, a2, &Handle);
    if ( v12 < 0 )
    {
      v14 = Handle;
    }
    else
    {
      v14 = 0LL;
      *(_QWORD *)(a3 + 8) = Handle;
      v12 = 0;
    }
    if ( v14 )
      ObCloseHandle(v14, a2);
    if ( v12 >= 0 )
      return 0;
  }
  return (unsigned int)v12;
}
