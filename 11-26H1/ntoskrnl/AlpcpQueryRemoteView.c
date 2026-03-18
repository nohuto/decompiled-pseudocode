/*
 * XREFs of AlpcpQueryRemoteView @ 0x140AA8D08
 * Callers:
 *     AlpcpReceiveLegacyConnectionReply @ 0x1408E5AC4 (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ObReferenceObjectSafe @ 0x140449C10 (ObReferenceObjectSafe.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1409C2710 (AlpcpUnlockBlob.c)
 *     AlpcpLocateView @ 0x140AA8E64 (AlpcpLocateView.c)
 */

__int64 __fastcall AlpcpQueryRemoteView(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _QWORD *v4; // r15
  volatile signed __int64 *v7; // rbx
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  unsigned int v10; // edi
  void *v11; // rsi
  char v12; // cl
  signed __int64 v13; // rax
  ULONG_PTR v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 View; // rax
  bool v20; // zf

  v4 = *(_QWORD **)(a1 + 16);
  v7 = v4 - 2;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v4 - 2), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v4 - 2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v4 - 2, 0, v9, (struct _KTHREAD *)(v4 - 2));
  v10 = 0;
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  if ( *v4 && (v11 = (void *)v4[1]) != 0LL )
  {
    if ( (*(_DWORD *)(*v4 + 416LL) & 0x1000) == 0 )
      v11 = (void *)*v4;
    v12 = ObReferenceObjectSafe((__int64)v11);
    v13 = _InterlockedCompareExchange64(v7, 0LL, 17LL);
    if ( v12 )
    {
      if ( v13 != 17 )
        ExfReleasePushLockShared(v4 - 2);
      KeAbPostRelease((unsigned __int64)(v4 - 2));
      v14 = *(_QWORD *)(a2 + 16);
      AlpcpLockForCachedReferenceBlob(v14, v15, v16, v17);
      View = AlpcpLocateView(v14, v11);
      if ( View )
      {
        *(_DWORD *)a3 = 24;
        *(_QWORD *)(a3 + 16) = *(_QWORD *)(View + 40);
        *(_QWORD *)(a3 + 8) = *(_QWORD *)(View + 48);
      }
      else
      {
        v10 = -1073741670;
      }
      AlpcpUnlockBlob(v14);
      ObfDereferenceObject(v11);
      return v10;
    }
    v20 = v13 == 17;
  }
  else
  {
    v20 = _InterlockedCompareExchange64(v7, 0LL, 17LL) == 17;
  }
  if ( !v20 )
    ExfReleasePushLockShared(v4 - 2);
  KeAbPostRelease((unsigned __int64)(v4 - 2));
  return 3221225527LL;
}
