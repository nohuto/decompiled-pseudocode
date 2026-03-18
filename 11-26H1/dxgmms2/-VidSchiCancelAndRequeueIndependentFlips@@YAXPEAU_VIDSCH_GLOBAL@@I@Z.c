/*
 * XREFs of ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14001DE5C (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ @ 0x14002BF40 (-GetFlipQueue@VIDSCH_FLIP_QUEUE_ITERATOR@@QEAAPEAUVIDSCH_FLIP_QUEUE@@XZ.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140032470 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?VidSchiCancelPendingPassiveFlip@@YA_NPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140059D04 (-VidSchiCancelPendingPassiveFlip@@YA_NPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@@Z.c)
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x140059DDC (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x14005A808 (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiCancelAndRequeueIndependentFlips(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int v4; // r15d
  struct VIDSCH_FLIP_QUEUE *FlipQueue; // rax
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rbx
  int v14; // eax
  unsigned __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // r13d
  __int64 v18; // r14
  int v19; // r15d
  __int64 v20; // rbx
  unsigned int v21; // r14d
  unsigned int v22; // r8d
  __int64 v23; // rcx
  struct _VIDSCH_GLOBAL *v24; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+58h] [rbp-40h]
  unsigned int v26; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v27; // [rsp+A0h] [rbp+8h] BYREF
  int v28; // [rsp+A8h] [rbp+10h]
  __int64 v29; // [rsp+B0h] [rbp+18h]

  v2 = a2;
  v25 = a2;
  v4 = -1;
  v24 = a1;
  while ( 1 )
  {
    v26 = v4;
    if ( v4 == *((_DWORD *)a1 + 40) )
      break;
    FlipQueue = VIDSCH_FLIP_QUEUE_ITERATOR::GetFlipQueue((VIDSCH_FLIP_QUEUE_ITERATOR *)&v24);
    v6 = (__int64)FlipQueue;
    if ( FlipQueue )
    {
      if ( !*((_BYTE *)FlipQueue + 80) )
      {
        v7 = *(int *)(304LL * v4 + *((_QWORD *)a1 + v2 + 431) + 188);
        if ( (int)v7 > -1 )
        {
          if ( *((_QWORD *)a1 + 447) + 160 * v7 )
          {
            if ( !VidSchiCancelPendingPassiveFlip(a1, v2, (struct VIDSCH_FLIP_QUEUE *)v6) )
            {
              v8 = *(unsigned int *)(v6 + 68);
              v9 = *(_DWORD *)(1400 * v8 + v6 + 1172);
              if ( (v9 == 5 || v9 == 15) && (*(_DWORD *)(1400 * v8 + v6 + 1272) & 0x2000) != 0 )
              {
                while ( (_DWORD)v8 != (((unsigned __int8)*(_DWORD *)(v6 + 72) + 1) & 0x3F) )
                {
                  v10 = 1400LL * (unsigned int)v8;
                  if ( (*(_DWORD *)(v10 + v6 + 1272) & 0x100000) == 0 )
                  {
                    v11 = v10 + v6 + 120;
                    if ( v11 )
                    {
                      v12 = *(_QWORD *)(v11 + 1192);
                      v27 = 0LL;
                      v13 = *(_QWORD *)(v12 + 32);
                      v14 = VidSchiCancelQueuedFlips(a1, v2, v4, v13, &v27, 3u);
                      if ( v14 < 0 || (v15 = v27, v27 < v13) )
                      {
                        WdLogSingleEntry3(3LL, v14, v4, v13);
                        WdLogGlobalForLineNumber = 1589;
                      }
                      else
                      {
                        LODWORD(v27) = *(_DWORD *)(v6 + 72);
                        v16 = ((_BYTE)v27 + 1) & 0x3F;
                        v28 = v16;
                        while ( 1 )
                        {
                          if ( (_DWORD)v8 == v16 )
                          {
                            v17 = -1;
                            LODWORD(v8) = -1;
                            v18 = 0xFFFFFFFFLL;
                            goto LABEL_24;
                          }
                          if ( *(_QWORD *)(*(_QWORD *)(1400LL * (unsigned int)v8 + v6 + 1312) + 32LL) == v15 )
                            break;
                          v16 = v28;
                          LODWORD(v8) = ((_BYTE)v8 + 1) & 0x3F;
                        }
                        v17 = v8;
                        v29 = *(unsigned int *)(v6 + 68);
                        if ( (_DWORD)v8 == (_DWORD)v29 )
                          goto LABEL_25;
                        v18 = ((_BYTE)v8 - 1) & 0x3F;
LABEL_24:
                        v29 = v18;
LABEL_25:
                        v19 = v28;
                        do
                        {
                          v20 = 1400LL * v17;
                          VidSchiDecrementPendingFlipsForFlipEntry(
                            a1,
                            *((struct _VIDSCH_PRESENT_INFO **)a1 + v2 + 431),
                            (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v20 + v6 + 120));
                          *(_DWORD *)(v20 + v6 + 1272) |= 0x100000u;
                          *(_DWORD *)(v20 + v6 + 1172) = 2;
                          *(_QWORD *)(v20 + v6 + 1184) = ++*(_QWORD *)(v6 + 88);
                          VidSchiUpdateFlipQueueHistory(7, (__int64)a1, v2, v6, v17);
                          v17 = ((_BYTE)v17 + 1) & 0x3F;
                        }
                        while ( v17 != v19 );
                        v21 = v29;
                        v4 = v26;
                        if ( (byte_14008A204 & 0x20) != 0 )
                          McTemplateK0pqqqqq_EtwWriteTransfer(
                            *((_QWORD *)a1 + v2 + 431),
                            1400 * v27,
                            1400 * v8,
                            *((_QWORD *)a1 + 2),
                            v2,
                            v26,
                            *(_DWORD *)(1400LL * (unsigned int)v8 + v6 + 1168),
                            *(_DWORD *)(1400LL * (unsigned int)v27 + v6 + 1168),
                            *(_DWORD *)(*((_QWORD *)a1 + v2 + 431) + 3248LL));
                        v22 = *(_DWORD *)(v6 + 64);
                        while ( v22 != *(_DWORD *)(v6 + 56) )
                        {
                          ++*(_QWORD *)(v6 + 88);
                          v23 = 1400LL * v22;
                          v22 = ((_BYTE)v22 + 1) & 0x3F;
                          *(_QWORD *)(v23 + v6 + 1184) = *(_QWORD *)(v6 + 88);
                        }
                        VidSchiSetNextFlipEarliestIdealTime(
                          a1,
                          v2,
                          (struct VIDSCH_FLIP_QUEUE *)v6,
                          (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v6 + 1400LL * v21 + 120));
                        *(_DWORD *)(v6 + 72) = v21;
                        *(_DWORD *)(v6 + 64) = v8;
                      }
                    }
                    break;
                  }
                  LODWORD(v8) = ((_BYTE)v8 + 1) & 0x3F;
                }
              }
            }
          }
        }
      }
    }
    ++v4;
  }
}
