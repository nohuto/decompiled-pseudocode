/*
 * XREFs of VidSchiUnwaitNativeFenceWaiters @ 0x1400448F4
 * Callers:
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x140006594 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140006C44 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchSubmitWaitFromCpu @ 0x1400119F0 (VidSchSubmitWaitFromCpu.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x140056FFC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1400124DC (VidSchiCheckPendingDeviceCommand.c)
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x140013210 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x14002CECC (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x14002EF10 (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x14003C738 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 */

__int64 __fastcall VidSchiUnwaitNativeFenceWaiters(
        HwQueueStagingList *this,
        struct _VIDSCH_SYNC_OBJECT *a2,
        __int64 a3,
        struct VIDSCH_HW_QUEUE **a4)
{
  HwQueueStagingList *v5; // r9
  unsigned __int64 v6; // rdi
  unsigned int *v7; // rax
  unsigned __int64 v8; // r15
  struct _VIDSCH_SYNC_OBJECT *v9; // r13
  struct _VIDSCH_SYNC_OBJECT *v10; // rax
  struct _VIDSCH_SYNC_OBJECT *v11; // r14
  _QWORD *v12; // rsi
  __int64 result; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // r12
  char *v22; // rcx
  unsigned __int64 v24; // [rsp+68h] [rbp+10h] BYREF
  struct VIDSCH_HW_QUEUE **v25; // [rsp+78h] [rbp+20h]

  v25 = a4;
  v5 = this;
  v6 = -1LL;
  if ( *((_DWORD *)a2 + 12) == 6 )
  {
    v8 = *(_QWORD *)(*((unsigned int *)a2 + 20) + *(_QWORD *)(*((_QWORD *)a2 + 8) + 192LL));
  }
  else
  {
    v7 = (unsigned int *)*((_QWORD *)a2 + 9);
    if ( *((_BYTE *)a2 + 30) )
      v8 = *(_QWORD *)v7;
    else
      v8 = *v7;
  }
  v9 = (struct _VIDSCH_SYNC_OBJECT *)((char *)a2 + 208);
  v10 = a2;
  v11 = (struct _VIDSCH_SYNC_OBJECT *)*((_QWORD *)a2 + 26);
  if ( v11 != (struct _VIDSCH_SYNC_OBJECT *)((char *)a2 + 208) )
  {
    do
    {
      v18 = (__int64)v11 - 312;
      v11 = *(struct _VIDSCH_SYNC_OBJECT **)v11;
      v19 = *(_QWORD *)(v18 + 328);
      if ( !*((_BYTE *)a2 + 29) )
      {
        if ( *((_DWORD *)a2 + 12) == 6 || *((_BYTE *)v10 + 30) )
        {
          if ( v8 < v19 )
          {
LABEL_24:
            if ( v19 < v6 )
              v6 = *(_QWORD *)(v18 + 328);
            goto LABEL_31;
          }
        }
        else if ( (int)v8 - (int)v19 < 0 )
        {
          goto LABEL_24;
        }
      }
      v20 = *(_QWORD *)(v18 + 88);
      if ( v20 )
        v21 = *(_QWORD **)(v20 + 104);
      else
        v21 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v18 + 96) + 40LL) + 8LL);
      if ( (*(_DWORD *)(v18 + 280) & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v5, v18, 0LL);
      VidSchiUnwaitWaitQueuePacket(this, v18, 0LL, v25);
      VidSchiCheckPendingDeviceCommand(v21);
      v5 = this;
LABEL_31:
      v10 = a2;
    }
    while ( v11 != v9 );
  }
  v12 = (_QWORD *)*((_QWORD *)a2 + 32);
  while ( v12 != (_QWORD *)((char *)a2 + 256) )
  {
    v22 = (char *)v12[2];
    v12 = (_QWORD *)*v12;
    v24 = -1LL;
    if ( !(unsigned __int8)UnblockCpuWaiter(v22, a2, &v24) && v24 < v6 )
      v6 = v24;
  }
  if ( v6 == -1LL )
  {
    result = (unsigned int)((2 * *((_DWORD *)a2 + 13)) >> 1);
    if ( (_DWORD)result != 3 && (_DWORD)result != 4 && !*((_BYTE *)a2 + 28) )
    {
      v15 = *((_QWORD *)a2 + 1);
      result = *((_QWORD *)a2 + 16);
      v16 = *((unsigned int *)a2 + 36);
      v17 = *(_QWORD *)(result + 192);
      if ( *(_BYTE *)(v15 + 7082) )
        *(_QWORD *)(v16 + v17) = -1LL;
      else
        return VidSchiUpdateNativeFenceMonitoredValue(v15, *((_QWORD *)a2 + 24), -1LL, v16 + v17);
    }
  }
  else
  {
    result = *((_QWORD *)a2 + 16);
    v14 = *(_QWORD *)(*((unsigned int *)a2 + 36) + *(_QWORD *)(result + 192));
    if ( v6 > v14 )
    {
      result = WdLogSingleEntry3(4LL, v8, v14, v6);
      WdLogGlobalForLineNumber = 27460;
    }
  }
  return result;
}
