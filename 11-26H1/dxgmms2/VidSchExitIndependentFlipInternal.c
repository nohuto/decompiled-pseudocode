/*
 * XREFs of VidSchExitIndependentFlipInternal @ 0x1400039F8
 * Callers:
 *     VidSchiCompletePendingFlipOnPlane @ 0x140003348 (VidSchiCompletePendingFlipOnPlane.c)
 *     VidSchExitIndependentFlip @ 0x1400038E0 (VidSchExitIndependentFlip.c)
 * Callees:
 *     McTemplateK0txqqqtxtx_EtwWriteTransfer @ 0x140002F2C (McTemplateK0txqqqtxtx_EtwWriteTransfer.c)
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140003020 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     VidSchiCancelIndependentFlips @ 0x140003498 (VidSchiCancelIndependentFlips.c)
 *     VidSchiFlushPendingTokenList @ 0x140004A88 (VidSchiFlushPendingTokenList.c)
 */

void __fastcall VidSchExitIndependentFlipInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int8 a6,
        bool *a7,
        _QWORD *a8)
{
  int v8; // r13d
  __int64 v9; // rsi
  int v10; // edx
  __int64 v11; // r11
  _QWORD *v12; // r10
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // rdi
  unsigned int i; // ebp
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  bool v22; // zf
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rbp
  __int64 v26; // r15
  int v27; // r13d
  unsigned int v28; // ebx
  char v29; // bp
  __int64 k; // r14
  unsigned int v31; // r8d
  __int64 v32; // r9
  __int64 v33; // r10
  int v34; // r8d
  struct VIDSCH_FLIP_QUEUE *v35; // r9
  unsigned int v36; // ebx
  __int64 v37; // rbp
  __int64 j; // r15
  __int64 v39; // r9
  _QWORD *v40; // rdx
  struct VIDSCH_FLIP_QUEUE *v41; // r9
  int v42; // [rsp+60h] [rbp-58h]
  unsigned int v43[20]; // [rsp+68h] [rbp-50h] BYREF
  struct HwQueueStagingList *v44; // [rsp+C0h] [rbp+8h]
  _QWORD *v46; // [rsp+D0h] [rbp+18h]

  v46 = (_QWORD *)a3;
  v44 = (struct HwQueueStagingList *)a1;
  v8 = 0;
  v9 = a2;
  v42 = 0;
  v10 = *(_DWORD *)(a2 + 3760);
  v11 = a4;
  v12 = (_QWORD *)a3;
  *a7 = 0;
  if ( v10 >= 0 )
  {
    a3 = *(unsigned int *)a3;
    a1 = *(_QWORD *)(v9 + 3576);
    do
    {
      if ( *(_DWORD *)a1 == (_DWORD)a3 && *(_DWORD *)(a1 + 4) == *((_DWORD *)v12 + 1) )
        break;
      ++v8;
      a1 += 160LL;
    }
    while ( v8 <= v10 );
    v42 = v8;
  }
  v13 = 0LL;
  v14 = 0LL;
  v15 = *(_QWORD *)(v9 + 3576) + 160LL * v8;
  for ( i = *(_DWORD *)(v15 + 16); i; i >>= 1 )
  {
    if ( (i & 1) != 0 )
      break;
    v13 = (unsigned int)(v13 + 1);
  }
  v17 = 3;
  while ( i )
  {
    WdLogSingleEntry4(8LL, *v12, v11, *(unsigned int *)(v15 + 4 * v14 + 20), a6);
    v18 = *(_QWORD *)(v15 + 88);
    v12 = v46;
    v11 = a4;
    v19 = 304LL * *(unsigned int *)(v15 + 4 * v14 + 20);
    v20 = *(_QWORD *)(v9 + 8 * v13 + 3448) + 152LL;
    WdLogGlobalForLineNumber = 13847;
    a3 = v20 + v19;
    a1 = 5LL * *(unsigned int *)(a3 + 216);
    *(_QWORD *)(a3 + 8 * a1 + 88) = MEMORY[0xFFFFF78000000320];
    *(_BYTE *)(a3 + 8 * a1 + 56) = 0;
    *(_BYTE *)(a3 + 8 * a1 + 57) = a6;
    *(_QWORD *)(a3 + 8 * a1 + 60) = *v46;
    *(_QWORD *)(a3 + 8 * a1 + 72) = a4;
    *(_QWORD *)(a3 + 8 * a1 + 80) = v18;
    *(_DWORD *)(a3 + 216) = (*(_DWORD *)(a3 + 216) + 1) & 3;
    while ( 1 )
    {
      i >>= 1;
      if ( !i || (i & 1) != 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
    }
    v14 = (unsigned int)(v14 + 1);
  }
  v21 = *(_QWORD *)(v15 + 88);
  *(_QWORD *)(v15 + 152) = 0LL;
  v22 = (*(_QWORD *)(v9 + 3752))++ == -1LL;
  *a8 = v21;
  if ( v22 )
    *(_QWORD *)(v9 + 3752) = 1LL;
  v23 = *(_DWORD *)(v15 + 112);
  if ( v23 == 2 || v23 == 1 )
  {
    if ( a6 || v23 != 1 )
      v17 = 0;
    v24 = *(_DWORD *)(v15 + 16);
    v25 = 0LL;
    v26 = 0LL;
    *(_DWORD *)(v15 + 112) = v17;
    *(_WORD *)(v15 + 96) = 0;
    *(_BYTE *)(v15 + 98) = 0;
    for ( *(_QWORD *)(v15 + 100) = 0LL; v24; v24 >>= 1 )
    {
      if ( (v24 & 1) != 0 )
        break;
      v25 = (unsigned int)(v25 + 1);
    }
    while ( v24 )
    {
      v35 = *(struct VIDSCH_FLIP_QUEUE **)(*(_QWORD *)(v9 + 8 * v25 + 3448)
                                         + 8LL * *(unsigned int *)(v15 + 4 * v26 + 20)
                                         + 40);
      if ( v35 )
      {
        if ( *(_BYTE *)(v9 + 67) )
        {
          v43[0] = *((_DWORD *)v35 + 17);
          VidSchiCancelIndependentFlipsHwQueue(
            v44,
            (struct _VIDSCH_GLOBAL *)v9,
            v25,
            v35,
            a7,
            v43,
            (*((_DWORD *)v35 + 14) - 1) & 0x3F,
            2u);
        }
        else
        {
          VidSchiCancelIndependentFlips((__int64)v44, v9, (unsigned int)v25, (__int64)v35, (__int64)a7, -1, -1);
        }
      }
      VidSchiFlushPendingTokenList(v44, (struct _VIDSCH_GLOBAL *)v9);
      while ( 1 )
      {
        v24 >>= 1;
        if ( !v24 || (v24 & 1) != 0 )
          break;
        v25 = (unsigned int)(v25 + 1);
      }
      v26 = (unsigned int)(v26 + 1);
    }
  }
  else
  {
    v36 = *(_DWORD *)(v15 + 16);
    v37 = 0LL;
    for ( j = 0LL; v36; v36 >>= 1 )
    {
      if ( (v36 & 1) != 0 )
        break;
      v37 = (unsigned int)(v37 + 1);
    }
    while ( v36 )
    {
      a1 = *(_QWORD *)(v9 + 8 * v37 + 3448);
      v41 = *(struct VIDSCH_FLIP_QUEUE **)(a1 + 8LL * *(unsigned int *)(v15 + 4 * j + 20) + 40);
      if ( v41 )
      {
        if ( *(_BYTE *)(v9 + 67) )
        {
          v43[0] = *((_DWORD *)v41 + 17);
          VidSchiCancelIndependentFlipsHwQueue(
            v44,
            (struct _VIDSCH_GLOBAL *)v9,
            v37,
            v41,
            a7,
            v43,
            (*((_DWORD *)v41 + 14) - 1) & 0x3F,
            2u);
        }
        else
        {
          VidSchiCancelIndependentFlips((__int64)v44, v9, (unsigned int)v37, (__int64)v41, (__int64)a7, -1, -1);
        }
      }
      while ( 1 )
      {
        v36 >>= 1;
        if ( !v36 || (v36 & 1) != 0 )
          break;
        v37 = (unsigned int)(v37 + 1);
      }
      j = (unsigned int)(j + 1);
    }
    *(_DWORD *)(v15 + 112) = 0;
  }
  v22 = bTracingEnabled == 0;
  v27 = v42;
  *a7 = 0;
  if ( !v22 )
  {
    v28 = *(_DWORD *)(v15 + 16);
    v29 = 0;
    for ( k = 0LL; v28; v28 >>= 1 )
    {
      if ( (v28 & 1) != 0 )
        break;
      ++v29;
    }
    while ( v28 )
    {
      if ( (byte_14008A201 & 1) != 0 )
        McTemplateK0txqqqtxtx_EtwWriteTransfer(
          a1,
          *a7,
          a3,
          0,
          *v46,
          v29,
          *(_DWORD *)(v15 + 4 * k + 20),
          a5,
          *a7,
          a4,
          a6,
          *a8);
      while ( 1 )
      {
        v28 >>= 1;
        if ( !v28 || (v28 & 1) != 0 )
          break;
        ++v29;
      }
      k = (unsigned int)(k + 1);
    }
    v9 = a2;
    v27 = v42;
  }
  if ( a6 )
  {
    v31 = *(_DWORD *)(v15 + 16);
    v32 = 0LL;
    v33 = 0LL;
    if ( v31 )
    {
      do
      {
        if ( (v31 & 1) != 0 )
          break;
        v32 = (unsigned int)(v32 + 1);
        v31 >>= 1;
      }
      while ( v31 );
      while ( v31 )
      {
        *(_DWORD *)(304LL * *(unsigned int *)(v15 + 4 * v33 + 20) + *(_QWORD *)(v9 + 8 * v32 + 3448) + 188) = -1;
        while ( 1 )
        {
          v31 >>= 1;
          if ( !v31 || (v31 & 1) != 0 )
            break;
          v32 = (unsigned int)(v32 + 1);
        }
        v33 = (unsigned int)(v33 + 1);
      }
    }
    *(_QWORD *)v15 = 0LL;
    *(_DWORD *)(v15 + 16) = 0;
    if ( v27 == *(_DWORD *)(v9 + 3760) )
    {
      v34 = v27 - 1;
      if ( v27 - 1 >= 0 )
      {
        v39 = v34;
        v40 = (_QWORD *)(*(_QWORD *)(v9 + 3576) + 160LL * v34);
        do
        {
          if ( *v40 )
            break;
          --v34;
          v40 -= 20;
          --v39;
        }
        while ( v39 >= 0 );
      }
      *(_DWORD *)(v9 + 3760) = v34;
    }
  }
}
