/*
 * XREFs of ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x140426F98
 * Callers:
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x14022D650 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z @ 0x14022D9CC (-VmBusSendCreateProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@PEBU_UNICODE_STRING@@@Z.c)
 *     ?VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022E3EC (-VmBusSendDestroyKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022E4D4 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022E68C (-VmBusSendDestroyProcess@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022E764 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DESC@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x140230370 (-VmBusSendIsFeatureEnabled@DXG_GUEST_GLOBAL_VMBUS@@QEAAJW4_DXGK_FEATURE_ID@@PEAUDXGK_FEATURE_DES.c)
 *     ?VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1402306E8 (-VmBusSendNotifyProcessFreeze@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x1402307C0 (-VmBusSendNotifyProcessThaw@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x140230F54 (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 *     ?VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z @ 0x1402311B0 (-VmBusSendOpmRequest@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IIPEAXK1PEAK@Z.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x140231A50 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ?VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z @ 0x140232260 (-VmBusSendUpdateMonitorMapping@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@I_NI@Z.c)
 *     ?VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z @ 0x14023239C (-VmBusSendVsyncControl@DXG_GUEST_GLOBAL_VMBUS@@QEAAJU_LUID@@IPEAX_N@Z.c)
 *     ?VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I_KHPEAT_LARGE_INTEGER@@PEA_K4@Z @ 0x1402BF28C (-VmBusSendAcquireKeyedMutexSync@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@.c)
 *     ?VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@IU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1402BF53C (-VmBusSendOpenSyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IPEAVDXGSYN.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x140013530 (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     McTemplateK0pxq_EtwWriteTransfer @ 0x140013CE4 (McTemplateK0pxq_EtwWriteTransfer.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x14004FD4C (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?CheckDebugBreak@DXGGLOBAL@@QEAAXXZ @ 0x140056F8C (-CheckDebugBreak@DXGGLOBAL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
        struct _KTHREAD **this,
        unsigned __int8 *a2,
        struct DXGKVMB_COMMAND_BASE *a3,
        unsigned int a4,
        char *a5,
        unsigned int *a6)
{
  char *v6; // r14
  char v7; // r13
  __int64 v11; // r8
  unsigned int v12; // ebx
  __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned int v16; // eax
  signed __int64 v17; // rcx
  bool v18; // zf
  const EVENT_DESCRIPTOR *v19; // rdx
  DXGGLOBAL *Global; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  const EVENT_DESCRIPTOR *v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // [rsp+28h] [rbp-89h]
  __int64 v28; // [rsp+28h] [rbp-89h]
  __int64 v29; // [rsp+30h] [rbp-81h]
  unsigned int v30; // [rsp+50h] [rbp-61h] BYREF
  unsigned int v31; // [rsp+54h] [rbp-5Dh]
  int v32; // [rsp+58h] [rbp-59h] BYREF
  __int64 v33; // [rsp+60h] [rbp-51h]
  char v34; // [rsp+68h] [rbp-49h]
  unsigned __int8 *v35; // [rsp+70h] [rbp-41h]
  void *v36; // [rsp+78h] [rbp-39h]
  _BYTE v37[24]; // [rsp+80h] [rbp-31h] BYREF
  char v38; // [rsp+98h] [rbp-19h] BYREF

  v6 = a5;
  v7 = 0;
  v31 = a4;
  v35 = a2;
  v36 = a5;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2136;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, (__int64)&EventProfilerEnter);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 2136);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v37, this + 2);
  if ( a4 < 0x18 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 15688;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"CommandSize >= sizeof(DXGKVMB_COMMAND_VGPU_TO_HOST)",
      15688LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a6 )
    v12 = *a6;
  else
    v12 = 0;
  LODWORD(v13) = -1073741823;
  v30 = v12;
  if ( !this[1] )
  {
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, (__int64)&EventProfilerExit);
    }
    return 3221226166LL;
  }
  if ( v31 - 24 <= 0x1FFE7 && v12 < 0x20000 )
  {
    if ( (v12 & 7) != 0 )
    {
      v16 = (v12 + 7) & 0xFFFFFFF8;
      v30 = v16;
      if ( v16 < v12 )
      {
        LODWORD(v13) = -1073741811;
        goto LABEL_45;
      }
      v6 = (char *)operator new[](v16, 0x4B677844u, 64LL);
      if ( !v6 )
      {
        LODWORD(v13) = -1073741801;
        goto LABEL_45;
      }
      v7 = 1;
    }
    else if ( !v12 )
    {
      v6 = &v38;
      v30 = 8;
    }
    v17 = _InterlockedIncrement64(&qword_140168CE8);
    v18 = bTracingEnabled == 0;
    *(_QWORD *)a3 = v17;
    if ( !v18 )
    {
      if ( *((_BYTE *)a3 + 12) == 1 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
          goto LABEL_32;
        v19 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalBegin;
      }
      else
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
          goto LABEL_32;
        v19 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandBegin;
      }
      LODWORD(v27) = *((_DWORD *)a3 + 4);
      McTemplateK0pxq_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, v19, v11, this[1], v17, v27);
    }
LABEL_32:
    v13 = (int)((__int64 (__fastcall *)(struct _KTHREAD *, unsigned __int8 *, _QWORD, _QWORD, int, char *, unsigned int *, _QWORD))qword_1401684B0)(
                 this[1],
                 v35,
                 v31,
                 0LL,
                 1,
                 v6,
                 &v30,
                 0LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::CheckDebugBreak(Global);
    if ( !bTracingEnabled )
      goto LABEL_39;
    if ( *((_BYTE *)a3 + 12) == 1 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
        goto LABEL_39;
      v23 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandGlobalEnd;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) == 0 )
        goto LABEL_39;
      v23 = (const EVENT_DESCRIPTOR *)&EventVmBusSendCommandEnd;
    }
    LODWORD(v29) = v13;
    LODWORD(v28) = *((_DWORD *)a3 + 4);
    McTemplateK0pxqt_EtwWriteTransfer(v21, v23, v22, this[1], *(_QWORD *)a3, v28, v29);
LABEL_39:
    if ( (int)v13 >= 0 )
    {
      if ( v7 )
      {
        v24 = v30;
        if ( v12 < v30 )
          v24 = v12;
        memmove(v36, v6, v24);
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 15785;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmbChannelSendSynchronousRequest failed: 0x%I64x",
        v13,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
LABEL_45:
  if ( a6 )
  {
    v25 = 0;
    if ( (int)v13 >= 0 )
      v25 = v30;
    *a6 = v25;
  }
  if ( v7 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v37);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, (__int64)&EventProfilerExit);
  return (unsigned int)v13;
}
