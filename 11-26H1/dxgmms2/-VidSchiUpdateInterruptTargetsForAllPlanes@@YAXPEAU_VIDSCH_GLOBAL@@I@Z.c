/*
 * XREFs of ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001C9E8
 * Callers:
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x14001C404 (-VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x1400496F4 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

void __fastcall VidSchiUpdateInterruptTargetsForAllPlanes(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 i; // r12
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  unsigned int j; // r10d
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edx
  bool v12; // zf
  int v13; // eax
  char v14; // bp
  char v15; // r15
  __int64 v16; // rcx
  unsigned __int64 v17; // r11
  __int64 v18; // r10
  unsigned int k; // r8d
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  char v24; // si
  char v25; // r14
  __int64 v26; // rcx
  unsigned __int64 v27; // r11
  int v28; // eax
  int v29; // eax
  int v30; // esi
  _DWORD *v31; // r14
  int v32; // ebp
  _DWORD *v33; // r15

  v2 = 0LL;
  for ( i = *((_QWORD *)a1 + a2 + 431); (unsigned int)v2 < *((_DWORD *)a1 + 40); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = 304LL * (unsigned int)v2;
    v6 = *(_QWORD *)(v5 + i + 392) + 1LL;
    if ( *(_DWORD *)(v5 + i + 196) )
    {
      v7 = *(_QWORD *)(i + 32);
      if ( v7 )
      {
        for ( j = *(_DWORD *)(v7 + 68); j != (((unsigned __int8)*(_DWORD *)(v7 + 72) + 1) & 0x3F); j = ((_BYTE)j + 1) & 0x3F )
        {
          v9 = 1400LL * j;
          v10 = *(_DWORD *)(v9 + v7 + 1172);
          if ( v10 && (v10 == 15 || v10 == 5) )
          {
            v30 = *(_DWORD *)(v9 + v7 + 1272);
            if ( (v30 & 0x80000) == 0 )
            {
              v31 = *(_DWORD **)(v9 + v7 + 1312);
              v11 = (v30 & 0x10) != 0
                  ? ((unsigned __int16)*v31 | (unsigned __int16)(*v31 >> 10)) & 0x3FF
                  : (1 << *((_DWORD *)a1 + 40)) - 1;
              if ( _bittest((const int *)&v11, v2) )
              {
                v12 = !_BitScanForward((unsigned int *)&v13, v11);
                v14 = -1;
                if ( !v12 )
                  v14 = v13;
                v15 = 0;
                while ( v11 )
                {
                  v16 = (unsigned int)(8 * v15 * (v31[2] + 28));
                  v17 = *(_QWORD *)((char *)v31 + v16 + 32);
                  if ( (v17 || (v30 & 0x1000) != 0) && v14 == (_DWORD)v2 )
                  {
                    if ( v17 < v6 )
                      v6 = *(_QWORD *)((char *)v31 + v16 + 32);
                    goto LABEL_18;
                  }
                  v28 = 1 << v14;
                  v14 = -1;
                  v11 &= ~v28;
                  v12 = !_BitScanForward((unsigned int *)&v28, v11);
                  if ( !v12 )
                    v14 = v28;
                  ++v15;
                }
              }
            }
          }
        }
      }
LABEL_18:
      v18 = *(_QWORD *)(i + 8 * v2 + 40);
      if ( v18 )
      {
        for ( k = *(_DWORD *)(v18 + 68);
              k != (((unsigned __int8)*(_DWORD *)(v18 + 72) + 1) & 0x3F);
              k = ((_BYTE)k + 1) & 0x3F )
        {
          v20 = 1400LL * k;
          v21 = *(_DWORD *)(v20 + v18 + 1172);
          if ( v21 && (v21 == 15 || v21 == 5) )
          {
            v32 = *(_DWORD *)(v20 + v18 + 1272);
            if ( (v32 & 0x80000) == 0 )
            {
              v33 = *(_DWORD **)(v20 + v18 + 1312);
              v22 = (v32 & 0x10) != 0
                  ? ((unsigned __int16)*v33 | (unsigned __int16)(*v33 >> 10)) & 0x3FF
                  : (1 << *((_DWORD *)a1 + 40)) - 1;
              if ( _bittest((const int *)&v22, v2) )
              {
                v12 = !_BitScanForward((unsigned int *)&v23, v22);
                v24 = -1;
                if ( !v12 )
                  v24 = v23;
                v25 = 0;
                while ( v22 )
                {
                  v26 = (unsigned int)(8 * v25 * (v33[2] + 28));
                  v27 = *(_QWORD *)((char *)v33 + v26 + 32);
                  if ( (v27 || (v32 & 0x1000) != 0) && v24 == (_DWORD)v2 )
                  {
                    if ( v27 < v6 )
                      v6 = *(_QWORD *)((char *)v33 + v26 + 32);
                    goto LABEL_33;
                  }
                  v29 = 1 << v24;
                  v24 = -1;
                  v22 &= ~v29;
                  v12 = !_BitScanForward((unsigned int *)&v29, v22);
                  if ( !v12 )
                    v24 = v29;
                  ++v25;
                }
              }
            }
          }
        }
      }
    }
LABEL_33:
    VidSchiSetInterruptTargetPresentId(a1, a2, v2, v6, 0, 0);
  }
}
