/*
 * XREFs of ?VidSchiSubmitNextFlipQueueEntryRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NIPEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x140032608
 * Callers:
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001D494 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     VidSchiRestartQueuedFlip @ 0x1400324EC (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14003297C (-VidSchiIsPendingFlipReadyToBeSubmitted@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAUV.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1400341A0 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     VidSchiVirtualizeFlipInterval @ 0x140034838 (VidSchiVirtualizeFlipInterval.c)
 */

void __fastcall VidSchiSubmitNextFlipQueueEntryRange(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        bool *a3,
        unsigned int a4,
        struct VIDSCH_FLIP_QUEUE *a5)
{
  struct VIDSCH_FLIP_QUEUE *v5; // rbx
  struct HwQueueStagingList *v8; // r13
  __int64 v9; // rsi
  struct _VIDSCH_PRESENT_INFO *v10; // r14
  char *v11; // rbp
  unsigned int v12; // edi
  struct _VIDSCH_PRESENT_INFO *v13; // r13
  char *v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  char i; // di
  unsigned int v20; // edi
  _DWORD *v21; // r14
  int v22; // eax
  int v23; // eax
  unsigned int v24; // ecx
  struct _VIDSCH_PRESENT_INFO *v26; // [rsp+98h] [rbp+10h]
  char v28; // [rsp+A8h] [rbp+20h] BYREF

  v5 = a5;
  v8 = a1;
  v9 = *((unsigned int *)a5 + 16);
  v10 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a4 + 431);
  v26 = v10;
  v11 = (char *)a5 + 1400 * v9 + 120;
  if ( *((_DWORD *)v10 + 809) )
  {
    v12 = ((_BYTE)v9 + 1) & 0x3F;
    if ( v12 != (_DWORD)v9 )
    {
      v13 = (struct _VIDSCH_PRESENT_INFO *)*((_QWORD *)a2 + a4 + 431);
      do
      {
        v14 = (char *)v5 + 1400 * v12;
        v15 = *((_DWORD *)v14 + 293);
        if ( v15 != 2 && v15 != 3 && v15 != 14
          || VidSchiCheckPendingFlipsForThisEntry(a2, v13, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v14 + 120), v5) )
        {
          break;
        }
        if ( v14[1196] )
        {
          LODWORD(v9) = v12;
          v11 = v14 + 120;
        }
        v12 = ((_BYTE)v12 + 1) & 0x3F;
      }
      while ( v12 != *((_DWORD *)v5 + 16) );
      v8 = a1;
      v10 = v26;
    }
    if ( (_DWORD)v9 != *((_DWORD *)v5 + 16)
      || v11[1076] && VidSchiIsPendingFlipReadyToBeSubmitted(a2, v10, v5, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v11) )
    {
      VidSchiRestartQueuedFlip(v8, *((_QWORD *)v5 + 175 * *((unsigned int *)v5 + 16) + 145), a4, v5, v9);
      *((_DWORD *)v11 + 263) = 4;
      v28 = 0;
      VidSchiExecuteMmIoFlip(v8, a2, a4, v5, v9, a3, &v28);
      if ( v28 )
        VidSchiExecuteMmIoFlip(v8, a2, a4, v5, v9, a3, &v28);
    }
    else
    {
      while ( 1 )
      {
        v16 = *((_DWORD *)v11 + 263);
        if ( (v16 == 2 || v16 == 3 || v16 == 14)
          && !VidSchiCheckPendingFlipsForThisEntry(a2, v10, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v11, v5) )
        {
          v17 = *((_DWORD *)v11 + 288);
          if ( (v17 & 0x2000) == 0 )
          {
            if ( (v17 & 0x80u) != 0 )
            {
              for ( i = *((_DWORD *)v5 + 16) + 1; ; i = v20 + 1 )
              {
                v20 = i & 0x3F;
                if ( v20 == *((_DWORD *)v5 + 16) )
                  break;
                v21 = (_DWORD *)((char *)v5 + 1400 * v20);
                v22 = v21[293];
                if ( v22 != 2 && v22 != 14 )
                  break;
                if ( VidSchiCheckPendingFlipsForThisEntry(a2, v26, (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v21 + 30), v5) )
                  break;
                v23 = v21[318];
                v11 = (char *)(v21 + 30);
                LODWORD(v9) = v20;
                if ( (v23 & 0x80u) == 0 )
                {
                  if ( (v23 & 0x1000) != 0 )
                    v21[318] = v23 & 0xFFFFEFFF;
                  break;
                }
              }
              v24 = *((_DWORD *)v5 + 16);
              if ( (_DWORD)v9 != v24 )
              {
                LOBYTE(a5) = 0;
                VidSchiCompleteFlipEntry(v8, (__int64)a2, a4, (__int64)v5, v24, ((_BYTE)v9 - 1) & 0x3F, 6u, &a5);
              }
              v10 = v26;
            }
            VidSchiVirtualizeFlipInterval(v10, v11);
          }
          *((_DWORD *)v11 + 263) = 4;
        }
        if ( *((_DWORD *)v11 + 263) != 4 )
          break;
        v28 = 0;
        v18 = VidSchiExecuteMmIoFlip(v8, a2, a4, v5, v9, a3, &v28);
        if ( v28 )
          v18 = VidSchiExecuteMmIoFlip(v8, a2, a4, v5, v9, a3, &v28);
        if ( v18 )
          break;
        v9 = *((unsigned int *)v5 + 16);
        v11 = (char *)v5 + 1400 * v9 + 120;
      }
    }
  }
}
