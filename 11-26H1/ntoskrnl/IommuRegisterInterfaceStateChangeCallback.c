/*
 * XREFs of IommuRegisterInterfaceStateChangeCallback @ 0x1405A1BB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14058A2B8 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int DomainTypes; // ebx
  unsigned int v9; // ebp
  _QWORD *v10; // rax
  struct _KLOCK_ENTRIES *v11; // r9
  __int64 v12; // rsi
  volatile signed __int64 *v13; // rdi
  AutoBoost *v14; // rax
  volatile unsigned __int8 *v15; // rdx
  AutoBoost *v16; // r14
  __int64 v17; // rcx
  struct _KLOCK_ENTRIES *v18; // r9
  AutoBoost *v19; // rax
  volatile unsigned __int8 *v20; // rdx
  AutoBoost *v21; // r14
  struct _LIST_ENTRY *Blink; // rax
  int v24; // [rsp+78h] [rbp+20h] BYREF
  int v25; // [rsp+7Ch] [rbp+24h]

  DomainTypes = 0;
  v9 = 0;
  if ( *a4 )
  {
    v10 = (_QWORD *)HalpMmAllocCtxAlloc(a1, 48LL);
    v12 = (__int64)v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[5] = 0LL;
      v10[2] = a1;
      v13 = (volatile signed __int64 *)(a3 + 432);
      v10[3] = a2;
      v10[4] = a3;
      v14 = (AutoBoost *)KeAbPreAcquire(a3 + 432, 0LL, 0LL, v11);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a3 + 432), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a3 + 432), v14, a3 + 432);
      if ( v16 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
        {
          LOBYTE(v15) = 2;
          AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v16 + 33), v15, 1);
        }
        else
        {
          *((_BYTE *)v16 + 10) = 1;
        }
      }
      if ( *(_QWORD *)(a3 + 72) )
      {
        if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 432));
        KeAbPostRelease(a3 + 432);
        HalpMmAllocCtxFree(v17, v12);
        return (unsigned int)-1073741823;
      }
      else
      {
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 8), 0x446C6148u);
        *(_QWORD *)(a3 + 72) = v12;
        v19 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL, 0LL, v18);
        v21 = v19;
        if ( _interlockedbittestandset64((volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock, 0LL) )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            v19,
            (__int64)&IommuInterfaceStateChangeCallbackPushLock);
        if ( v21 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            LOBYTE(v20) = 2;
            AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v21 + 33), v20, 1);
          }
          else
          {
            *((_BYTE *)v21 + 10) = 1;
          }
        }
        *(_DWORD *)(v12 + 40) = *a4;
        if ( (*a4 & 1) != 0 )
        {
          DomainTypes = HalpIommuDeviceGetDomainTypes(a3, (__int64)v20);
          *(_DWORD *)(v12 + 44) = DomainTypes;
        }
        Blink = IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink;
        v24 = *a4;
        v25 = DomainTypes;
        if ( IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink->Flink != &IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead )
          __fastfail(3u);
        *(_QWORD *)(v12 + 8) = IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink;
        *(_QWORD *)v12 = &IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead;
        Blink->Flink = (struct _LIST_ENTRY *)v12;
        IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v12;
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.Header.Lock);
        KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock);
        if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(a3 + 432));
        KeAbPostRelease(a3 + 432);
        guard_dispatch_icall_no_overrides(&v24, a2);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741582;
  }
  return v9;
}
