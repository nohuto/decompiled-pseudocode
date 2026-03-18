/*
 * XREFs of ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140059AC0
 * Callers:
 *     VidSchiRestartQueuedFlip @ 0x1400324EC (VidSchiRestartQueuedFlip.c)
 * Callees:
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x140059DDC (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z.c)
 *     ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x14005A564 (-VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVID.c)
 */

void __fastcall VidSchiCancelHwQueuedFlips(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_DEVICE *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  struct _VIDSCH_GLOBAL *v6; // r15
  __int64 v7; // r14
  unsigned int v8; // r10d
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // edi
  char v13; // bp
  bool v14; // zf
  int v15; // eax
  char v16; // r12
  __int64 v17; // r13
  unsigned __int64 v18; // r9
  bool v19; // cf
  __int64 v20; // r13
  char v21; // cl
  int v22; // eax
  int v23; // eax
  unsigned int v24; // esi
  char v25; // bl
  char v26; // cl
  int v27; // eax
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+98h] [rbp+10h]
  unsigned __int64 v32; // [rsp+A8h] [rbp+20h] BYREF

  v6 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 5);
  v7 = 1400LL * *((unsigned int *)a4 + 17);
  v8 = a3;
  v9 = *(_DWORD *)((char *)a4 + v7 + 1172);
  v30 = *((_QWORD *)v6 + a3 + 431);
  if ( v9 && (v9 == 5 || v9 == 15) )
  {
    v10 = *(_DWORD *)((char *)a4 + v7 + 1272);
    if ( (v10 & 0x2000) != 0 )
    {
      if ( (v10 & 0x10) != 0 )
        v11 = ((unsigned __int16)**(_DWORD **)((char *)a4 + v7 + 1312) | (unsigned __int16)(**(_DWORD **)((char *)a4 + v7 + 1312) >> 10)) & 0x3FF;
      else
        v11 = (1 << *((_DWORD *)v6 + 40)) - 1;
      v12 = 0;
      v13 = -1;
      v14 = !_BitScanForward((unsigned int *)&v15, v11);
      a5 = 0;
      if ( !v14 )
        v13 = v15;
      v16 = 0;
      if ( v11 )
      {
        do
        {
          v17 = *(_QWORD *)((char *)a4 + v7 + 1312);
          v28 = (unsigned int)(8 * v16 * (*(_DWORD *)(v17 + 8) + 28));
          v18 = *(_QWORD *)(v28 + v17 + 32);
          if ( v18 )
          {
            v32 = 0LL;
            a5 = v13;
            VidSchiCancelQueuedFlips(v6, v8, v13, v18, &v32, 0);
            v8 = a3;
            v19 = v32 < *(_QWORD *)(v28 + v17 + 32);
            v20 = v30;
            if ( !v19 && v32 <= *(_QWORD *)(304LL * v13 + v30 + 392) )
              v12 |= 1 << a5;
          }
          else
          {
            v20 = v30;
          }
          v21 = v13;
          a5 = 0;
          v13 = -1;
          v11 &= ~(1 << v21);
          v14 = !_BitScanForward((unsigned int *)&v22, v11);
          if ( !v14 )
            v13 = v22;
          ++v16;
        }
        while ( v11 );
        if ( v12 )
        {
          VidSchiSynchronouslyCancelPendingFlips(a1, v6, v8, *(struct VIDSCH_FLIP_QUEUE **)(v20 + 32), v12);
          v14 = !_BitScanForward((unsigned int *)&v23, v12);
          a5 = 0;
          v24 = v12;
          v25 = -1;
          if ( !v14 )
            v25 = v23;
          do
          {
            VidSchiSynchronouslyCancelPendingFlips(
              a1,
              v6,
              a3,
              *(struct VIDSCH_FLIP_QUEUE **)(v20 + 8LL * v25 + 40),
              v12);
            v26 = v25;
            v25 = -1;
            v24 &= ~(1 << v26);
            v14 = !_BitScanForward((unsigned int *)&v27, v24);
            if ( !v14 )
              v25 = v27;
          }
          while ( v24 );
        }
      }
    }
  }
}
