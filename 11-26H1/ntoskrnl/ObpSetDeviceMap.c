/*
 * XREFs of ObpSetDeviceMap @ 0x140A2236C
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x1407C5AAC (ObpCreateDosDevicesDirectory.c)
 *     SeGetTokenDeviceMap @ 0x140A21DB8 (SeGetTokenDeviceMap.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     ObOpenObjectByPointer @ 0x140906B20 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObDereferenceDeviceMap @ 0x140930784 (ObDereferenceDeviceMap.c)
 *     ObpDeleteDeviceMap @ 0x140B5F738 (ObpDeleteDeviceMap.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ObpSetDeviceMap(PVOID Object, __int64 a2, void *a3, KPROCESSOR_MODE a4, char a5, __int64 *a6)
{
  _QWORD *v6; // r15
  __int64 v8; // rbx
  NTSTATUS result; // eax
  _QWORD *v10; // rsi
  __int64 Pool2; // rax
  __int64 v12; // rdi
  NTSTATUS v13; // r14d
  char *ServerSiloGlobals; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v16; // r13
  volatile signed __int32 *v17; // rbp
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rax
  void *v20; // rdx
  AutoBoost *v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  int v24; // ebx
  PVOID Objecta; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0LL;
  Objecta = 0LL;
  v8 = 0LL;
  result = ObReferenceObjectByHandle(a3, 2u, ObpDirectoryObjectType, a4, &Objecta, 0LL);
  if ( result >= 0 )
  {
    v10 = Objecta;
    if ( (a5 & 4) == 0 && (*((_DWORD *)Objecta + 84) & 4) != 0 )
    {
      v24 = -1073741811;
      goto LABEL_33;
    }
    Pool2 = ExAllocatePool2(0x100uLL);
    v12 = Pool2;
    if ( !Pool2 )
    {
      v24 = -1073741670;
LABEL_33:
      ObfDereferenceObject(v10);
      return v24;
    }
    *(_QWORD *)(Pool2 + 240) = 1LL;
    *(_QWORD *)Pool2 = v10;
    v13 = ObOpenObjectByPointer(v10, 0x200u, 0LL, 0xF000Fu, ObpDirectoryObjectType, 0, (PHANDLE)(Pool2 + 248));
    if ( v13 >= 0 )
    {
      if ( Object )
      {
        ObfReferenceObjectWithTag(Object, 0x6D44624Fu);
        *(_QWORD *)(v12 + 16) = Object;
      }
      ServerSiloGlobals = (char *)PsGetServerSiloGlobals((__int64)Object);
      CurrentThread = KeGetCurrentThread();
      v16 = ServerSiloGlobals;
      --CurrentThread->SpecialApcDisable;
      v17 = (volatile signed __int32 *)(ServerSiloGlobals + 120);
      v19 = (AutoBoost *)KeAbPreAcquire((__int64)(ServerSiloGlobals + 120), 0LL, 0LL, v18);
      v21 = v19;
      if ( _interlockedbittestandset64(v17, 0LL) )
        ExfAcquirePushLockExclusiveEx(v16 + 15, v19, (__int64)(v16 + 15));
      if ( v21 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v21, v20);
        else
          *((_BYTE *)v21 + 10) = 1;
      }
      v22 = v10[38];
      if ( v22 )
      {
        v6 = (_QWORD *)v12;
        v12 = v10[38];
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 240), 1uLL) <= 0 )
          __fastfail(0xEu);
      }
      else
      {
        if ( (a5 & 1) != 0 )
        {
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
            __fastfail(0xEu);
          *v16 = v12 + 15;
        }
        v10[38] = v12;
        if ( (a5 & 2) != 0 )
        {
          v23 = *v16 & 0xFFFFFFFFFFFFFFF0uLL;
          if ( v10 != *(_QWORD **)v23 )
          {
            *(_QWORD *)(v12 + 8) = *(_QWORD *)v23;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 240), 1uLL) <= 0 )
              __fastfail(0xEu);
            *(_QWORD *)(v12 + 24) = v23;
          }
        }
      }
      if ( a2 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 240), 0x10uLL) <= 0 )
          __fastfail(0xEu);
        v8 = _InterlockedExchange64((volatile __int64 *)(a2 + 792), (v12 | 0xF) & -(__int64)(v12 != 0));
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16 + 15);
      KeAbPostRelease((unsigned __int64)(v16 + 15));
      KeLeaveGuardedRegion();
      if ( v6 )
      {
        --v6[30];
        ObpDeleteDeviceMap(v6);
      }
      if ( v8 )
        ObDereferenceDeviceMap((volatile signed __int64 *)(v8 & 0xFFFFFFFFFFFFFFF0uLL), (v8 & 0xF) + 1);
      if ( a6 )
        *a6 = v12;
      else
        ObDereferenceDeviceMap((volatile signed __int64 *)v12, 1u);
      return 0;
    }
    else
    {
      ObfDereferenceObject(v10);
      ExFreePoolWithTag((PVOID)v12, 0x6D44624Fu);
      return v13;
    }
  }
  return result;
}
