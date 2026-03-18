/*
 * XREFs of ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x140034B7C
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1400324EC (VidSchiRestartQueuedFlip.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14005976C (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiCancelPendingPassiveFlip@@YA_NPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140059D04 (-VidSchiCancelPendingPassiveFlip@@YA_NPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@@Z.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 */

__int64 __fastcall VidSchiUpdateFlipQueueHistory(int a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  void *v12; // rcx
  __int64 v13; // r12
  __int64 result; // rax
  unsigned int v15; // r11d
  unsigned int v16; // r10d
  bool v17; // zf
  int v18; // eax
  int v19; // r14d
  char v20; // cl
  __int64 v21; // r13
  char v22; // cl
  int v23; // eax
  unsigned int v24; // r15d
  char v25; // cl
  int v26; // eax
  char v27; // cl
  int v28; // eax

  v8 = *(_QWORD *)(a2 + 8LL * a3 + 3448);
  v9 = *(unsigned int *)(v8 + 144);
  v10 = *(_QWORD *)(v8 + 136);
  v11 = 112 * v9;
  *(_DWORD *)(v8 + 144) = (v9 + 1) & (*(_DWORD *)(v8 + 128) - 1);
  v12 = *(void **)(112 * v9 + v10 + 72);
  if ( v12 )
    memset(v12, 0, 8LL * *(unsigned int *)(a2 + 160));
  *(_DWORD *)(v11 + v10) = a1;
  v13 = 1400LL * a5;
  *(_DWORD *)(v11 + v10 + 16) = **(_DWORD **)(v13 + a4 + 1312) & 0x3FF;
  *(_DWORD *)(v11 + v10 + 20) = (**(_DWORD **)(v13 + a4 + 1312) >> 10) & 0x3FF;
  *(_BYTE *)(v11 + v10 + 24) = *(_BYTE *)(a4 + 80);
  *(_DWORD *)(v11 + v10 + 28) = a5;
  *(LARGE_INTEGER *)(v11 + v10 + 8) = KeQueryPerformanceCounter(0LL);
  *(_BYTE *)(v11 + v10 + 36) = (*(_DWORD *)(v13 + a4 + 1272) & 0x20) != 0;
  *(_DWORD *)(v11 + v10 + 40) = *(_DWORD *)(v13 + a4 + 1172);
  *(_DWORD *)(v11 + v10 + 32) = *(_DWORD *)(v13 + a4 + 1176);
  *(_DWORD *)(v11 + v10 + 44) = *(_DWORD *)(v13 + a4 + 1276);
  *(_DWORD *)(v11 + v10 + 48) = *(_DWORD *)(v8 + 3192);
  *(_QWORD *)(v11 + v10 + 56) = *(_QWORD *)(v13 + a4 + 1432);
  *(_QWORD *)(v11 + v10 + 64) = *(_QWORD *)(v13 + a4 + 1440);
  if ( *(_QWORD *)(v11 + v10 + 72) && ((a1 - 1) & 0xFFFFFFFD) == 0 )
  {
    v15 = **(_DWORD **)(v13 + a4 + 1312) & 0x3FF;
    if ( *(_BYTE *)(a2 + 164) )
      v16 = (**(_DWORD **)(v13 + a4 + 1312) >> 10) & 0x3FF;
    else
      v16 = 0;
    v17 = !_BitScanForward((unsigned int *)&v18, v15);
    v19 = 0;
    v20 = -1;
    if ( !v17 )
      v20 = v18;
    v21 = (unsigned int)v20;
    v22 = -1;
    v17 = !_BitScanForward((unsigned int *)&v23, v16);
    if ( !v17 )
      v22 = v23;
    v24 = v22;
    while ( v15 || v16 )
    {
      if ( (unsigned int)v21 >= v24 )
      {
        v27 = -1;
        v16 &= ~(1 << v24);
        v17 = !_BitScanForward((unsigned int *)&v28, v16);
        if ( !v17 )
          v27 = v28;
        v24 = v27;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v11 + v10 + 72) + 8 * v21) = *(_QWORD *)((unsigned int)(8
                                                                                      * v19
                                                                                      * (*(_DWORD *)(*(_QWORD *)(v13 + a4 + 1312) + 8LL)
                                                                                       + 28))
                                                                       + *(_QWORD *)(v13 + a4 + 1312)
                                                                       + 32LL);
        v25 = -1;
        v15 &= ~(1 << v21);
        v17 = !_BitScanForward((unsigned int *)&v26, v15);
        if ( !v17 )
          v25 = v26;
        v21 = (unsigned int)v25;
      }
      ++v19;
    }
  }
  *(_DWORD *)(v11 + v10 + 84) = *(_DWORD *)(v8 + 3252);
  *(_DWORD *)(v11 + v10 + 80) = *(_DWORD *)(v8 + 3248);
  *(_DWORD *)(v11 + v10 + 88) = *(_DWORD *)(a4 + 56);
  *(_DWORD *)(v11 + v10 + 92) = *(_DWORD *)(a4 + 60);
  *(_DWORD *)(v11 + v10 + 96) = *(_DWORD *)(a4 + 64);
  *(_DWORD *)(v11 + v10 + 100) = *(_DWORD *)(a4 + 68);
  *(_DWORD *)(v11 + v10 + 104) = *(_DWORD *)(a4 + 72);
  result = *(unsigned int *)(a4 + 76);
  *(_DWORD *)(v11 + v10 + 108) = result;
  return result;
}
