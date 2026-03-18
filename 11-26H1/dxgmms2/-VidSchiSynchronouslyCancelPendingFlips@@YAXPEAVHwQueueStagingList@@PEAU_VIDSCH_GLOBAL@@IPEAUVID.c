/*
 * XREFs of ?VidSchiSynchronouslyCancelPendingFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x14005A564
 * Callers:
 *     ?VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUEUE@@I@Z @ 0x140059AC0 (-VidSchiCancelHwQueuedFlips@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_DEVICE@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiSynchronouslyCancelPendingFlips(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        unsigned int a5)
{
  unsigned int v6; // ebx
  int v8; // esi
  unsigned int v11; // r13d
  __int64 v12; // rcx
  int v13; // eax
  _DWORD *v14; // r11
  unsigned int v15; // edx
  bool v16; // zf
  int v17; // eax
  char v18; // r8
  char i; // r15
  unsigned __int64 v20; // r10
  int v21; // r9d
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // [rsp+40h] [rbp-38h]
  int v25; // [rsp+98h] [rbp+20h] BYREF

  if ( a4 )
  {
    v6 = *((_DWORD *)a4 + 17);
    v8 = ((unsigned __int8)*((_DWORD *)a4 + 18) + 1) & 0x3F;
    v24 = *((_QWORD *)a2 + a3 + 431);
    if ( v6 != v8 )
    {
      v11 = a5;
      do
      {
        v12 = 1400LL * v6;
        v13 = *(_DWORD *)((char *)a4 + v12 + 1172);
        if ( v13 && (v13 == 5 || v13 == 15) )
        {
          v14 = *(_DWORD **)((char *)a4 + v12 + 1312);
          if ( (*(_DWORD *)((_BYTE *)a4 + v12 + 1272) & 0x10) != 0 )
            v15 = ((unsigned __int16)*v14 | (unsigned __int16)(*v14 >> 10)) & 0x3FF;
          else
            v15 = (1 << *((_DWORD *)a2 + 40)) - 1;
          v16 = !_BitScanForward((unsigned int *)&v17, v15);
          v18 = -1;
          if ( !v16 )
            v18 = v17;
          for ( i = 0; ; ++i )
          {
            v25 = 0;
            if ( !v15 )
              break;
            v20 = *(_QWORD *)((char *)v14 + (unsigned int)(8 * i * (v14[2] + 28)) + 32);
            v21 = 1 << v18;
            if ( v20 )
            {
              v22 = v24 + 304LL * v18;
              if ( (v21 & v11) == 0 || v20 < *(_QWORD *)(v22 + 408) || v20 > *(_QWORD *)(v22 + 416) )
                goto LABEL_22;
            }
            v18 = -1;
            v15 &= ~v21;
            v16 = !_BitScanForward((unsigned int *)&v23, v15);
            if ( !v16 )
              v18 = v23;
          }
          LOBYTE(v25) = 0;
          VidSchiCompleteFlipEntry(a1, (__int64)a2, a3, (__int64)a4, v6, v6, 9u, &v25);
        }
LABEL_22:
        v6 = ((_BYTE)v6 + 1) & 0x3F;
      }
      while ( v6 != v8 );
    }
  }
}
