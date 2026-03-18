/*
 * XREFs of ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC
 * Callers:
 *     VidSchiProcessNativeFenceSignaledDpc @ 0x140048E74 (VidSchiProcessNativeFenceSignaledDpc.c)
 * Callees:
 *     VidSchiUnwaitMonitoredFences @ 0x14001154C (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDSCH_QUEUE_PACKET@@PEA_N@Z @ 0x140013918 (-VidSchiTryCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_QUEUE@@PEB_KPEAU_VIDS.c)
 *     ?VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z @ 0x1400277A0 (-VidSchiUnwaitNodeHwQueueProgress@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiPropagateCrossAdapterSignal @ 0x14003D1DC (VidSchiPropagateCrossAdapterSignal.c)
 *     VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4 (VidSchiUnwaitNativeFenceWaiters.c)
 *     memset @ 0x14005BBC0 (memset.c)
 */

void __fastcall UnwaitFencesFromNativeFenceSignaledDpc(
        struct HwQueueStagingList *this,
        struct _VIDSCH_GLOBAL *a2,
        struct _VIDSCH_NODE *a3,
        struct _VIDSCH_SYNC_OBJECT *a4)
{
  int v8; // eax
  LARGE_INTEGER v9; // rsi
  unsigned __int64 *v10; // r10
  __int64 v11; // r13
  char v12; // dl
  __int64 v13; // r11
  unsigned __int64 *v14; // r15
  _QWORD *v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  unsigned int *v18; // rax
  _QWORD *v19; // r12
  _QWORD *v20; // rbx
  LARGE_INTEGER *v21; // rbx
  unsigned __int64 *v22; // rcx
  signed __int64 v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25[2]; // [rsp+30h] [rbp-38h] BYREF
  bool v26; // [rsp+88h] [rbp+20h] BYREF

  if ( a4 )
  {
    if ( *((_BYTE *)a4 + 28) )
      VidSchiPropagateCrossAdapterSignal((__int64)a2, a4);
    v8 = (2 * *((_DWORD *)a4 + 13)) >> 1;
    if ( v8 == 3 || v8 == 4 )
    {
      v9 = *(LARGE_INTEGER *)((char *)a4 + 272);
      v10 = v25;
      v11 = 2LL;
      *(_OWORD *)v25 = 0LL;
      v12 = 0;
      v13 = 2LL;
      v14 = (unsigned __int64 *)(v9.QuadPart + 64);
      v15 = (_QWORD *)(v9.QuadPart + 64);
      do
      {
        v16 = *(v15 - 1);
        if ( v16 )
        {
          if ( *(_DWORD *)(v16 + 48) == 6 )
          {
            v17 = *(_QWORD *)(*(unsigned int *)(v16 + 80) + *(_QWORD *)(*(_QWORD *)(v16 + 64) + 192LL));
          }
          else
          {
            v18 = *(unsigned int **)(v16 + 72);
            if ( *(_BYTE *)(v16 + 30) )
              v17 = *(_QWORD *)v18;
            else
              v17 = *v18;
          }
          if ( v17 != *v15 )
            v12 = 1;
          *v10 = v17;
        }
        v15 += 3;
        ++v10;
        --v13;
      }
      while ( v13 );
      if ( v12 )
      {
        v19 = (_QWORD *)(v9.QuadPart + 160);
        _InterlockedExchange((volatile __int32 *)a3 + 126, 1);
        do
        {
          v20 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            break;
          if ( v20 == *(_QWORD **)(v9.QuadPart + 208) )
            break;
          v26 = 0;
          WdLogSingleEntry1(4LL, v20 - 4);
          WdLogGlobalForLineNumber = 1478;
          VidSchiTryCompleteHwQueuePacket(
            this,
            (struct VIDSCH_HW_QUEUE *)v9.QuadPart,
            v25,
            (struct _VIDSCH_QUEUE_PACKET *)(v20 - 4),
            &v26);
        }
        while ( v26 );
        v21 = (LARGE_INTEGER *)(*((_QWORD *)a3 + 23) + 112LL * *((unsigned int *)a3 + 49));
        memset(v21, 0, 0x70uLL);
        *((_DWORD *)a3 + 49) = (*((_DWORD *)a3 + 49) + 1) & (*((_DWORD *)a3 + 48) - 1);
        v21[1] = KeQueryPerformanceCounter(0LL);
        v22 = v25;
        v21->LowPart = 9;
        v21[2] = v9;
        v23 = (char *)v21 - (char *)v25;
        do
        {
          v24 = *v22;
          *(unsigned __int64 *)((char *)v22 + v23 + 24) = *v22;
          ++v22;
          *v14 = v24;
          v14 += 3;
          --v11;
        }
        while ( v11 );
        VidSchiCheckPendingDeviceCommand(*(_QWORD **)(*(_QWORD *)(v9.QuadPart + 40) + 8LL));
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))WdLogSingleEntry2)(3LL, a4, (LARGE_INTEGER)v9.QuadPart);
        WdLogGlobalForLineNumber = 1636;
      }
    }
    VidSchiUnwaitNativeFenceWaiters(this, a4, (__int64)a3, 0LL);
  }
  else
  {
    VidSchiPropagateCrossAdapterSignal((__int64)a2, 0LL);
    VidSchiUnwaitNodeHwQueueProgress(this, a3);
    VidSchiUnwaitMonitoredFences(this, (__int64)a2);
  }
}
