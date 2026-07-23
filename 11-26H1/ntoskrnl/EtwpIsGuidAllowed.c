/*
 * XREFs of EtwpIsGuidAllowed @ 0x140916CEC
 * Callers:
 *     EtwpNotifyDisallowedGuidChange @ 0x14091555C (EtwpNotifyDisallowedGuidChange.c)
 *     EtwpIsRegEntryAllowed @ 0x140916B44 (EtwpIsRegEntryAllowed.c)
 *     EtwpAddRegEntryToGroup @ 0x1409172C0 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     bsearch @ 0x140538DA0 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  signed __int64 *v4; // rbx
  void *v7; // rdx
  LegacyAutoBoost *v8; // rsi
  bool v9; // di
  size_t v10; // rax

  v4 = (signed __int64 *)(a1 + 688);
  v8 = (LegacyAutoBoost *)KeAbPreAcquire(a1 + 688, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4, 0, v8, (struct _KTHREAD *)v4);
  v9 = 1;
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v10 = *(unsigned __int16 *)(a1 + 1328);
  if ( (_WORD)v10 )
    v9 = bsearch(a2, *(const void **)(a1 + 1336), v10, 0x10uLL, EtwpCompareGuid) == 0LL;
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((unsigned __int64)v4);
  return v9;
}
