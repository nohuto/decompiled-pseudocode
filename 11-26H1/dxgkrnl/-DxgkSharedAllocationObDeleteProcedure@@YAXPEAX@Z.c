/*
 * XREFs of ?DxgkSharedAllocationObDeleteProcedure@@YAXPEAX@Z @ 0x140355BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?RemoveNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140053D48 (-RemoveNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z @ 0x14022E4D4 (-VmBusSendDestroyNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXI@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140355D6C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 */

void __fastcall DxgkSharedAllocationObDeleteProcedure(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v4; // r14
  __int64 v5; // rcx
  PERESOURCE *v6; // rax
  struct DXGGLOBAL *Global; // rax
  int v8; // [rsp+20h] [rbp-79h] BYREF
  __int64 v9; // [rsp+28h] [rbp-71h]
  char v10; // [rsp+30h] [rbp-69h]
  _BYTE v11[88]; // [rsp+40h] [rbp-59h] BYREF
  DXGADAPTER *v12; // [rsp+98h] [rbp-1h]

  v8 = -1;
  v9 = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    v10 = 1;
    v8 = 16000;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, (__int64)&EventProfilerEnter);
  }
  else
  {
    v10 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v8, 16000);
  Flink = a1[1].Flink;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)Flink[5].Flink[1].Flink, 0LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v12) )
    COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
  _InterlockedDecrement((volatile signed __int32 *)&Flink[4]);
  ADAPTER_RENDER::RemoveNtSharedAllocObject((ADAPTER_RENDER *)Flink[5].Flink, a1);
  Blink = a1[1].Blink;
  v4 = a1[2].Flink;
  if ( LODWORD(a1[2].Blink) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroyNtSharedObject(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 212), (int)a1[2].Blink);
    LODWORD(a1[2].Blink) = 0;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)&Flink[4].Flink + 1, 0xFFFFFFFF) == 1 )
    DXGSHAREDRESOURCE::Destroy((DXGSHAREDRESOURCE *)Flink, 0LL, 0);
  a1[1].Flink = 0LL;
  if ( Blink )
  {
    DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)Blink);
    a1[1].Blink = 0LL;
  }
  if ( v4 )
  {
    v6 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(v6, (struct DXGSYNCOBJECT *)v4, 0, 0);
    a1[2].Flink = 0LL;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v8);
  if ( v10 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventProfilerExit);
  }
}
