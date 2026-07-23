/*
 * XREFs of IommuRegisterInterfaceStateChangeCallbackLegacy @ 0x1405A1DF0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     HalpIommuDeviceGetDomainTypes @ 0x14058A2B8 (HalpIommuDeviceGetDomainTypes.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuRegisterInterfaceStateChangeCallbackLegacy(__int64 a1, LIST_ENTRY *a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  LIST_ENTRY **v9; // rax
  LIST_ENTRY **v10; // rdi
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rax
  volatile unsigned __int8 *v13; // rdx
  signed __int8 v14; // cf
  AutoBoost *v15; // rsi
  char v16; // r8
  struct _LIST_ENTRY *Blink; // rax

  v4 = 0;
  if ( *a4 )
  {
    if ( *(_QWORD *)(a3 + 72) )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v9 = (LIST_ENTRY **)HalpMmAllocCtxAlloc(a1, 48LL);
      v10 = v9;
      if ( v9 )
      {
        *v9 = 0LL;
        v9[1] = 0LL;
        v9[4] = 0LL;
        v9[5] = 0LL;
        v9[2] = (LIST_ENTRY *)a1;
        v9[3] = a2;
        ObfReferenceObjectWithTag(*(PVOID *)(a3 + 8), 0x446C6148u);
        v10[4] = (LIST_ENTRY *)a3;
        *(_QWORD *)(a3 + 72) = v10;
        v12 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL, 0LL, v11);
        v14 = _interlockedbittestandset64(&IommuInterfaceStateChangeCallbackPushLock.Header.Lock, 0LL);
        v15 = v12;
        if ( v14 )
          ExfAcquirePushLockExclusiveEx(
            (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            v12,
            (__int64)&IommuInterfaceStateChangeCallbackPushLock);
        v16 = 1;
        if ( v15 )
        {
          if ( (KiAbpGlobalState & 1) != 0 )
          {
            LOBYTE(v13) = 2;
            AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v15 + 33), v13, 1);
          }
          else
          {
            *((_BYTE *)v15 + 10) = 1;
          }
        }
        *((_DWORD *)v10 + 10) = *a4;
        if ( ((unsigned __int8)*a4 & (unsigned __int8)v16) != 0 )
          *((_DWORD *)v10 + 11) = HalpIommuDeviceGetDomainTypes(a3, (__int64)v13);
        guard_dispatch_icall_no_overrides(v10 + 5, a2);
        Blink = IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink;
        if ( IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink->Flink != &IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead )
          __fastfail(3u);
        *v10 = &IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead;
        v10[1] = Blink;
        Blink->Flink = (struct _LIST_ENTRY *)v10;
        IommuInterfaceStateChangeCallbackPushLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)v10;
        if ( (_InterlockedExchangeAdd64(
                (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
                0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.Header.Lock);
        KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741582;
  }
  return v4;
}
