/*
 * XREFs of ?VmBusSendAsyncPacket@@YAJPEAUVMBPACKET__@@PEAUDXGKVMB_COMMAND_BASE@@I@Z @ 0x14005CA84
 * Callers:
 *     ?VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@@PEAUDXGKVMB_SINGLEPACKETCONTEXT@@@Z @ 0x14005C894 (-VmBusSendSignalGuestEventSinglePacket@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUDXG_SIGNAL_GUEST_CPU_EVENT@.c)
 *     ?VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I@Z @ 0x1403E4D8C (-VmBusSendWnfNotification@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_SENDWNFNOTIFICATION@@I.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x140013CE4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VmBusSendAsyncPacket(struct VMBPACKET__ *a1, struct DXGKVMB_COMMAND_BASE *a2, unsigned int a3)
{
  __int64 v6; // r8
  signed __int64 v7; // rcx
  bool v8; // zf
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // rcx
  char v13; // al
  const EVENT_DESCRIPTOR *v14; // rdx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  __int64 v16; // [rsp+38h] [rbp-18h]
  char v17; // [rsp+40h] [rbp-10h]

  LODWORD(v15) = -1;
  v16 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v17 = 1;
    LODWORD(v15) = 2219;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v15, 2219);
  if ( a3 - 24 <= 0x1FFE7 )
  {
    v7 = _InterlockedIncrement64(&qword_140168CE8);
    v8 = bTracingEnabled == 0;
    *(_QWORD *)a2 = v7;
    if ( v8 )
    {
LABEL_7:
      v9 = ((__int64 (__fastcall *)(struct VMBPACKET__ *, struct DXGKVMB_COMMAND_BASE *, _QWORD, _QWORD, int))qword_140168520)(
             a1,
             a2,
             a3,
             0LL,
             1);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, (__int64)&EventProfilerExit);
      }
      return v9;
    }
    v13 = *((_BYTE *)a2 + 12);
    if ( v13 == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
        goto LABEL_7;
      v14 = (const EVENT_DESCRIPTOR *)&EventVmBusSendPacketGlobalAsync;
    }
    else if ( v13 == 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
        goto LABEL_7;
      v14 = (const EVENT_DESCRIPTOR *)&EventVmBusSendPacketHostToVmAsync;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
        goto LABEL_7;
      v14 = (const EVENT_DESCRIPTOR *)&EventVmBusSendPacketAsync;
    }
    McTemplateK0pxq_EtwWriteTransfer(
      (REGHANDLE *)&DxgkControlGuid_Context,
      v14,
      v6,
      a1,
      v7,
      *((_DWORD *)a2 + 4),
      v15,
      v16);
    goto LABEL_7;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v12, (__int64)&EventProfilerExit);
  return 3221225473LL;
}
