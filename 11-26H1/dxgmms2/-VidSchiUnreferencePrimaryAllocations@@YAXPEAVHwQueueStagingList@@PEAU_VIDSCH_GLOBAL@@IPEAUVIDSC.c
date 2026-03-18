/*
 * XREFs of ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3PEAI@Z @ 0x140039DCC
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x14000DF40 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140013A80 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x14001642C (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 * Callees:
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x14001DDF0 (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     ?VidMmUnreferencePrimaryAllocation@@YAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3PEAI@Z @ 0x140039F80 (-VidMmUnreferencePrimaryAllocation@@YAXPEAVHwQueueStagingList@@PEAUVIDMM_ALLOC@@_N2_K3PEAI@Z.c)
 *     ?VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N@Z @ 0x14003A0E8 (-VidSchiRetireFlipFenceForCancelledFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDMM_ALLOC@@_KIIPEA_N.c)
 */

void __fastcall VidSchiUnreferencePrimaryAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a4,
        unsigned int a5,
        unsigned int a6,
        bool a7,
        bool a8,
        unsigned int *a9)
{
  unsigned int v9; // r14d
  unsigned int v10; // r12d
  unsigned int v12; // r15d
  unsigned int v13; // edx
  unsigned int v14; // r8d
  bool v15; // zf
  unsigned int v16; // edx
  int v17; // r10d
  int v18; // eax
  char v19; // cl
  unsigned int v20; // r9d
  char v21; // cl
  int v22; // eax
  unsigned int v23; // eax
  int v24; // ecx
  char *v25; // rax
  unsigned __int64 v26; // rcx
  struct VIDMM_ALLOC *v27; // rsi
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdi
  bool v30; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v31[2]; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v32; // [rsp+58h] [rbp-18h]
  unsigned int v33; // [rsp+5Ch] [rbp-14h]
  int v34; // [rsp+60h] [rbp-10h]
  unsigned int v35; // [rsp+64h] [rbp-Ch]
  unsigned int v36; // [rsp+68h] [rbp-8h]

  v9 = a5;
  v10 = 0;
  if ( a5 )
  {
    v12 = a6;
    do
    {
      if ( (v9 & 1) != 0 )
      {
        if ( (v12 & 1) != 0 )
        {
          v13 = *(_DWORD *)a4;
          v14 = *(_DWORD *)a4 & 0x3FF;
          v31[0] = a2;
          v31[1] = a4;
          v15 = *((_BYTE *)a2 + 164) == 0;
          v32 = v14;
          if ( v15 )
            v16 = 0;
          else
            v16 = (v13 >> 10) & 0x3FF;
          v17 = 0;
          v15 = !_BitScanForward((unsigned int *)&v18, v14);
          v19 = -1;
          v33 = v16;
          v34 = 0;
          if ( !v15 )
            v19 = v18;
          v20 = v19;
          v21 = -1;
          v15 = !_BitScanForward((unsigned int *)&v22, v16);
          v35 = v20;
          if ( !v15 )
            v21 = v22;
          v23 = v21;
          v36 = v21;
          while ( v14 || v16 )
          {
            if ( v20 < v23 )
            {
              v24 = *((_DWORD *)a4 + 1);
              v30 = a8;
              v25 = (char *)a4 + v24 * ((8 * *((_DWORD *)a4 + 2) + 231) & 0xFFFFFFF8);
              v26 = (unsigned __int64)(v17 + v10 * v24) << 6;
              v27 = *(struct VIDMM_ALLOC **)&v25[v26 + 56];
              v28 = *(_QWORD *)&v25[v26 + 80];
              v29 = *(_QWORD *)&v25[v26 + 72];
              VidSchiRetireFlipFenceForCancelledFlipEntry(a2, a3, v27, v28, v20, v10, &v30);
              VidMmUnreferencePrimaryAllocation(a1, v27, a7, v30, v29, v28, a9);
            }
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++((unsigned int *)v31);
            v23 = v36;
            v16 = v33;
            v14 = v32;
            v20 = v35;
            v17 = v34;
          }
          v9 = a5;
          v12 = a6;
        }
        ++v10;
      }
      v9 >>= 1;
      v12 >>= 1;
      a5 = v9;
      a6 = v12;
    }
    while ( v9 );
  }
}
