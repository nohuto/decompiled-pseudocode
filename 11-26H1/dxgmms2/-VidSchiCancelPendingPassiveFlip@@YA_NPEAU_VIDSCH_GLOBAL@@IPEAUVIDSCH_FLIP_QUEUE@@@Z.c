/*
 * XREFs of ?VidSchiCancelPendingPassiveFlip@@YA_NPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140059D04
 * Callers:
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 */

char __fastcall VidSchiCancelPendingPassiveFlip(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        struct VIDSCH_FLIP_QUEUE *a3)
{
  char v3; // bl
  __int64 v5; // r11
  int v6; // eax
  __int64 v7; // rsi
  int v8; // r9d
  int v9; // edx

  v3 = 0;
  v5 = *((_QWORD *)a1 + a2 + 431);
  v6 = *(_DWORD *)(v5 + 3252);
  if ( _bittest(&v6, *((_DWORD *)a3 + 21)) )
  {
    v7 = 1400LL * *((unsigned int *)a3 + 16);
    v8 = *(_DWORD *)((char *)a3 + v7 + 1272);
    if ( (v8 & 0x10) != 0 )
      v9 = ((unsigned __int16)**(_DWORD **)((char *)a3 + v7 + 1312) | (unsigned __int16)(**(_DWORD **)((char *)a3 + v7 + 1312) >> 10)) & 0x3FF;
    else
      v9 = (1 << *((_DWORD *)a1 + 40)) - 1;
    if ( (v8 & 0x200000) != 0 )
    {
      return 1;
    }
    else
    {
      *(_DWORD *)((char *)a3 + v7 + 1172) = 2;
      --*(_DWORD *)(*((_QWORD *)a1 + 34) + 816LL);
      *(_DWORD *)(v5 + 3252) &= ~v9;
      VidSchiUpdateFlipQueueHistory(6, (__int64)a1, a2, (__int64)a3, *((_DWORD *)a3 + 16));
    }
  }
  return v3;
}
