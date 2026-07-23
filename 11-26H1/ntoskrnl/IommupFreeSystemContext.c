/*
 * XREFs of IommupFreeSystemContext @ 0x14059F584
 * Callers:
 *     IommuFreeLibraryContext @ 0x14059EB3C (IommuFreeLibraryContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     HalpMmAllocCtxFree @ 0x14035ADA4 (HalpMmAllocCtxFree.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 */

void __fastcall IommupFreeSystemContext(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v5; // si
  AutoBoost *v6; // rax
  volatile unsigned __int8 *v7; // rdx
  signed __int8 v8; // cf
  AutoBoost *v9; // rdi
  char v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  if ( *(_DWORD *)(a1 + 16) )
  {
    v5 = 0;
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea, 0LL, 0LL, a4);
    v8 = _interlockedbittestandset64(
           (volatile signed __int32 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea,
           0LL);
    v9 = v6;
    if ( v8 )
      ExfAcquirePushLockExclusiveEx(
        (unsigned __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea,
        v6,
        (__int64)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
    v10 = 1;
    if ( v9 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
      {
        LOBYTE(v7) = 2;
        AutoBoost::KiAbpSetEntryValue((AutoBoost *)((char *)v9 + 33), v7, 1);
      }
      else
      {
        *((_BYTE *)v9 + 10) = 1;
      }
    }
    if ( *(_QWORD *)(a1 + 32) == a1 + 32 && *(_QWORD *)(a1 + 48) == a1 + 48 )
    {
      v11 = *(_QWORD *)a1;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v12 = *(_QWORD **)(a1 + 8), *v12 != a1) )
        __fastfail(3u);
      *v12 = v11;
      v5 = v10;
      *(_QWORD *)(v11 + 8) = v12;
    }
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
    KeAbPostRelease((unsigned __int64)&IommuInterfaceStateChangeCallbackPushLock.StateSaveArea);
    if ( v5 )
      HalpMmAllocCtxFree(v13, a1);
  }
}
