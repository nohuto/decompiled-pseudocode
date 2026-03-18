/*
 * XREFs of ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1400051E8 (VidSchiSetFlipDevice.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x14001E3B4 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x14001F524 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x140034EC0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiSignalFlipEvents @ 0x14001F574 (VidSchiSignalFlipEvents.c)
 *     ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x14001FF9C (-VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiProcessFlipPendingContextList @ 0x140020700 (VidSchiProcessFlipPendingContextList.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocations(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_PRESENT_INFO *a3,
        __int16 a4)
{
  int v4; // ebx
  int v5; // r15d
  int v6; // r14d
  struct HwQueueStagingList *v8; // r10
  char v9; // cl
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // r13d
  char v13; // r12
  struct _VIDSCH_SYNC_OBJECT *v14; // rbp
  __int64 v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // rbp
  _QWORD *v22; // rsi
  int updated; // eax
  __int64 *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r8d
  const unsigned __int64 *v29; // rsi
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // r8d
  unsigned __int64 *v33; // [rsp+20h] [rbp-88h]
  struct VIDSCH_HW_QUEUE **v34; // [rsp+28h] [rbp-80h]
  __int16 v35; // [rsp+50h] [rbp-58h]
  struct _VIDSCH_SYNC_OBJECT *v36; // [rsp+60h] [rbp-48h] BYREF
  char v39; // [rsp+C8h] [rbp+20h]

  v4 = 0;
  v39 = 0;
  LOWORD(v5) = 0;
  v35 = 0;
  LOWORD(v6) = a4;
  v8 = a1;
  if ( a4 )
  {
    do
    {
      v9 = -1;
      v10 = !_BitScanForward((unsigned int *)&v11, (unsigned __int16)v6);
      v12 = 0;
      if ( !v10 )
        v9 = v11;
      v13 = v9;
      v14 = (struct _VIDSCH_SYNC_OBJECT *)v9;
      v36 = (struct _VIDSCH_SYNC_OBJECT *)v9;
      if ( *((_WORD *)a3 + 22149) )
      {
        v39 = 1;
        v15 = (__int64)v9 << 6;
        do
        {
          v16 = (v15 + v12) << 6;
          v17 = *(_QWORD *)((char *)a3 + v16 + 3344);
          v18 = *(_QWORD *)(v17 + 32);
          if ( v18 )
          {
            v24 = (__int64 *)((char *)a3 + v16 + 3376);
            if ( *v24 )
            {
              if ( (int)VidSchiSignalSyncObjectsFromCpu(
                          a1,
                          1u,
                          (struct _VIDSCH_SYNC_OBJECT **)(v18 + 8),
                          0,
                          (const unsigned __int64 *)((char *)a3 + v16 + 3376),
                          0LL) < 0 )
              {
                WdLogSingleEntry2(
                  1LL,
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)a3 + v16 + 3344) + 32LL) + 8LL),
                  *v24);
                v27 = *(_QWORD *)((char *)a3 + v16 + 3344);
                WdLogGlobalForLineNumber = 30375;
                DxgkLogInternalTriageEvent(
                  *(_QWORD *)(v27 + 32),
                  0x40000,
                  v28,
                  (unsigned int)L"Failed to signal FlipFrom fence 0x%p value 0x%I64x",
                  *(_QWORD *)(*(_QWORD *)(v27 + 32) + 8LL),
                  *v24,
                  0LL,
                  0LL);
              }
              v25 = *(_QWORD *)(*(_QWORD *)((char *)a3 + v16 + 3344) + 32LL);
              v26 = 2 * (*(unsigned int *)(v25 + 40) + 3LL);
              *(_OWORD *)(v25 + 8 * v26) = 0LL;
              *(_DWORD *)(v25 + 40) = ((unsigned __int8)*(_DWORD *)(v25 + 40) + 1) & 7;
              *(_DWORD *)(v25 + 8 * v26) = 2;
              *(_QWORD *)(v25 + 8 * v26 + 8) = *v24;
            }
          }
          else
          {
            v19 = *(_QWORD *)(v17 + 24);
            if ( v19 )
              _InterlockedDecrement((volatile signed __int32 *)(v19 + 8));
          }
          VidSchiCheckPendingDeviceCommand(*((_QWORD **)a3 + 2));
          *(_QWORD *)((char *)a3 + v16 + 3336) = 0LL;
          ++v12;
          *(_QWORD *)((char *)a3 + v16 + 3344) = 0LL;
          *(_WORD *)((char *)a3 + v16 + 3368) = 0;
          *(_QWORD *)((char *)a3 + v16 + 3360) = 0LL;
        }
        while ( v12 < *((unsigned __int16 *)a3 + 22149) );
        v14 = v36;
        LOWORD(v5) = v35;
        v13 = (char)v36;
        v8 = a1;
      }
      v20 = (_QWORD)v14 << 12;
      if ( *(_QWORD *)((char *)a3 + v20 + 3384) )
      {
        v29 = (const unsigned __int64 *)((char *)a3 + v20 + 3392);
        v36 = *(struct _VIDSCH_SYNC_OBJECT **)((char *)a3 + v20 + 3384);
        if ( (int)VidSchiSignalSyncObjectsFromCpu(v8, 1u, &v36, 0, v29, 0LL) < 0 )
        {
          WdLogSingleEntry2(1LL, *(_QWORD *)((char *)a3 + v20 + 3384), *v29);
          v34 = (struct VIDSCH_HW_QUEUE **)*v29;
          v33 = *(unsigned __int64 **)((char *)a3 + v20 + 3384);
          WdLogGlobalForLineNumber = 9920;
          DxgkLogInternalTriageEvent(
            v31,
            0x40000,
            v32,
            (unsigned int)L"Failed to signal RuntimeFlipAwayFence 0x%p value 0x%I64x",
            (__int64)v33,
            (__int64)v34,
            0LL,
            0LL);
        }
        VidSchiReleaseSyncObjectReference(*(char **)((char *)a3 + v20 + 3384), v30);
        *(_QWORD *)((char *)a3 + v20 + 3384) = 0LL;
        *v29 = 0LL;
      }
      v6 = (unsigned __int16)v6 & ~(1 << v13);
      v8 = a1;
      v5 = (unsigned __int16)v5 | (1 << v13);
      *((_WORD *)a3 + 22148) &= ~(1 << v13);
      v35 = v5;
    }
    while ( (_WORD)v6 );
    if ( v39 )
    {
      v21 = *((_QWORD *)a3 + 2);
      if ( v21 )
      {
        v22 = *(_QWORD **)(v21 + 80);
        while ( v22 != (_QWORD *)(v21 + 80) )
        {
          updated = VidSchiUpdateFlipContextStatus((struct _VIDSCH_CONTEXT *)(v22 - 3));
          v22 = (_QWORD *)*v22;
          v4 |= updated;
        }
        v4 |= VidSchiProcessFlipPendingContextList(a1, *(_QWORD *)(v21 + 40));
      }
      VidSchiSignalFlipEvents((__int64)a3, v4, a4);
      *((_WORD *)a3 + 22150) &= ~(_WORD)v5;
    }
  }
}
