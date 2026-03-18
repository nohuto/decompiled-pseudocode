/*
 * XREFs of ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1400277A0
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1400276A8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x140013918 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall VidSchiUnwaitNodeHwQueueProgress(struct HwQueueStagingList *a1, struct _VIDSCH_NODE *a2)
{
  char *v2; // r15
  char *v4; // rdi
  __int64 *v5; // rsi
  __int64 *v6; // rbp
  unsigned __int64 *v7; // r13
  char v8; // dl
  unsigned __int64 *v9; // r9
  unsigned __int64 *v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  unsigned int *v13; // rax
  unsigned __int64 v14; // r8
  _QWORD *v15; // r12
  _QWORD *v16; // rbx
  LARGE_INTEGER *v17; // rbx
  unsigned __int64 *v18; // rcx
  __int64 v19; // rdx
  signed __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22[9]; // [rsp+30h] [rbp-48h] BYREF
  bool v24; // [rsp+88h] [rbp+10h] BYREF

  v2 = (char *)a2 + 1712;
  v4 = (char *)*((_QWORD *)a2 + 214);
  if ( v4 != (char *)a2 + 1712 )
  {
    do
    {
      v5 = (__int64 *)*((_QWORD *)v4 + 2);
      if ( v5 != (__int64 *)(v4 + 16) )
      {
        do
        {
          v6 = v5 - 1;
          v7 = (unsigned __int64 *)(v5 + 7);
          v8 = 0;
          v9 = v7;
          v10 = v22;
          *(_OWORD *)v22 = 0LL;
          v11 = 2LL;
          do
          {
            v12 = *(v9 - 1);
            if ( v12 )
            {
              if ( *(_DWORD *)(v12 + 48) == 6 )
              {
                v14 = *(_QWORD *)(*(unsigned int *)(v12 + 80) + *(_QWORD *)(*(_QWORD *)(v12 + 64) + 192LL));
              }
              else
              {
                v13 = *(unsigned int **)(v12 + 72);
                if ( *(_BYTE *)(v12 + 30) )
                  v14 = *(_QWORD *)v13;
                else
                  v14 = *v13;
              }
              if ( v14 != *v9 )
                v8 = 1;
              *v10 = v14;
            }
            v9 += 3;
            ++v10;
            --v11;
          }
          while ( v11 );
          if ( v8 )
          {
            v15 = v6 + 20;
            _InterlockedExchange((volatile __int32 *)a2 + 126, 1);
            do
            {
              v16 = (_QWORD *)*v15;
              if ( (_QWORD *)*v15 == v15 )
                break;
              if ( v16 == (_QWORD *)v6[26] )
                break;
              v24 = 0;
              WdLogSingleEntry1(4LL, v16 - 4);
              WdLogGlobalForLineNumber = 1478;
              VidSchiTryCompleteHwQueuePacket(
                a1,
                (struct VIDSCH_HW_QUEUE *)(v5 - 1),
                v22,
                (struct _VIDSCH_QUEUE_PACKET *)(v16 - 4),
                &v24);
            }
            while ( v24 );
            v17 = (LARGE_INTEGER *)(*((_QWORD *)a2 + 23) + 112LL * *((unsigned int *)a2 + 49));
            memset(v17, 0, 0x70uLL);
            *((_DWORD *)a2 + 49) = (*((_DWORD *)a2 + 49) + 1) & (*((_DWORD *)a2 + 48) - 1);
            v17[1] = KeQueryPerformanceCounter(0LL);
            v18 = v22;
            v17->LowPart = 9;
            v17[2].QuadPart = (LONGLONG)v6;
            v19 = 2LL;
            v20 = (char *)v17 - (char *)v22;
            do
            {
              v21 = *v18;
              *(unsigned __int64 *)((char *)v18 + v20 + 24) = *v18;
              ++v18;
              *v7 = v21;
              v7 += 3;
              --v19;
            }
            while ( v19 );
            VidSchiCheckPendingDeviceCommand(*(_QWORD **)(v6[5] + 8));
          }
          v5 = (__int64 *)*v5;
        }
        while ( v5 != (__int64 *)(v4 + 16) );
        v2 = (char *)a2 + 1712;
      }
      v4 = *(char **)v4;
    }
    while ( v4 != v2 );
  }
}
