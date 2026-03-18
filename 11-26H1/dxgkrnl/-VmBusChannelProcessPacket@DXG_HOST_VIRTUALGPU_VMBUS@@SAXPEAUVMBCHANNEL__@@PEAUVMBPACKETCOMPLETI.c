/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x1400846E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x140013CE4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  const wchar_t *v14; // r9
  char *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebp
  __int64 v18; // r15
  struct DXGGLOBAL *Global; // rax
  struct _WORK_QUEUE_ITEM *v20; // rax
  struct _WORK_QUEUE_ITEM *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  char *v26; // [rsp+50h] [rbp-38h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v9 = 0;
  v26 = 0LL;
  v10 = ((__int64 (*)(void))qword_140168448)();
  v11 = 0LL;
  v12 = *(_QWORD *)(v10 + 104);
  if ( *(_DWORD *)(v12 + 392) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry0(2LL);
      v13 = 857LL;
      v14 = L"VmBusChannelProcessPacket: Invalid buffer size for extended header";
      WdLogGlobalForLineNumber = 857;
LABEL_18:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v14, v13, 0LL, 0LL, 0LL, 0LL);
      VmBusCompletePacket(a2, 0LL, 0);
      return;
    }
    v11 = *(unsigned int *)a3;
    v26 = a3;
    if ( (unsigned int)v11 >= a4 )
    {
      WdLogSingleEntry0(2LL);
      v13 = 864LL;
      v14 = L"VmBusChannelProcessPacket: Invalid ext header size";
      WdLogGlobalForLineNumber = 864;
      goto LABEL_18;
    }
    a4 -= v11;
  }
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(2LL);
    v13 = 871LL;
    v14 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST";
    WdLogGlobalForLineNumber = 871;
    goto LABEL_18;
  }
  v15 = &a3[(unsigned int)v11];
  if ( *(_BYTE *)(v12 + 339) )
  {
    v16 = *((_DWORD *)v15 + 4);
    if ( v16 != 14 && v16 != 30 && v16 != 36 )
    {
      WdLogSingleEntry0(2LL);
      v13 = 885LL;
      v14 = L"VmBusChannelProcessPacket: Virtual GPU channel is disabled";
      WdLogGlobalForLineNumber = 885;
      goto LABEL_18;
    }
  }
  if ( v15[12] )
  {
    WdLogSingleEntry0(2LL);
    v13 = 890LL;
    v14 = L"VmBusChannelProcessPacket: Invalid channel type";
    WdLogGlobalForLineNumber = 890;
    goto LABEL_18;
  }
  v17 = *((_DWORD *)v15 + 4);
  if ( v17 >= 0x46 )
  {
    WdLogSingleEntry1(2LL);
    v13 = *((int *)v15 + 4);
    v14 = L"Invalid command is passed: %I64n";
    WdLogGlobalForLineNumber = 895;
    goto LABEL_18;
  }
  v18 = *(_QWORD *)v15;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketDpcBegin,
      v11,
      a1,
      v18,
      *((_DWORD *)v15 + 4));
  Global = DXGGLOBAL::GetGlobal();
  v20 = (struct _WORK_QUEUE_ITEM *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
  v21 = v20;
  if ( v20 )
  {
    memset(v20, 0, 0xA0uLL);
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    v21[3].Parameter = v26;
    HIDWORD(v21[4].WorkerRoutine) = a5;
    v21[2].List.Blink = (struct _LIST_ENTRY *)a1;
    LODWORD(v21[4].WorkerRoutine) = a4;
    v21[4].List.Flink = (struct _LIST_ENTRY *)a2;
    v21[4].List.Blink = (struct _LIST_ENTRY *)v15;
    v21[2].WorkerRoutine = (PWORKER_THREAD_ROUTINE)((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_140168448)(a1);
    BYTE4(v21[4].Parameter) = 1;
    v21->WorkerRoutine = (PWORKER_THREAD_ROUTINE)VmBusProcessPacket;
    v21->Parameter = v21;
    v21->List.Flink = 0LL;
    ExQueueWorkItem(v21, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
  }
  else
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 923;
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)L"Failed to allocated a work item", 923LL, 0LL, 0LL, 0LL, 0LL);
    VmBusCompletePacket(a2, 0LL, 0);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LOBYTE(v9) = v21 != 0LL;
    LODWORD(v25) = v9;
    LODWORD(v24) = v17;
    McTemplateK0pxqt_EtwWriteTransfer(v22, &EventVmBusProcessPacketDpcEnd, v23, a1, v18, v24, v25);
  }
}
