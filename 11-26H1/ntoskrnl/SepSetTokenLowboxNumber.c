/*
 * XREFs of SepSetTokenLowboxNumber @ 0x140A2C4A4
 * Callers:
 *     SepGetAnonymousToken @ 0x1403C9F7C (SepGetAnonymousToken.c)
 *     NtCreateLowBoxToken @ 0x1408140F0 (NtCreateLowBoxToken.c)
 *     SeExchangePrimaryToken @ 0x140814B78 (SeExchangePrimaryToken.c)
 *     SeSubProcessToken @ 0x140A2B26C (SeSubProcessToken.c)
 *     SeSetSessionIdToken @ 0x140AE7F2C (SeSetSessionIdToken.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     SepGetTokenSessionMapEntry @ 0x1404B8110 (SepGetTokenSessionMapEntry.c)
 *     SepInitializeLowBoxNumberTable @ 0x140816AD0 (SepInitializeLowBoxNumberTable.c)
 *     SepGetLowBoxNumberEntry @ 0x140A2C7B8 (SepGetLowBoxNumberEntry.c)
 */

__int64 __fastcall SepSetTokenLowboxNumber(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbp
  char v7; // r14
  char v8; // r15
  int LowBoxNumberEntry; // esi
  unsigned __int64 *v10; // rdi
  struct _KTHREAD *v11; // rax
  AutoBoost *v12; // rax
  void *v13; // rdx
  AutoBoost *v14; // rsi
  struct _KTHREAD *CurrentThread; // rax
  void *v17; // rdx
  LegacyAutoBoost *v18; // rdi
  int TokenSessionMapEntry; // eax
  struct _KTHREAD *v20; // rax
  struct _KLOCK_ENTRIES *v21; // r9
  AutoBoost *v22; // rax
  void *v23; // rdx
  signed __int8 v24; // cf
  AutoBoost *v25; // rdi
  struct _KTHREAD *v26; // rax
  AutoBoost *v27; // rax
  AutoBoost *v28; // rbp
  char v29; // dl
  unsigned __int64 *v30; // [rsp+70h] [rbp+18h] BYREF
  __int64 v31; // [rsp+78h] [rbp+20h] BYREF

  v4 = *(unsigned int *)(a1 + 120);
  v30 = 0LL;
  v31 = 0LL;
  v7 = 0;
  v8 = 0;
  LowBoxNumberEntry = 0;
  if ( (unsigned int)v4 >= 5 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v18 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(
        (signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink,
        0,
        v18,
        (struct _KTHREAD *)&SepRmCapTableLock.ThreadListEntry.Blink);
    if ( v18 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v18, v17);
      else
        *((_BYTE *)v18 + 10) = 1;
    }
    v7 = 1;
    TokenSessionMapEntry = SepGetTokenSessionMapEntry(v4, 0, (__int64 *)&v30);
    LowBoxNumberEntry = TokenSessionMapEntry;
    if ( TokenSessionMapEntry < 0 )
    {
      if ( TokenSessionMapEntry != -1073741275 )
        goto LABEL_17;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink);
      KeAbPostRelease((unsigned __int64)&SepRmCapTableLock.ThreadListEntry.Blink);
      KeLeaveCriticalRegion();
      v20 = KeGetCurrentThread();
      --v20->KernelApcDisable;
      v22 = (AutoBoost *)KeAbPreAcquire((__int64)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL, 0LL, v21);
      v24 = _interlockedbittestandset64((volatile signed __int32 *)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL);
      v25 = v22;
      if ( v24 )
        ExfAcquirePushLockExclusiveEx(
          (unsigned __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink,
          v22,
          (__int64)&SepRmCapTableLock.ThreadListEntry.Blink);
      if ( v25 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v25, v23);
        else
          *((_BYTE *)v25 + 10) = 1;
      }
      LowBoxNumberEntry = SepGetTokenSessionMapEntry(v4, 1, (__int64 *)&v30);
      v7 = 0;
      v8 = 1;
      if ( LowBoxNumberEntry < 0 )
        goto LABEL_15;
    }
    v10 = v30;
  }
  else
  {
    v10 = &SepRmCapTableLock.AffinityVersion + 5 * v4;
  }
  if ( !*((_BYTE *)v10 + 32) )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, a4);
    v28 = v27;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v27, (__int64)v10);
    v29 = 0;
    if ( v28 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v28, 0LL);
      else
        *((_BYTE *)v28 + 10) = 1;
    }
    if ( *((_BYTE *)v10 + 32) == v29 )
      LowBoxNumberEntry = SepInitializeLowBoxNumberTable((__int64)v10);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegion();
  }
  if ( !LowBoxNumberEntry )
  {
    v11 = KeGetCurrentThread();
    --v11->KernelApcDisable;
    v12 = (AutoBoost *)KeAbPreAcquire((__int64)v10, 0LL, 0LL, a4);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v12, (__int64)v10);
    if ( v14 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v14, v13);
      else
        *((_BYTE *)v14 + 10) = 1;
    }
    LowBoxNumberEntry = SepGetLowBoxNumberEntry(v10, a2, &v31);
    if ( !LowBoxNumberEntry )
      *(_QWORD *)(a1 + 1080) = v31;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v10);
    KeAbPostRelease((unsigned __int64)v10);
    KeLeaveCriticalRegion();
  }
LABEL_15:
  if ( v8 )
  {
    if ( (_InterlockedExchangeAdd64(
            (volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink,
            0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink);
    goto LABEL_21;
  }
  if ( v7 )
  {
LABEL_17:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&SepRmCapTableLock.ThreadListEntry.Blink);
LABEL_21:
    KeAbPostRelease((unsigned __int64)&SepRmCapTableLock.ThreadListEntry.Blink);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)LowBoxNumberEntry;
}
