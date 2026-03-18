/*
 * XREFs of VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x140021700 (VidSchiScheduleCommandToRun.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1400560C0 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x140007A40 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCompleteSignalCommmand @ 0x140012020 (VidSchiCompleteSignalCommmand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 *     VidSchiUpdateNativeFenceCurrentValue @ 0x140049328 (VidSchiUpdateNativeFenceCurrentValue.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 *__fastcall VidSchiProcessCrossAdapterSignaledSyncObjects(HwQueueStagingList *this, __int64 a2)
{
  __int64 ****v4; // rcx
  __int64 ***v5; // rax
  __int64 **v6; // rdx
  __int64 ***v7; // rax
  _QWORD *v8; // rdx
  char v9; // r15
  __int64 *result; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 **v23; // [rsp+40h] [rbp-C0h]
  _QWORD v24[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v25; // [rsp+68h] [rbp-98h]
  _QWORD v26[142]; // [rsp+70h] [rbp-90h] BYREF

  memset(v26, 0, sizeof(v26));
  v23 = &v22;
  v25 = 0;
  v22 = (__int64 *)&v22;
  v24[0] = a2 + 3424;
  AcquireSpinLock::Acquire((AcquireSpinLock *)v24);
  v4 = (__int64 ****)(a2 + 3408);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == (__int64 ***)v4 )
      break;
    if ( v5[1] != (__int64 **)v4
      || (v6 = *v5, (*v5)[1] != (__int64 *)v5)
      || (*v4 = (__int64 ***)v6,
          v6[1] = (__int64 *)v4,
          *v5 = 0LL,
          v5[1] = 0LL,
          v7 = v5 + 2,
          v8 = v23,
          *v23 != (__int64 *)&v22) )
    {
LABEL_6:
      __fastfail(3u);
    }
    v7[1] = v23;
    *v7 = &v22;
    *v8 = v7;
    --*(_DWORD *)(a2 + 3440);
    v23 = (__int64 **)v7;
  }
  v9 = *(_BYTE *)(a2 + 3444);
  *(_BYTE *)(a2 + 3444) = 0;
  AcquireSpinLock::Release((AcquireSpinLock *)v24);
  while ( 1 )
  {
    result = v22;
    if ( v22 == (__int64 *)&v22 )
      break;
    if ( (__int64 **)v22[1] != &v22 )
      goto LABEL_6;
    v11 = (__int64 *)*v22;
    if ( *(__int64 **)(*v22 + 8) != v22 )
      goto LABEL_6;
    v22 = (__int64 *)*v22;
    v11[1] = (__int64)&v22;
    v12 = result - 39;
    *result = 0LL;
    result[1] = 0LL;
    v13 = *(_QWORD *)(a2 + 272);
    switch ( *((_DWORD *)result - 66) )
    {
      case 2:
        memset(v26, 0, sizeof(v26));
        LODWORD(v26[0]) = 895576406;
        LODWORD(v26[6]) = 5;
        v26[11] = v13;
        if ( *((_BYTE *)v12 + 28) )
          v20 = *(_QWORD *)(v12[43] + 32);
        else
          v20 = v12[10];
        v26[68] = v20;
        v26[36] = v12;
        HIDWORD(v26[35]) = 1;
        VidSchiCompleteSignalCommmand(this, v26, 0LL);
        break;
      case 4:
      case 5:
        if ( *(_BYTE *)(v12[43] + 48) )
          _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v12, this, 0);
        else
          VidSchiUnwaitMonitoredFences(this);
        goto LABEL_18;
      case 6:
        if ( *(_BYTE *)(v12[43] + 48) )
        {
          _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v12, this, 0);
          if ( !*(_BYTE *)(a2 + 7082) )
          {
            v14 = v12[8];
            v15 = *((_DWORD *)v12 + 20);
            v16 = v12[24];
            v21 = 1;
            VidSchiUpdateNativeFenceCurrentValue(a2, v16, -1, *(_DWORD *)(v14 + 192) + v15, (__int64)&v21);
          }
        }
        else
        {
          if ( !*(_BYTE *)(a2 + 7082) )
          {
            v17 = v12[8];
            v18 = *((_DWORD *)v12 + 20);
            v19 = v12[24];
            v21 = 2;
            VidSchiUpdateNativeFenceCurrentValue(a2, v19, 0, *(_DWORD *)(v17 + 192) + v18, (__int64)&v21);
          }
          VidSchiUnwaitNativeFenceWaiters(this, (struct _VIDSCH_SYNC_OBJECT *)v12);
        }
LABEL_18:
        VidSchiReleaseSyncObjectReference(v12);
        break;
    }
  }
  if ( v9 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 16) + 2504LL) & 0x800) != 0 && !*(_BYTE *)(a2 + 7082) )
    {
      v21 = 2;
      VidSchiUpdateNativeFenceCurrentValue(a2, 0, 0, 0, (__int64)&v21);
    }
    return (__int64 *)VidSchiUnwaitMonitoredFences(this);
  }
  return result;
}
