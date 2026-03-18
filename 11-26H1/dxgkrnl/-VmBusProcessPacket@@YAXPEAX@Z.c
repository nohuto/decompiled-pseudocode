/*
 * XREFs of ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1403B10C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x140013CE4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ @ 0x1403B17AC (-ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV@@QEAAXXZ.c)
 *     ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1403B17E4 (-VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z.c)
 *     ?AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z @ 0x1403B1BF0 (-AcquireVirtualGpuByLuid@DXGVIRTUALMACHINE@@QEAAPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAU_LUID@@@Z.c)
 */

void __fastcall VmBusProcessPacket(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rsi
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int8 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r9
  int v11; // r12d
  __int64 v12; // rax
  unsigned int v13; // eax
  const struct DXG_VMBUS_COMMAND_TABLE near *const *v14; // rdi
  struct _LUID *v15; // rax
  __int64 *v16; // r14
  struct DXGK_VIRTUAL_GPU_PARAV *v17; // rax
  char v18; // si
  unsigned __int8 v19; // al
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rax
  const EVENT_DESCRIPTOR *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rax
  const wchar_t *v27; // r9
  __int64 v28; // rax
  __int64 v29; // [rsp+28h] [rbp-70h]
  __int64 v30; // [rsp+30h] [rbp-68h]
  unsigned int v31; // [rsp+A8h] [rbp+10h]
  unsigned int v32; // [rsp+B0h] [rbp+18h]
  unsigned int v33; // [rsp+B8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 10);
  v2 = (_QWORD *)*((_QWORD *)a1 + 17);
  v4 = 0;
  if ( v1 )
  {
    v23 = *(_QWORD *)(v1 + 104);
    v7 = v1 + 176;
    *((_QWORD *)a1 + 13) = v23;
    *((_DWORD *)a1 + 38) = *(_DWORD *)(v23 + 392);
    v5 = *(_QWORD *)(v1 + 96);
    *((_QWORD *)a1 + 12) = v5;
  }
  else
  {
    v5 = *((_QWORD *)a1 + 12);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 592);
      *((_QWORD *)a1 + 13) = v6;
      v7 = v6 + 160;
      *((_DWORD *)a1 + 38) = *(_DWORD *)(v6 + 392);
    }
    else
    {
      v7 = *((_QWORD *)a1 + 14);
      v5 = 0LL;
    }
  }
  v8 = 0;
  v9 = *v2;
  v10 = 2LL;
  v11 = *((char *)v2 + 12);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( *(_BYTE *)(v7 + 69) )
    goto LABEL_81;
  v12 = *((_QWORD *)a1 + 13);
  if ( v12 && *(_BYTE *)(v12 + 339) )
  {
    if ( (unsigned __int8)v11 > 1u && *(_DWORD *)(v7 + 48) == 1 )
    {
      WdLogSingleEntry0(2LL);
      v26 = 410LL;
      goto LABEL_42;
    }
  }
  else if ( *(_DWORD *)(v7 + 48) != v11 )
  {
    WdLogSingleEntry0(2LL);
    v26 = 417LL;
LABEL_42:
    WdLogGlobalForLineNumber = v26;
    v27 = L"The command is sent to invalid channel";
LABEL_80:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v27, v26, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_81;
  }
  if ( !v5 && v1 )
    *((_QWORD *)a1 + 12) = *(_QWORD *)(v1 + 96);
  _InterlockedIncrement(&g_VgpuNumWorkItemProcessed);
  v13 = *((_DWORD *)a1 + 36);
  if ( (_BYTE)v11 == 1 )
  {
    if ( v13 >= 0x18 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      {
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventVmBusProcessPacketGlobalWorkerBegin,
          v1,
          *((_QWORD *)a1 + 13) + 160LL,
          *v2,
          *((_DWORD *)v2 + 4));
        v10 = 2LL;
      }
      v31 = *((_DWORD *)v2 + 4);
      if ( v31 - 1000 <= 0x16 )
      {
        v14 = &DXG_HOST_GLOBAL_VMBUS::VmBusCommandTableVmToHost + 2 * (int)(v31 - 1000);
        goto LABEL_20;
      }
      WdLogSingleEntry1(2LL);
      v27 = L"Invalid VM to Host command is passed: %I64n";
      WdLogGlobalForLineNumber = 447;
LABEL_79:
      v26 = *((int *)v2 + 4);
      goto LABEL_80;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 437;
    goto LABEL_69;
  }
  if ( (unsigned __int8)v11 > 1u )
  {
    if ( v13 >= 0x18 )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      {
        McTemplateK0pxq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          &EventVmBusProcessPacketHostToVmWorkerBegin,
          v1,
          *((_QWORD *)a1 + 13) + 160LL,
          *v2,
          *((_DWORD *)v2 + 4));
        v10 = 2LL;
      }
      v32 = *((_DWORD *)v2 + 4);
      if ( v32 <= 6 )
      {
        v14 = (const struct DXG_VMBUS_COMMAND_TABLE near *const *)((char *)&DXG_GUEST_GLOBAL_VMBUS::VmBusCommandTableHostToVm
                                                                 + 16 * (int)v32);
        v18 = 0;
        goto LABEL_23;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 530;
      goto LABEL_78;
    }
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 520;
LABEL_69:
    v26 = *((unsigned int *)a1 + 36);
    v27 = L"Invalid packet size: %I64n";
    goto LABEL_80;
  }
  if ( v13 < 0x18 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 457;
    goto LABEL_69;
  }
  v33 = *((_DWORD *)v2 + 4);
  if ( v33 > 0x45 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 463;
LABEL_78:
    v27 = L"Invalid command is passed: %I64n";
    goto LABEL_79;
  }
  v14 = &DXG_HOST_VIRTUALGPU_VMBUS::VmBusCommandTableVgpuToHost + 2 * (int)v33;
  if ( !*((_QWORD *)a1 + 10) )
  {
    v15 = (struct _LUID *)*((_QWORD *)a1 + 15);
    if ( !v15 )
    {
      WdLogSingleEntry0(2LL);
      v26 = 477LL;
      v27 = L"Invalid extended header";
      WdLogGlobalForLineNumber = 477;
      goto LABEL_80;
    }
    v16 = (__int64 *)&v15[1];
    v17 = DXGVIRTUALMACHINE::AcquireVirtualGpuByLuid(*((DXGVIRTUALMACHINE **)a1 + 13), v15 + 1);
    *((_QWORD *)a1 + 10) = v17;
    if ( !v17 )
    {
      WdLogSingleEntry1(2LL);
      v26 = *v16;
      v27 = L"Failed to find virtual GPU by luid: 0x%I64x";
      WdLogGlobalForLineNumber = 483;
      goto LABEL_80;
    }
    v4 = 1;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusProcessPacketWorkerBegin,
      v1,
      *((_QWORD *)a1 + 13) + 160LL,
      *v2,
      *((_DWORD *)v2 + 4));
LABEL_20:
  v18 = 0;
  if ( !*(_BYTE *)(*((_QWORD *)a1 + 13) + 339LL)
    || *((_BYTE *)a1 + 156)
    || (*(_DWORD *)(*((_QWORD *)a1 + 17) + 12LL) & 0x100) != 0 )
  {
LABEL_23:
    if ( *((_DWORD *)a1 + 36) < *((_DWORD *)v14 + 3) )
    {
      WdLogSingleEntry1(2LL);
      v28 = *((unsigned int *)a1 + 36);
      WdLogGlobalForLineNumber = 540;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid packet size: %I64n", v28, 0LL, 0LL, 0LL, 0LL);
      v18 = 1;
    }
    else
    {
      if ( *((_BYTE *)v14 + 8) )
        v19 = VmBusExecuteCommandInProcessContext(a1, *(unsigned __int8 (**)(struct DXGADAPTER_VMBUS_PACKET *))v14);
      else
        v19 = (*(__int64 (__fastcall **)(struct DXGADAPTER_VMBUS_PACKET *, __int64, __int64, __int64))v14)(
                a1,
                v5,
                v1,
                v10);
      v8 = v19;
    }
    if ( v4 )
      DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
    if ( !v18 )
    {
LABEL_30:
      if ( !v8 )
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), 0LL, 0);
      if ( !bTracingEnabled )
        goto LABEL_33;
      if ( (_BYTE)v11 == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
          goto LABEL_33;
        v24 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketGlobalWorkerEnd;
        LODWORD(v30) = v8;
        v25 = v31;
      }
      else if ( (_BYTE)v11 == 2 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
          goto LABEL_33;
        v24 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketHostToVmWorkerEnd;
        LODWORD(v30) = v8;
        v25 = v32;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
        {
LABEL_33:
          Global = DXGGLOBAL::GetGlobal();
          ExFreeToLookasideListEx((PLOOKASIDE_LIST_EX)((char *)Global + 160), a1);
          return;
        }
        v24 = (const EVENT_DESCRIPTOR *)&EventVmBusProcessPacketWorkerEnd;
        LODWORD(v30) = v8;
        v25 = v33;
      }
      LODWORD(v29) = v25;
      McTemplateK0pxqt_EtwWriteTransfer(v20, v24, v21, *((_QWORD *)a1 + 13) + 160LL, v9, v29, v30);
      goto LABEL_33;
    }
LABEL_81:
    if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304898) )
      *(_BYTE *)(v7 + 69) = 1;
    goto LABEL_30;
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800000000LL) != 0 )
  {
    LODWORD(v29) = 0;
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      &EventVmBusSecondaryWorkItem,
      v1,
      v7,
      v9,
      v29);
  }
  *((_BYTE *)a1 + 156) = 1;
  if ( v4 )
    DXGK_VIRTUAL_GPU_PARAV::ReleaseVirtualGpuReference(*((DXGK_VIRTUAL_GPU_PARAV **)a1 + 10));
  *((_QWORD *)a1 + 10) = 0LL;
  *((_QWORD *)a1 + 2) = VmBusProcessPacket;
  *((_QWORD *)a1 + 3) = a1;
  *(_QWORD *)a1 = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)a1, CustomPriorityWorkQueue|MaximumWorkQueue|0x8);
}
