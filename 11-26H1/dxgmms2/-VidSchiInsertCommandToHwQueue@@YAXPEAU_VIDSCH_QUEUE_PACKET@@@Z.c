/*
 * XREFs of ?VidSchiInsertCommandToHwQueue@@YAXPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140009F10
 * Callers:
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x140009B58 (VidSchiSubmitCommandPacketToHwQueue.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000A3C0 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AC8C (-VidSchiNotifyReadyQueueAdded@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000AD98 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x14000F3B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

void __fastcall VidSchiInsertCommandToHwQueue(struct _VIDSCH_QUEUE_PACKET *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // r8
  bool v11; // di
  __int64 *v12; // rbx
  __int64 *v13; // rax
  int v14; // eax
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  __int64 *v17; // [rsp+40h] [rbp-18h]
  char v18; // [rsp+48h] [rbp-10h]
  int v19; // [rsp+4Ch] [rbp-Ch]

  v1 = *((_QWORD *)a1 + 12);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v15 = *(_QWORD *)(v4 + 24);
  v18 = 0;
  v19 = 1;
  v17 = &v16;
  v16 = (__int64)&v16;
  _InterlockedIncrement((volatile signed __int32 *)(v15 + 788));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 3012));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 1844));
  v6 = *((_DWORD *)a1 + 12);
  if ( v6 != 4 && v6 != 5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 1848));
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 312));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 148));
  *((_QWORD *)a1 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)a1 + 13) = 6;
  WdLogSingleEntry2(4LL, a1, v1);
  v7 = (_QWORD *)(v1 + 160);
  WdLogGlobalForLineNumber = 4931;
  v8 = *(_QWORD **)(v1 + 168);
  v9 = (_QWORD *)((char *)a1 + 32);
  if ( *v8 != v1 + 160 )
LABEL_3:
    __fastfail(3u);
  *v9 = v7;
  *((_QWORD *)a1 + 5) = v8;
  *v8 = v9;
  *(_QWORD *)(v1 + 168) = v9;
  v10 = *(_QWORD **)(v1 + 208);
  if ( v10 == v7 )
  {
    v11 = !VidSchiPacketBlockedOnWaitCondition(a1);
    WdLogSingleEntry3(4LL, v1, v9, v11);
    WdLogGlobalForLineNumber = 4963;
    *(_QWORD *)(v1 + 208) = v9;
    if ( v11 )
    {
      if ( *(_DWORD *)(v1 + 124) != 1 )
      {
        if ( !*(_BYTE *)(*(_QWORD *)(v1 + 40) + 152LL) )
          VidSchiNotifyReadyQueueAdded((struct VIDSCH_HW_QUEUE *)v1);
        *(_DWORD *)(v1 + 124) = 1;
      }
      v12 = (__int64 *)(v1 + 176);
      if ( !*v12 )
      {
        v13 = v17;
        if ( (__int64 *)*v17 != &v16 )
          goto LABEL_3;
        v12[1] = (__int64)v17;
        *v12 = (__int64)&v16;
        *v13 = (__int64)v12;
        v17 = v12;
        v18 = 0;
      }
    }
    else if ( (_QWORD *)*v7 == v9 )
    {
      v14 = *(_DWORD *)(v1 + 124);
      if ( v14 != 2 )
      {
        if ( v14 == 1 && !*(_BYTE *)(*(_QWORD *)(v1 + 40) + 152LL) )
          VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)v1);
        *(_DWORD *)(v1 + 124) = 2;
      }
    }
  }
  else
  {
    WdLogSingleEntry4(4LL, v1, v10, a1, *((int *)a1 + 12));
    WdLogGlobalForLineNumber = 4951;
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v15);
}
