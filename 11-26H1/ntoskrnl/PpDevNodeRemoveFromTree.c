/*
 * XREFs of PpDevNodeRemoveFromTree @ 0x1404D43C8
 * Callers:
 *     IoReportDetectedDevice @ 0x1407A0B40 (IoReportDetectedDevice.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409B337C (PnpUnlinkDeviceRemovalRelations.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PnpOrphanNotification @ 0x140B3030C (PnpOrphanNotification.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall PpDevNodeRemoveFromTree(_QWORD *a1)
{
  char v2; // bp
  KIRQL v3; // al
  __int64 v4; // rcx
  _QWORD **v5; // rcx
  _QWORD *i; // rdx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  char result; // al
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // r8
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v4 = a1[2];
  if ( v4 )
  {
    v5 = (_QWORD **)(v4 + 8);
    for ( i = *v5; i != a1; i = (_QWORD *)*i )
      v5 = (_QWORD **)i;
    v7 = (_QWORD *)*a1;
    *v5 = (_QWORD *)*a1;
    v8 = a1[2];
    if ( *(_QWORD *)(v8 + 8) )
    {
      for ( ; v7; v7 = (_QWORD *)*v7 )
        v5 = (_QWORD **)v7;
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(v8 + 24) = v5;
    KeReleaseSpinLock(&PnpSpinLock, v3);
    v9 = a1[78];
    if ( *(_QWORD **)(v9 + 8) != a1 + 78 || (v10 = (_QWORD *)a1[79], (_QWORD *)*v10 != a1 + 78) )
LABEL_21:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    PnpOrphanNotification(a1);
    v2 = 1;
  }
  else
  {
    KeReleaseSpinLock(&PnpSpinLock, v3);
  }
  ExAcquireFastMutex(&PnpRebuildPowerRelationsQueueLock);
  v11 = (_QWORD *)a1[22];
  while ( v11 != a1 + 22 )
  {
    v14 = v11 - 3;
    v15 = v11;
    v16 = *(v11 - 3);
    v11 = (_QWORD *)*v11;
    if ( *(_QWORD **)(v16 + 8) != v14 )
      goto LABEL_21;
    v17 = (_QWORD *)v14[1];
    if ( (_QWORD *)*v17 != v14 )
      goto LABEL_21;
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = *v15;
    if ( *(_QWORD **)(*v15 + 8LL) != v15 )
      goto LABEL_21;
    v19 = (_QWORD *)v15[1];
    if ( (_QWORD *)*v19 != v15 )
      goto LABEL_21;
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    ExFreePoolWithTag(v14, 0x72775044u);
  }
  v12 = (_QWORD *)a1[24];
  while ( v12 != a1 + 24 )
  {
    v20 = v12;
    v12 = (_QWORD *)*v12;
    if ( (_QWORD *)v12[1] != v20 )
      goto LABEL_21;
    v21 = (_QWORD *)v20[1];
    if ( (_QWORD *)*v21 != v20 )
      goto LABEL_21;
    *v21 = v12;
    v12[1] = v21;
    v22 = v20[3];
    if ( *(_QWORD **)(v22 + 8) != v20 + 3 )
      goto LABEL_21;
    v23 = (_QWORD *)v20[4];
    if ( (_QWORD *)*v23 != v20 + 3 )
      goto LABEL_21;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    ExFreePoolWithTag(v20, 0x72775044u);
  }
  KeReleaseGuardedMutex(&PnpRebuildPowerRelationsQueueLock);
  result = v2;
  a1[2] = 0LL;
  a1[1] = 0LL;
  *a1 = 0LL;
  a1[3] = 0LL;
  return result;
}
