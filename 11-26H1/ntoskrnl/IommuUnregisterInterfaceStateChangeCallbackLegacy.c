/*
 * XREFs of IommuUnregisterInterfaceStateChangeCallbackLegacy @ 0x1405A24B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

__int64 __fastcall IommuUnregisterInterfaceStateChangeCallbackLegacy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  AutoBoost *v7; // rax
  volatile unsigned __int8 *v8; // rdx
  signed __int8 v9; // cf
  AutoBoost *v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v4 = *(_QWORD *)(a2 + 72);
  v5 = 0;
  if ( v4 && *(_QWORD *)(v4 + 16) == a1 )
  {
    v7 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64(&IommuInterfaceStateChangeCallbackPushLock.Header.Lock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
        v7,
        (__int64)&IommuInterfaceStateChangeCallbackPushLock);
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
    v11 = *(_QWORD *)v4;
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || (v12 = *(_QWORD **)(v4 + 8), *v12 != v4) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock);
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x446C6148u);
    *(_OWORD *)v4 = 0LL;
    *(_OWORD *)(v4 + 16) = 0LL;
    *(_OWORD *)(v4 + 32) = 0LL;
    HalpMmAllocCtxFree(v13, v4);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v5;
}
