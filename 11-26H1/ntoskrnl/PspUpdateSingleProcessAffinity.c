/*
 * XREFs of PspUpdateSingleProcessAffinity @ 0x1407F1588
 * Callers:
 *     PsUpdateActiveProcessAffinity @ 0x1407F0DD8 (PsUpdateActiveProcessAffinity.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140B6E5E8 (PspSetProcessAffinityUpdateMode.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PspUpdatePebForAffinityChange @ 0x140A9AA04 (PspUpdatePebForAffinityChange.c)
 *     PspSetProcessAffinitySafe @ 0x140AFC7BC (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspUpdateSingleProcessAffinity(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v6; // rbx
  int v7; // ebp
  int v8; // r14d
  void *v9; // rdx
  LegacyAutoBoost *v10; // rsi
  int v11; // eax
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a2 + 496) & 0x80000) != 0 )
  {
    v6 = (signed __int64 *)(a2 + 456);
    LODWORD(v12) = 0;
    v7 = 0;
    v8 = 0;
    v10 = (LegacyAutoBoost *)KeAbPreAcquire(a2 + 456, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v6, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v6, 0, v10, (struct _KTHREAD *)v6);
    if ( v10 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v10, v9);
      else
        *((_BYTE *)v10 + 10) = 1;
    }
    if ( (*(_DWORD *)(a2 + 496) & 0x80000) != 0 )
    {
      v11 = PspSetProcessAffinitySafe((struct _KPROCESS *)a2, (__int64)&v12);
      v7 = v12;
      v8 = v11;
    }
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((unsigned __int64)v6);
    if ( v8 >= 0 )
    {
      if ( v7 )
        PspUpdatePebForAffinityChange(a1, a2);
    }
  }
}
