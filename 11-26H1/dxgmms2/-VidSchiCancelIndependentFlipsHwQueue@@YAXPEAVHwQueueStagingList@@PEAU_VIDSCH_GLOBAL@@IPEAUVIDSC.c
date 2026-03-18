/*
 * XREFs of ?VidSchiCancelIndependentFlipsHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEA_NPEAIII@Z @ 0x140003020
 * Callers:
 *     ?VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLIP_QUEUE@@_KAEAI444@Z @ 0x140002780 (-VidSchiCancelQueuedIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@IPEAU_VIDSCH_DEVICE@@PEAUVIDSCH_FLI.c)
 *     VidSchExitIndependentFlipInternal @ 0x1400039F8 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14001CCCC (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IPEA_K@Z @ 0x14003EB64 (-VidSchiRecalculateInterruptTargetForFlipQueue@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE@@IP.c)
 *     ?VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z @ 0x140059DDC (-VidSchiCancelQueuedFlips@@YAJPEAU_VIDSCH_GLOBAL@@II_KPEA_KI@Z.c)
 */

void __fastcall VidSchiCancelIndependentFlipsHwQueue(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_QUEUE *a4,
        bool *a5,
        unsigned int *a6,
        char a7,
        unsigned int a8)
{
  __int64 v8; // r12
  unsigned int *v10; // r14
  int v11; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdi
  int v16; // eax
  int v17; // edi
  int v18; // ebp
  unsigned int *v19; // r9
  __int64 v20; // rdi
  int v21; // eax
  unsigned int i; // edx
  int v23; // r8d
  unsigned int v24; // eax
  int v25; // ecx
  bool *v26; // r14
  __int64 v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v29; // [rsp+A8h] [rbp+10h] BYREF
  signed int v30; // [rsp+B0h] [rbp+18h]
  __int64 v31; // [rsp+B8h] [rbp+20h]

  v10 = a6;
  v11 = -1;
  v14 = *a6;
  v15 = 1400 * v14;
  v27 = *((_QWORD *)a2 + a3 + 431);
  v30 = *((_DWORD *)a4 + 21);
  v8 = v30;
  v31 = 304LL * v30;
  v16 = *((_DWORD *)a4 + 350 * v14 + 293);
  if ( v16 != 5 && v16 != 15 || (*(_DWORD *)((_BYTE *)a4 + v15 + 1272) & 0x2000) == 0 )
  {
    v11 = v14;
    goto LABEL_4;
  }
  v20 = *(_QWORD *)((char *)a4 + v15 + 1312);
  v29 = 0LL;
  v21 = VidSchiCancelQueuedFlips(a2, a3, v30, *(_QWORD *)(v20 + 32), &v29, a8);
  if ( v21 >= 0 && v29 >= *(_QWORD *)(v20 + 32) )
  {
    i = *v10;
    if ( v29 != *(_QWORD *)(v20 + 32) )
    {
      for ( i = ((_BYTE)i + 1) & 0x3F; i != (((unsigned __int8)*((_DWORD *)a4 + 18) + 1) & 0x3F); i = ((_BYTE)i + 1) & 0x3F )
      {
        if ( *(_QWORD *)(*((_QWORD *)a4 + 175 * i + 164) + 32LL) == v29 )
          goto LABEL_24;
      }
      goto LABEL_9;
    }
LABEL_24:
    v11 = i;
LABEL_4:
    if ( v11 != -1 )
    {
      v17 = v11;
      v18 = (a7 + 1) & 0x3F;
      if ( v11 != v18 )
      {
        v26 = a5;
        do
        {
          VidSchiCompleteFlipEntry(a1, a2, a3, a4, v17, v17, 12, v26);
          v17 = ((_BYTE)v17 + 1) & 0x3F;
        }
        while ( v17 != v18 );
        LODWORD(v8) = v30;
        v10 = a6;
      }
      v19 = (unsigned int *)(*(_QWORD *)(v27 + v31 + 392) + 1LL);
      a6 = v19;
      if ( *(_DWORD *)(v27 + v31 + 196) )
      {
        VidSchiRecalculateInterruptTargetForFlipQueue(a2, a4, v8, (unsigned __int64 *)&a6);
        v19 = a6;
      }
      VidSchiSetInterruptTargetPresentId(a2, a3, v8, (unsigned __int64)v19, 0, 0);
    }
    goto LABEL_9;
  }
  WdLogSingleEntry3(3LL, v21, v8, *(_QWORD *)(v20 + 32));
  i = *((_DWORD *)a4 + 16);
  v23 = *((_DWORD *)a4 + 14);
  WdLogGlobalForLineNumber = 3192;
  while ( i != v23 )
  {
    v24 = *((_DWORD *)a4 + 350 * i + 293);
    if ( v24 )
    {
      if ( v24 > 0xD )
        goto LABEL_24;
      v25 = 12864;
      if ( !_bittest(&v25, v24) )
        goto LABEL_24;
    }
    i = ((_BYTE)i + 1) & 0x3F;
  }
LABEL_9:
  *v10 = v11;
}
