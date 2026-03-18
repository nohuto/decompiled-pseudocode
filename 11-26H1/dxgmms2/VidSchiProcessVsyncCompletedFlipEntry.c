/*
 * XREFs of VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4
 * Callers:
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPEAU_KEVENT@@PEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x14001D1F0 (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEAPE.c)
 *     VidSchiExecuteMmIoFlip @ 0x140032CC4 (VidSchiExecuteMmIoFlip.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x140049E60 (VidSchiProcessDpcVSyncCookie.c)
 * Callees:
 *     ?VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x14001DE5C (-VidSchiDecrementPendingFlipsForFlipEntry@@YAIPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x14001E054 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 */

_BYTE *__fastcall VidSchiProcessVsyncCompletedFlipEntry(
        struct HwQueueStagingList *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _BYTE *a6)
{
  int v6; // r11d
  struct HwQueueStagingList *v7; // r12
  struct _VIDSCH_GLOBAL *v8; // r13
  _DWORD *v9; // rdi
  __int64 v11; // rbx
  int v12; // ecx
  unsigned int v13; // esi
  __int64 v14; // r14
  unsigned int v15; // ebp
  __int64 v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // eax
  int v19; // r9d
  unsigned int v20; // r8d
  int v21; // r10d
  int v22; // r15d
  _BYTE *result; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // r14
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v30; // r8
  struct _VIDSCH_GLOBAL *v31; // rdx
  unsigned __int16 v32; // r9
  __int64 v33; // rax
  int v34; // ecx
  unsigned int v35; // eax
  int v36; // edx
  __int64 v37; // [rsp+50h] [rbp-68h]
  struct _VIDSCH_GLOBAL *v38; // [rsp+58h] [rbp-60h]
  __int64 v39; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h]
  int v42; // [rsp+C8h] [rbp+10h]

  v6 = *(_DWORD *)(a2 + 32);
  v7 = a1;
  v8 = *(struct _VIDSCH_GLOBAL **)a2;
  v9 = a4;
  v11 = *(_QWORD *)(a2 + 24);
  v12 = 4672;
  v38 = *(struct _VIDSCH_GLOBAL **)a2;
  v13 = ((_BYTE)v6 + 1) & 0x3F;
  v40 = *(unsigned int *)(a2 + 16);
  v14 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v40 + 3448);
  v15 = *(_DWORD *)(v11 + 68);
  v42 = v6;
  v37 = v14;
  v39 = 0LL;
  if ( v15 != v13 )
  {
    do
    {
      v16 = 1400LL * v15;
      v17 = v16 + v11 + 120;
      v18 = *(_DWORD *)(v17 + 1052);
      if ( v18 && (v18 > 0xC || !_bittest(&v12, v18)) )
      {
        v25 = *(_QWORD *)(a2 + 64);
        *(_QWORD *)(v17 + 1128) = *(_QWORD *)(a2 + 40);
        *(_QWORD *)(v17 + 1144) = *(_QWORD *)(a2 + 56);
        v26 = *(_QWORD *)(v17 + 1320);
        *(_DWORD *)(v17 + 1052) = 11;
        v27 = v26;
        if ( !v26 )
          v27 = *(_QWORD *)(a2 + 48);
        *(_QWORD *)(v17 + 1112) = v27;
        if ( v26 )
          v25 = v26;
        *(_QWORD *)(v17 + 1136) = v25;
        if ( *((_BYTE *)v38 + 67) )
        {
          v28 = *(_QWORD *)(a2 + 48);
          v29 = *(_QWORD *)(v17 + 1104);
          if ( v29 > v28 || v29 > v26 )
          {
            ++g_HwFlipQueueScheduleErrorCount;
            if ( g_BreakOnHwFlipQueueScheduleErrors && !KdRefreshDebuggerNotPresent() )
            {
              DbgPrintEx(
                0x65u,
                0,
                "\n"
                "The GPU Scheduler detected driver completing flip request prior to its TargetFlipTime.\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "TargetFlipTime            = 0x%I64x.\n"
                "LogReportedCompletionTime = 0x%I64x.\n"
                "DpcFrameTime              = 0x%I64x.\n"
                "We broke into the debugger to allow a chance for debugging this issue.\n"
                "Run \"!dxgkdx.flipentry 0x%p 0n%d\" command to display the flip entry.\n"
                "To disable debug breaks on these failures, run \"?? dxgmms2!g_BreakOnHwFlipQueueScheduleErrors=0\" comma"
                "nd,\n"
                "or \"ed 0x%p 0\"\n"
                "\n",
                v29,
                *(_QWORD *)(v11 + v16 + 1440),
                v28,
                (const void *)v11,
                v15,
                (const void *)&g_BreakOnHwFlipQueueScheduleErrors);
              __debugbreak();
            }
          }
          v7 = a1;
          v14 = v37;
        }
        v30 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v16 + v11 + 120);
        v8 = v38;
        *(_QWORD *)(v17 + 1120) = *(_QWORD *)(a2 + 72);
        LODWORD(v39) = VidSchiDecrementPendingFlipsForFlipEntry(v38, (struct _VIDSCH_PRESENT_INFO *)v14, v30);
        HIDWORD(v39) = *(_DWORD *)(v17 + 1048);
        if ( (*(_DWORD *)(v17 + 1152) & 0x10) != 0 )
          v32 = *(_WORD *)(v14 + 44296) & (**(_WORD **)(v17 + 1192) | (**(_DWORD **)(v17 + 1192) >> 10)) & 0x3FF;
        else
          v32 = *(_WORD *)(v14 + 44296);
        VidSchiUnreferenceDisplayingAllocations(v7, v31, (struct _VIDSCH_PRESENT_INFO *)v14, v32);
        VidSchiReferenceDisplayingAllocationsForThisEntry(v7, (__int64)v38, (_WORD *)v14, v17);
        v12 = 4672;
        if ( (*(_DWORD *)(*((_QWORD *)v38 + 2) + 444LL) & 0x200) != 0 && *(_QWORD *)(v11 + 48) == v17 )
        {
          *(_DWORD *)(v11 + 44) = 0;
          *(_QWORD *)(v11 + 48) = 0LL;
        }
      }
      else
      {
        v8 = v38;
      }
      v15 = ((_BYTE)v15 + 1) & 0x3F;
    }
    while ( v15 != v13 );
    v9 = a4;
    v6 = v42;
  }
  v19 = *(_DWORD *)(v11 + 72);
  v20 = v13;
  v21 = *(_DWORD *)(v11 + 68);
  v22 = 4672;
  while ( v13 != (((_BYTE)v19 + 1) & 0x3F) )
  {
    v35 = *(_DWORD *)(1400LL * v13 + v11 + 1172);
    if ( v35 && (v35 > 0xC || !_bittest(&v22, v35)) )
    {
      v20 = v13;
      break;
    }
    v13 = ((_BYTE)v13 + 1) & 0x3F;
  }
  *(_DWORD *)(v11 + 68) = v20;
  if ( v19 == v6 )
    *(_DWORD *)(v11 + 72) = v20;
  if ( !*((_BYTE *)v8 + 67) && v20 != (((unsigned __int8)*(_DWORD *)(v11 + 72) + 1) & 0x3F) )
  {
    do
    {
      v33 = 1400LL * v20;
      v34 = *(_DWORD *)(v33 + v11 + 1172);
      if ( v34 == 5 || v34 == 15 )
      {
        if ( (*(_DWORD *)(v33 + v11 + 1272) & 0x10) != 0 )
          v36 = (**(_DWORD **)(v33 + v11 + 1312) | (**(_DWORD **)(v33 + v11 + 1312) >> 10)) & 0x3FF;
        else
          v36 = (1 << *((_DWORD *)v8 + 40)) - 1;
        *(_DWORD *)(v14 + 3248) |= v36;
      }
      v20 = ((_BYTE)v20 + 1) & 0x3F;
    }
    while ( v20 != (((unsigned __int8)*(_DWORD *)(v11 + 72) + 1) & 0x3F) );
    v9 = a4;
  }
  result = (_BYTE *)VidSchiCompleteFlipEntry(v7, v8, (unsigned int)v40, v11, v21, v6, 0, 0LL);
  *a5 = (_DWORD)result;
  if ( (_DWORD)result )
  {
    v24 = (unsigned int)*v9;
    *(_QWORD *)(a3 + 8 * v24) = v39;
    *v9 = v24 + 1;
    result = a6;
    *a6 = 1;
  }
  return result;
}
