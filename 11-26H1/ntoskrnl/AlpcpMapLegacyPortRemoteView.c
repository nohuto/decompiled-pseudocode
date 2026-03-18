/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x140A662E8
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277CC0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278BD0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1409BEF10 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1409C2710 (AlpcpUnlockBlob.c)
 *     AlpcpInsertResourcePort @ 0x140A66404 (AlpcpInsertResourcePort.c)
 *     AlpcpRemoveResourcePort @ 0x140A66694 (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rdi
  signed __int64 *v5; // rbx
  void *v8; // rdx
  LegacyAutoBoost *v9; // rsi
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  signed __int64 *v12; // rcx

  v4 = *(_QWORD *)(a2 + 40);
  v5 = a1 + 44;
  v9 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(a1 + 44), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64(v5, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v5, 0, v9, (struct _KTHREAD *)v5);
  if ( v9 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v9, v8);
    else
      *((_BYTE *)v9 + 10) = 1;
  }
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v4 + 16), (__int64)v8, v10, v11);
  v12 = *(signed __int64 **)(v4 + 24);
  if ( a1 != v12 )
  {
    AlpcpRemoveResourcePort(v12, v4);
    ObfDereferenceObject(*(PVOID *)(v4 + 24));
    PsReferenceSiloContext(a1);
    *(_QWORD *)(v4 + 24) = a1;
    AlpcpInsertResourcePort(a1, v4);
  }
  *(_OWORD *)a3 = 0LL;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_DWORD *)a3 = 24;
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v4 + 40);
  *(_QWORD *)(a3 + 8) = *(_QWORD *)(v4 + 48);
  AlpcpUnlockBlob(*(_QWORD *)(v4 + 16));
  if ( _InterlockedCompareExchange64(v5, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v5);
  KeAbPostRelease((unsigned __int64)v5);
  return 0LL;
}
