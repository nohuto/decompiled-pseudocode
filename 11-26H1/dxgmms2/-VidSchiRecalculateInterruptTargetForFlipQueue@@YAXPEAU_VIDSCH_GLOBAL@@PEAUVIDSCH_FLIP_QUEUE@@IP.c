/*
 * XREFs of ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x14003EB64
 * Callers:
 *     ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140003020 (-VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiRecalculateInterruptTargetForFlipQueue(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  unsigned int v5; // r11d
  int v6; // ebx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // edx
  bool v13; // zf
  int v14; // eax
  char v15; // si
  char v16; // bp
  unsigned __int64 v17; // r8
  int v18; // eax
  int v19; // r9d
  _DWORD *v20; // r14

  if ( a2 )
  {
    v5 = *((_DWORD *)a2 + 17);
    v6 = ((unsigned __int8)*((_DWORD *)a2 + 18) + 1) & 0x3F;
    while ( v5 != v6 )
    {
      v10 = 1400LL * v5;
      v11 = *(_DWORD *)((char *)a2 + v10 + 1172);
      if ( v11 && (v11 == 15 || v11 == 5) )
      {
        v19 = *(_DWORD *)((char *)a2 + v10 + 1272);
        if ( (v19 & 0x80000) == 0 )
        {
          v20 = *(_DWORD **)((char *)a2 + v10 + 1312);
          v12 = (v19 & 0x10) != 0
              ? ((unsigned __int16)*v20 | (unsigned __int16)(*v20 >> 10)) & 0x3FF
              : (1 << *((_DWORD *)a1 + 40)) - 1;
          if ( _bittest((const int *)&v12, a3) )
          {
            v13 = !_BitScanForward((unsigned int *)&v14, v12);
            v15 = -1;
            if ( !v13 )
              v15 = v14;
            v16 = 0;
            while ( v12 )
            {
              v17 = *(_QWORD *)((char *)v20 + (unsigned int)(8 * v16 * (v20[2] + 28)) + 32);
              if ( (v17 || (v19 & 0x1000) != 0) && v15 == a3 )
              {
                if ( v17 < *a4 )
                  *a4 = v17;
                return;
              }
              v18 = 1 << v15;
              v15 = -1;
              v12 &= ~v18;
              v13 = !_BitScanForward((unsigned int *)&v18, v12);
              if ( !v13 )
                v15 = v18;
              ++v16;
            }
          }
        }
      }
      v5 = ((_BYTE)v5 + 1) & 0x3F;
    }
  }
}
