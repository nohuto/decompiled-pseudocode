/*
 * XREFs of ?VmBusChannelProcessPacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@PEAXII@Z @ 0x140050EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x140013CE4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ @ 0x1400513E4 (-GetNumWorkItems@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAJXZ.c)
 *     ?QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z @ 0x140051450 (-QueueWorkItem@DXG_DEFERRED_WORK_QUEUE_DPC@@QEAAXPEAUDXG_DEFERRED_QUEUE_WORK_ITEM@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket(
        struct VMBCHANNEL__ *a1,
        struct VMBPACKETCOMPLETION__ *a2,
        char *a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v8; // r8
  __int64 v9; // r13
  char v10; // r12
  int v11; // ecx
  char *v12; // r14
  char v13; // al
  unsigned int v14; // esi
  __int64 v15; // rbp
  struct DXGGLOBAL *Global; // rax
  char *v17; // rax
  char *v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // edx
  const EVENT_DESCRIPTOR *v22; // rdx
  const EVENT_DESCRIPTOR *v23; // rdx
  int v24; // edx
  int v25; // r8d
  __int64 v26; // rcx
  const wchar_t *v27; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  __int64 v31; // rax
  const wchar_t *v32; // r9
  __int64 v33; // [rsp+28h] [rbp-80h]
  __int64 v34; // [rsp+30h] [rbp-78h]
  char *v35; // [rsp+60h] [rbp-48h]
  int v37; // [rsp+C8h] [rbp+20h]

  _InterlockedIncrement(&g_VgpuNumIncomingPackets);
  v37 = 1;
  v9 = ((__int64 (*)(void))qword_140168448)();
  v35 = 0LL;
  v10 = 1;
  v11 = 0;
  if ( *(_DWORD *)(v9 + 392) >= 0x28u )
  {
    if ( a4 < 0x10 )
    {
      WdLogSingleEntry0(2LL);
      v26 = 7229LL;
      WdLogGlobalForLineNumber = 7229;
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) == 0 )
        goto LABEL_33;
      v27 = L"VmBusChannelProcessPacket: Invalid buffer size for extended header";
    }
    else
    {
      v11 = *(_DWORD *)a3;
      v35 = a3;
      if ( *(_DWORD *)a3 < a4 )
      {
        a4 -= v11;
        goto LABEL_2;
      }
      WdLogSingleEntry0(2LL);
      v26 = 7236LL;
      WdLogGlobalForLineNumber = 7236;
      if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) == 0 )
        goto LABEL_33;
      v27 = L"VmBusChannelProcessPacket: Invalid ext header size";
    }
LABEL_40:
    McTemplateK0zqqzxxxxx_EtwWriteTransfer(v26, v24, v25, 0LL, 0, -1, (__int64)v27, v26, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_33;
  }
LABEL_2:
  if ( a4 < 0x10 )
  {
    WdLogSingleEntry0(2LL);
    v26 = 7243LL;
    WdLogGlobalForLineNumber = 7243;
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) == 0 )
      goto LABEL_33;
    v27 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_BASE";
    goto LABEL_40;
  }
  v12 = &a3[v11];
  v13 = v12[12];
  if ( v13 != 1 )
  {
    if ( v13 )
    {
      WdLogSingleEntry0(2LL);
      v31 = 7295LL;
      v32 = L"VmBusChannelProcessPacket: Invalid channel type";
    }
    else
    {
      v37 = 0;
      if ( a4 >= 0x18 )
      {
        v14 = *((_DWORD *)v12 + 4);
        if ( v14 < 0x46 )
        {
          v15 = *(_QWORD *)v12;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
            goto LABEL_8;
          v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcBegin;
          goto LABEL_49;
        }
        WdLogSingleEntry1(2LL);
        v31 = *((int *)v12 + 4);
        v32 = L"Invalid command is passed: %I64n";
        WdLogGlobalForLineNumber = 7282;
LABEL_54:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, v31, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_33;
      }
      WdLogSingleEntry0(2LL);
      v31 = 7276LL;
      v32 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VGPU_TO_HOST";
    }
LABEL_53:
    WdLogGlobalForLineNumber = v31;
    goto LABEL_54;
  }
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(2LL);
    v31 = 7252LL;
    v32 = L"VmBusChannelProcessPacket: Unexpected buffer size less than DXGKVMB_COMMAND_VM_TO_HOST";
    goto LABEL_53;
  }
  v14 = *((_DWORD *)v12 + 4);
  if ( v14 - 1000 > 0x16 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7259;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v29,
        v28,
        v30,
        0LL,
        0,
        -1,
        (__int64)L"Invalid VM to Host command is passed: %I64n",
        *((int *)v12 + 4),
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_33;
  }
  v15 = *(_QWORD *)v12;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    v22 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcBegin;
LABEL_49:
    McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v22, v8, a1, v15, v14);
  }
LABEL_8:
  Global = DXGGLOBAL::GetGlobal();
  v17 = (char *)ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160));
  v18 = v17;
  if ( v17 )
  {
    memset(v17, 0, 0xA0uLL);
    _InterlockedIncrement(&g_VgpuNumWorkItemQueued);
    *((_QWORD *)v18 + 16) = a2;
    *((_QWORD *)v18 + 15) = v35;
    *((_DWORD *)v18 + 37) = a5;
    *((_QWORD *)v18 + 9) = a1;
    *((_DWORD *)v18 + 36) = a4;
    *((_QWORD *)v18 + 17) = v12;
    *((_QWORD *)v18 + 12) = *(_QWORD *)(v9 + 56);
    *((_QWORD *)v18 + 6) = VmBusProcessPacket;
    *((_QWORD *)v18 + 7) = v18;
    if ( *(_BYTE *)(v9 + 339)
      && ((unsigned int)DXG_DEFERRED_WORK_QUEUE_DPC::GetNumWorkItems((DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 408))
       || (*((_DWORD *)v12 + 3) & 0x100) != 0) )
    {
      DXG_DEFERRED_WORK_QUEUE_DPC::QueueWorkItem(
        (DXG_DEFERRED_WORK_QUEUE_DPC *)(v9 + 408),
        (struct DXG_DEFERRED_QUEUE_WORK_ITEM *)(v18 + 32));
    }
    else
    {
      v18[156] = 1;
      *((_QWORD *)v18 + 2) = VmBusProcessPacket;
      *((_QWORD *)v18 + 3) = v18;
      *(_QWORD *)v18 = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v18, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
    }
    v10 = 0;
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v19 = 7346LL;
    WdLogGlobalForLineNumber = 7346;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        7346,
        v21,
        v20,
        0LL,
        1,
        -1,
        (__int64)L"Failed to allocated a work item",
        7346LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  if ( v37 == 1 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
      goto LABEL_16;
    v23 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalDpcEnd;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
      goto LABEL_16;
    v23 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketDpcEnd;
  }
  LODWORD(v34) = v18 != 0LL;
  LODWORD(v33) = v14;
  McTemplateK0pxqt_EtwWriteTransfer(v19, v23, v20, a1, v15, v33, v34);
LABEL_16:
  if ( v10 )
LABEL_33:
    VmBusCompletePacket(a2, 0LL, 0);
}
