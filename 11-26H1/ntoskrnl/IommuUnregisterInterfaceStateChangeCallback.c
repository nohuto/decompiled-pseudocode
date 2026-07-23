/*
 * XREFs of IommuUnregisterInterfaceStateChangeCallback @ 0x1405A2310
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

__int64 __fastcall IommuUnregisterInterfaceStateChangeCallback(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  __int64 v7; // rsi
  unsigned int v8; // r14d
  AutoBoost *v9; // rax
  volatile unsigned __int8 *v10; // rdx
  struct _KLOCK_ENTRIES *v11; // r9
  AutoBoost *v12; // rbx
  __int64 v13; // rax
  AutoBoost *v14; // rax
  volatile unsigned __int8 *v15; // rdx
  signed __int8 v16; // cf
  AutoBoost *v17; // rsi
  _QWORD *v18; // rax
  __int64 v19; // r8
  _QWORD *v20; // rdx
  void *v21; // rcx
  __int64 v22; // rcx

  v4 = a2 + 54;
  v7 = 0LL;
  v8 = 0;
  v9 = (AutoBoost *)KeAbPreAcquire((__int64)(a2 + 54), 0LL, 0LL, a4);
  v12 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v9, (__int64)v4);
  if ( v12 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
    {
      LOBYTE(v10) = 2;
      AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v12 + 33), v10, 1);
    }
    else
    {
      *((_BYTE *)v12 + 10) = 1;
    }
  }
  v13 = a2[9];
  if ( v13 && *(_QWORD *)(v13 + 16) == a1 )
  {
    v14 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock, 0LL, 0LL, v11);
    v16 = _interlockedbittestandset64(&IommuInterfaceStateChangeCallbackPushLock.Header.Lock, 0LL);
    v17 = v14;
    if ( v16 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
        v14,
        (__int64)&IommuInterfaceStateChangeCallbackPushLock);
    if ( v17 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v15) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v17 + 33), v15, 1);
      }
      else
      {
        *((_BYTE *)v17 + 10) = 1;
      }
    }
    v18 = (_QWORD *)a2[9];
    v19 = *v18;
    if ( *(_QWORD **)(*v18 + 8LL) != v18 || (v20 = (_QWORD *)v18[1], (_QWORD *)*v20 != v18) )
      __fastfail(3u);
    *v20 = v19;
    *(_QWORD *)(v19 + 8) = v20;
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.Header.Lock);
    KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock);
    v7 = a2[9];
    v21 = (void *)a2[1];
    a2[9] = 0LL;
    ObfDereferenceObjectWithTag(v21, 0x446C6148u);
  }
  else
  {
    v8 = -1073741823;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((unsigned __int64)v4);
  if ( v7 )
    HalpMmAllocCtxFree(v22, v7);
  return v8;
}
