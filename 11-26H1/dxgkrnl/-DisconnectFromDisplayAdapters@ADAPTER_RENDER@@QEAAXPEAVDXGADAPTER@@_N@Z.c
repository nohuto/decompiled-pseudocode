/*
 * XREFs of ?DisconnectFromDisplayAdapters@ADAPTER_RENDER@@QEAAXPEAVDXGADAPTER@@_N@Z @ 0x1401A6EA0
 * Callers:
 *     ?DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z @ 0x1401B4454 (-DxgkCheckAndUpdatePairingForNewAdapter@@YAXPEAVDXGADAPTER@@PEAE@Z.c)
 *     DxgkSetIndirectDisplayRenderAdapter @ 0x1401B863C (DxgkSetIndirectDisplayRenderAdapter.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x14004A0F8 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x14005B6A4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1401A9D9C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 */

void __fastcall ADAPTER_RENDER::DisconnectFromDisplayAdapters(ADAPTER_RENDER *this, struct DXGADAPTER *a2, char a3)
{
  unsigned int v3; // esi
  struct _LUID *v7; // rdx
  ADAPTER_DISPLAY *v8; // rax
  unsigned int i; // edi
  PVOID v10; // rcx
  struct _IO_WORKITEM *WorkItem; // rax
  PVOID Context[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-B8h] BYREF

  v3 = -1;
  if ( a2 && !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(*((_QWORD *)a2 + 395) + 152LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5225;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(pDisplayDevice == NULL) || pDisplayDevice->GetDisplayCore()->GetChangePairedAdapterLock()->IsOwner()",
      5225LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((struct _KTHREAD **)this + 4) != KeGetCurrentThread()
    || *((struct _KTHREAD **)this + 7) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5226;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_DeviceCreationLock.IsExclusiveOwner() && m_DeviceCreationLockCdd.IsExclusiveOwner()",
      5226LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, *((struct DXGADAPTER *const *)this + 2), a2);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v13, 1LL) >= 0 )
  {
    ADAPTER_RENDER::StopDisplayDevices(this, 2LL, a2);
    ADAPTER_RENDER::StopDisplayDevices(this, 1LL, a2);
    if ( a2 )
      *(_BYTE *)(*((_QWORD *)a2 + 395) + 288LL) = 1;
  }
  if ( a3 )
  {
    v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 395);
    for ( i = 0; i < *((_DWORD *)v8 + 24); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPartOfDesktop(v8, i) )
        break;
      v8 = (ADAPTER_DISPLAY *)*((_QWORD *)a2 + 395);
    }
    if ( i < *(_DWORD *)(*((_QWORD *)a2 + 395) + 96LL) )
    {
      Context[0] = 0LL;
      DXGADAPTER::IsAdapterSessionized(a2, v7, 0LL, (unsigned __int64 *)Context);
      v10 = Context[0];
      if ( Context[0] == (PVOID)0x200000000LL )
        v10 = (PVOID)*(unsigned int *)(*((_QWORD *)DXGGLOBAL::GetGlobal() + 123) + 144LL);
      if ( v10 != (PVOID)0x100000000LL )
        v3 = (unsigned int)v10;
      WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)a2 + 27));
      if ( WorkItem )
        IoQueueWorkItemEx(WorkItem, DisconnectFromDisplayAdaptersWorkItem, DelayedWorkQueue, (PVOID)v3);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
}
