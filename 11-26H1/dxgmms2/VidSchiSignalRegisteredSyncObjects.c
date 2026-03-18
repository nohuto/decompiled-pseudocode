/*
 * XREFs of VidSchiSignalRegisteredSyncObjects @ 0x14003CED0
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x140007A8C (VidSchiMarkDeviceAsError.c)
 * Callees:
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x14003CFE4 (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     ?VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140054244 (-VidSchiCompleteAllWaitsPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiSignalRegisteredSyncObjects(struct HwQueueStagingList *this, _QWORD *a2)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  _QWORD **v9; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // r15
  _QWORD **v14; // r15
  _QWORD *v15; // rdi
  _QWORD *v16; // rbp
  _QWORD **v17; // rbp
  _QWORD *v18; // r14
  struct _VIDSCH_QUEUE_PACKET *v19; // rdx
  struct _VIDSCH_QUEUE_PACKET *v20; // rdx

  v3 = a2 + 20;
  while ( 1 )
  {
    v5 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( (_QWORD *)v5[1] != v3 || (v6 = *v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v3 = v6;
    *(_QWORD *)(v6 + 8) = v3;
    _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled((_VIDSCH_SYNC_OBJECT *)v5[2], this, 1);
    v5[1] = 0LL;
    *v5 = 0LL;
  }
  v7 = (_QWORD *)a2[10];
  while ( v7 != a2 + 10 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    v9 = (_QWORD **)(v8 + 81);
    v10 = *v9;
    while ( v10 != v9 )
    {
      v20 = (struct _VIDSCH_QUEUE_PACKET *)(v10 - 4);
      v10 = (_QWORD *)*v10;
      VidSchiCompleteAllWaitsPacket(this, v20);
    }
  }
  v11 = a2 + 12;
  v12 = (_QWORD *)a2[12];
  while ( v12 != v11 )
  {
    v13 = v12;
    v12 = (_QWORD *)*v12;
    v14 = (_QWORD **)(v13 + 4);
    v15 = *v14;
    while ( v15 != v14 )
    {
      v16 = v15;
      v15 = (_QWORD *)*v15;
      v17 = (_QWORD **)(v16 + 19);
      v18 = *v17;
      while ( v18 != v17 )
      {
        v19 = (struct _VIDSCH_QUEUE_PACKET *)(v18 - 4);
        v18 = (_QWORD *)*v18;
        VidSchiCompleteAllWaitsPacket(this, v19);
      }
    }
  }
}
