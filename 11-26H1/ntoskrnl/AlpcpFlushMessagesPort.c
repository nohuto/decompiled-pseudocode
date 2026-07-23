/*
 * XREFs of AlpcpFlushMessagesPort @ 0x1408F1310
 * Callers:
 *     AlpcpDoPortCleanup @ 0x1408F0B84 (AlpcpDoPortCleanup.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140441D40 (ObReferenceObjectSafe.c)
 *     AlpcpFlushQueue @ 0x140A878B0 (AlpcpFlushQueue.c)
 *     AlpcpFlushCancelQueue @ 0x140A9F650 (AlpcpFlushCancelQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x140AAC030 (AlpcpFlushMessagesByRequestor.c)
 */

void __fastcall AlpcpFlushMessagesPort(__int64 a1)
{
  struct _KLOCK_ENTRIES *v2; // r9
  __int64 *v3; // rdi
  signed __int64 *v4; // rsi
  void *v5; // rdx
  LegacyAutoBoost *v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi

  AlpcpFlushQueue(a1, a1 + 144, 1LL);
  AlpcpFlushQueue(a1, a1 + 160, 2LL);
  AlpcpFlushQueue(a1, a1 + 184, 3LL);
  AlpcpFlushQueue(a1, a1 + 208, 4LL);
  AlpcpFlushCancelQueue(a1, 0LL);
  if ( (*(_BYTE *)(a1 + 416) & 6) == 6 )
  {
    v3 = *(__int64 **)(a1 + 16);
    v4 = v3 - 2;
    v6 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v3 - 2), 0LL, 0LL, v2);
    if ( _InterlockedCompareExchange64(v3 - 2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v3 - 2, 0, v6, (struct _KTHREAD *)(v3 - 2));
    if ( v6 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v6, v5);
      else
        *((_BYTE *)v6 + 10) = 1;
    }
    v7 = *v3;
    v8 = v3[2];
    if ( v7 )
      v7 &= -(__int64)(ObReferenceObjectSafe(v7) != 0);
    if ( v8 )
      v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
    if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v4);
    KeAbPostRelease((unsigned __int64)v4);
    if ( v7 )
    {
      if ( (*(_DWORD *)(v7 + 416) & 0x40) == 0 && v8 && (*(_DWORD *)(v8 + 416) & 8) == 0 )
      {
        AlpcpFlushMessagesByRequestor(v8, v7, v7 + 144, 1LL);
        AlpcpFlushMessagesByRequestor(v8, v7, v7 + 160, 2LL);
        if ( (*(_DWORD *)(a1 + 416) & 0x80u) == 0 )
          AlpcpFlushMessagesByRequestor(v8, v7, v7 + 184, 3LL);
        AlpcpFlushMessagesByRequestor(v8, v7, v7 + 208, 4LL);
        AlpcpFlushCancelQueue(v7, a1);
      }
      ObfDereferenceObject((PVOID)v7);
    }
    if ( v8 )
      ObfDereferenceObject((PVOID)v8);
  }
}
