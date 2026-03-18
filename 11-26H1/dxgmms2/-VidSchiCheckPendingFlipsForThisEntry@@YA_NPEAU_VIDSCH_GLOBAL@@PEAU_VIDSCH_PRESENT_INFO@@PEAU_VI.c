/*
 * XREFs of ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400341A0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x14000C1D0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchUnwaitFlipQueue @ 0x140012CE0 (VidSchUnwaitFlipQueue.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140014FD0 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140032608 (-VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAU.c)
 *     ?VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14003297C (-VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUV.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400329BC (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDS.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140034908 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     McTemplateK0qqqqqqqqq_EtwWriteTransfer @ 0x140034744 (McTemplateK0qqqqqqqqq_EtwWriteTransfer.c)
 *     ?VidSchiFlipOverwriteEligible@@YA_NPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x140034B54 (-VidSchiFlipOverwriteEligible@@YA_NPEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z.c)
 */

char __fastcall VidSchiCheckPendingFlipsForThisEntry(
        struct _VIDSCH_GLOBAL *a1,
        struct _VIDSCH_PRESENT_INFO *a2,
        struct _VIDSCH_FLIP_QUEUE_ENTRY *a3,
        struct VIDSCH_FLIP_QUEUE *a4)
{
  int v4; // r12d
  struct _VIDSCH_GLOBAL *v5; // r11
  __int64 v6; // rcx
  struct _VIDSCH_PRESENT_INFO *v9; // r10
  unsigned int *v10; // r14
  unsigned int v11; // r8d
  int v12; // ebp
  unsigned int v13; // edx
  int v14; // eax
  char v15; // r15
  int v16; // r9d
  int v17; // edx
  int v18; // edi
  unsigned int v19; // edx
  bool v20; // zf
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // r9d
  int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // r9
  int v29; // r8d
  char v30; // [rsp+30h] [rbp-88h]
  int v31; // [rsp+40h] [rbp-78h]
  int v32; // [rsp+48h] [rbp-70h]
  char v33; // [rsp+50h] [rbp-68h]
  int v34; // [rsp+58h] [rbp-60h]
  struct _VIDSCH_GLOBAL *v35; // [rsp+60h] [rbp-58h] BYREF
  unsigned int *v36; // [rsp+68h] [rbp-50h]
  unsigned int v37; // [rsp+70h] [rbp-48h]
  unsigned int v38; // [rsp+74h] [rbp-44h]
  int v39; // [rsp+78h] [rbp-40h]
  unsigned int v40; // [rsp+7Ch] [rbp-3Ch]
  unsigned int v41; // [rsp+80h] [rbp-38h]
  char v42; // [rsp+C8h] [rbp+10h]

  v4 = *((_DWORD *)a2 + 6);
  v5 = a1;
  v6 = *((_QWORD *)a2 + 15);
  v9 = a2;
  if ( v6 && (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v6 != a3
    || (v6 = *((_QWORD *)v5 + 475)) != 0 && (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v6 != a3 )
  {
    if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      McTemplateK0qqqqqqqqq_EtwWriteTransfer(
        v6,
        (_DWORD)a2,
        (_DWORD)a3,
        v4,
        *((_DWORD *)a4 + 21),
        *((_DWORD *)a3 + 262),
        0,
        *(_DWORD *)(v6 + 1048),
        *((_DWORD *)a2 + 812),
        0,
        0,
        -1,
        v35,
        v36);
    return 1;
  }
  v10 = (unsigned int *)*((_QWORD *)a3 + 149);
  v11 = *((_DWORD *)a3 + 288);
  v12 = v11 & 0x10;
  if ( (v11 & 0x10) != 0 )
  {
    v13 = ((unsigned __int16)*v10 | (unsigned __int16)(*v10 >> 10)) & 0x3FF;
  }
  else
  {
    LODWORD(v6) = *((_DWORD *)v5 + 40);
    v13 = (1 << v6) - 1;
  }
  if ( !*((_BYTE *)v5 + 164) )
  {
LABEL_11:
    v15 = -1;
    if ( (v11 & 0x60000) != 0 )
    {
      LODWORD(v6) = -1;
      if ( (v11 & 0x40000) != 0 )
      {
        v27 = *((_DWORD *)v5 + 12);
        LODWORD(v6) = 0;
        while ( (unsigned int)v6 < v27 )
        {
          v28 = *((_QWORD *)v5 + (unsigned int)v6 + 431);
          if ( v28 && *(_DWORD *)(v28 + 3248) )
          {
            v29 = v11 & 0x20000;
            goto LABEL_71;
          }
          v27 = *((_DWORD *)v5 + 12);
          LODWORD(v6) = v6 + 1;
        }
      }
      else if ( (v11 & 0x20000) != 0 && *((_DWORD *)v9 + 812) )
      {
        v29 = v11 & 0x20000;
LABEL_71:
        if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
        {
          v26 = *((_DWORD *)v9 + 813);
          if ( !v29 )
            v9 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)v5 + (unsigned int)v6 + 431);
          McTemplateK0qqqqqqqqq_EtwWriteTransfer(
            3 - (v29 != 0),
            v13,
            -v29,
            v4,
            *((_DWORD *)a4 + 21),
            *((_DWORD *)a3 + 262),
            3 - (v29 != 0),
            0,
            *((_DWORD *)v9 + 812),
            v26,
            0,
            -1,
            v35,
            v36);
        }
        return 1;
      }
    }
    v16 = *((_DWORD *)v9 + 812);
    v42 = v16;
    if ( (v16 & v13) != 0 )
    {
      if ( *((_BYTE *)v5 + 67) )
      {
        if ( (v11 & 0x20) != 0 && ((v11 & 0x2000) != 0 || VidSchiFlipOverwriteEligible(v9, a3)) && (v11 & 0x100000) == 0 )
        {
          if ( (v11 & 0x1000) != 0 )
          {
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0qqqqqqqqq_EtwWriteTransfer(
                v6,
                v13,
                v11,
                v4,
                *((_DWORD *)a4 + 21),
                *((_DWORD *)a3 + 262),
                5,
                0,
                v16,
                *((_DWORD *)v9 + 813),
                0,
                -1,
                v35,
                v36);
          }
          else if ( *((_DWORD *)a3 + 263) == 14 )
          {
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0qqqqqqqqq_EtwWriteTransfer(
                v6,
                v13,
                v11,
                v4,
                *((_DWORD *)a4 + 21),
                *((_DWORD *)a3 + 262),
                6,
                0,
                v16,
                *((_DWORD *)v9 + 813),
                0,
                -1,
                v35,
                v36);
          }
          else
          {
            v17 = *((_DWORD *)a3 + 289);
            if ( !v17 || v17 == *((_DWORD *)v9 + 20774) )
            {
              v11 = *((_DWORD *)v9 + 798);
              if ( !v11
                || (!v12
                  ? (LODWORD(v6) = *((_DWORD *)v5 + 40), v18 = (1 << v6) - 1)
                  : (v18 = ((unsigned __int16)*v10 | (unsigned __int16)(*v10 >> 10)) & 0x3FF),
                    !_bittest(&v18, *((_DWORD *)v9 + 799)) || v11 == v17) )
              {
LABEL_33:
                v19 = *v10;
                v11 = *v10 & 0x3FF;
                v35 = v5;
                v36 = v10;
                v37 = v11;
                if ( *((_BYTE *)v5 + 164) )
                  v13 = (v19 >> 10) & 0x3FF;
                else
                  v13 = 0;
                v20 = !_BitScanForward((unsigned int *)&v21, v11);
                LOBYTE(v22) = -1;
                v38 = v13;
                v39 = 0;
                if ( !v20 )
                  LOBYTE(v22) = v21;
                v20 = !_BitScanForward((unsigned int *)&v23, v13);
                v22 = (char)v22;
                v40 = (char)v22;
                if ( !v20 )
                  v15 = v23;
                v24 = v15;
                v41 = v15;
                while ( v11 || v13 )
                {
                  if ( v22 < v24 )
                    v24 = v22;
                  v6 = 304LL * v24;
                  if ( *(_DWORD *)((char *)v9 + v6 + 200) >= *((_DWORD *)v5 + 17) )
                  {
                    if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
                      return 1;
                    v34 = v24;
                    v33 = *(_DWORD *)((char *)v9 + v6 + 200);
                    v32 = *((_DWORD *)v9 + 813);
                    v31 = *((_DWORD *)v9 + 812);
                    v30 = 8;
                    goto LABEL_54;
                  }
                  if ( (*((_DWORD *)a3 + 288) & 0x20) == 0 && *(_DWORD *)((char *)v9 + v6 + 204) )
                    return 1;
                  VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)&v35);
                  v22 = v40;
                  v13 = v38;
                  v11 = v37;
                  v24 = v41;
                }
                return 0;
              }
              LOBYTE(v16) = v42;
            }
            else if ( (*v10 & 0x3FF) == 0 || *((_DWORD *)v9 + 798) == v17 )
            {
              goto LABEL_33;
            }
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
              McTemplateK0qqqqqqqqq_EtwWriteTransfer(
                v6,
                v17,
                v11,
                v4,
                *((_DWORD *)a4 + 21),
                *((_DWORD *)a3 + 262),
                7,
                0,
                v16,
                *((_DWORD *)v9 + 813),
                0,
                -1,
                v35,
                v36);
          }
        }
      }
      else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
      {
        v34 = -1;
        v33 = 0;
        v32 = *((_DWORD *)v9 + 813);
        LOBYTE(v31) = v16;
        v30 = 4;
LABEL_54:
        McTemplateK0qqqqqqqqq_EtwWriteTransfer(
          v6,
          v13,
          v11,
          v4,
          *((_DWORD *)a4 + 21),
          *((_DWORD *)a3 + 262),
          v30,
          0,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      return 1;
    }
    return 0;
  }
  v14 = *((_DWORD *)v9 + 813);
  if ( (v14 & v13) == 0 )
  {
    if ( !*((_BYTE *)v5 + 67) && *((_DWORD *)v5 + 42) > 1u && *((_DWORD *)v9 + 1) != 3 && (v11 & 0x180) == 0x80 )
      return 0;
    goto LABEL_11;
  }
  if ( Microsoft_Windows_DxgKrnlEnableBits >= 0 )
    return 1;
  McTemplateK0qqqqqqqqq_EtwWriteTransfer(
    v6,
    v13,
    v11,
    v4,
    *((_DWORD *)a4 + 21),
    *((_DWORD *)a3 + 262),
    1,
    0,
    *((_DWORD *)v9 + 812),
    v14,
    0,
    -1);
  return 1;
}
