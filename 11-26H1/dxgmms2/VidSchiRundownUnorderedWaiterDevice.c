/*
 * XREFs of VidSchiRundownUnorderedWaiterDevice @ 0x14004B6CC
 * Callers:
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x14003C2CC (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiRundownUnorderedWaiterGlobal @ 0x1400552F8 (VidSchiRundownUnorderedWaiterGlobal.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140055FF8 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     ?VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14004B794 (-VidSchiRundownUnorderedWaiterPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 */

void __fastcall VidSchiRundownUnorderedWaiterDevice(struct HwQueueStagingList *this, __int64 a2)
{
  _QWORD *v2; // rsi
  _QWORD *v4; // rbx
  _QWORD *v6; // r14
  _QWORD **v7; // r14
  _QWORD *v8; // rdi
  struct _VIDSCH_QUEUE_PACKET *v9; // rdx
  _QWORD *v10; // rsi
  _QWORD *v11; // rbx
  _QWORD *v12; // r14
  _QWORD **v13; // r14
  _QWORD *v14; // rdi
  _QWORD *v15; // rbp
  _QWORD **v16; // rbp
  _QWORD *v17; // r15
  struct _VIDSCH_QUEUE_PACKET *v18; // rdx

  v2 = (_QWORD *)(a2 + 80);
  v4 = *(_QWORD **)(a2 + 80);
  while ( v4 != v2 )
  {
    v6 = v4;
    v4 = (_QWORD *)*v4;
    v7 = (_QWORD **)(v6 + 81);
    v8 = *v7;
    while ( v8 != v7 )
    {
      v9 = (struct _VIDSCH_QUEUE_PACKET *)(v8 - 4);
      v8 = (_QWORD *)*v8;
      VidSchiRundownUnorderedWaiterPacket(this, v9);
    }
  }
  v10 = (_QWORD *)(a2 + 96);
  v11 = *(_QWORD **)(a2 + 96);
  while ( v11 != v10 )
  {
    v12 = v11;
    v11 = (_QWORD *)*v11;
    v13 = (_QWORD **)(v12 + 4);
    v14 = *v13;
    while ( v14 != v13 )
    {
      v15 = v14;
      v14 = (_QWORD *)*v14;
      v16 = (_QWORD **)(v15 + 19);
      v17 = *v16;
      while ( v17 != v16 )
      {
        v18 = (struct _VIDSCH_QUEUE_PACKET *)(v17 - 4);
        v17 = (_QWORD *)*v17;
        VidSchiRundownUnorderedWaiterPacket(this, v18);
      }
    }
  }
}
