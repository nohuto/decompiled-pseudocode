/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1403BB818
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1403BB7F8 (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140014638 (McTemplateK0_EtwWriteTransfer.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x14007B94C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x14007BBE4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x14007BE04 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x14007C58C (McTemplateK0j_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReportVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F6EDC (-ReportVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x140231A50 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1403BBB4C (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 *     ?ReportProcess@DXGPROCESS@@QEAAXXZ @ 0x1403BBEB8 (-ReportProcess@DXGPROCESS@@QEAAXXZ.c)
 *     ?ReportState@DXGSYNCOBJECTCA@@QEAAXXZ @ 0x1403BBF78 (-ReportState@DXGSYNCOBJECTCA@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1403BBFC8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1403BCBA0 (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 */

void __fastcall DXGGLOBAL::ReportState(DXGGLOBAL *this)
{
  volatile signed __int32 *v2; // rdi
  DXGGLOBAL *i; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  DXGGLOBAL *j; // rbx
  char *v7; // r14
  char *v8; // rdi
  char *v9; // rax
  bool v10; // zf
  char *v11; // rbx
  char *v12; // r14
  char *v13; // rdi
  char *v14; // rax
  char *v15; // rbx
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  _BYTE v25[16]; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v26[16]; // [rsp+38h] [rbp-79h] BYREF
  struct _GUID v27; // [rsp+48h] [rbp-69h] BYREF
  _BYTE v28[144]; // [rsp+58h] [rbp-59h] BYREF

  v2 = (volatile signed __int32 *)((char *)this + 440);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  _InterlockedIncrement(v2 + 4);
  for ( i = (DXGGLOBAL *)*((_QWORD *)this + 53);
        i != (DXGGLOBAL *)((char *)this + 424) && i && i != (DXGGLOBAL *)8;
        i = *(DXGGLOBAL **)i )
  {
    DXGPROCESS::ReportProcess((DXGGLOBAL *)((char *)i - 8));
  }
  _InterlockedDecrement(v2 + 4);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGGLOBAL *)((char *)this + 496));
  for ( j = (DXGGLOBAL *)*((_QWORD *)this + 213); j != (DXGGLOBAL *)((char *)this + 1704); j = *(DXGGLOBAL **)j )
    DXGVIRTUALMACHINE::ReportVirtualMachine((DXGGLOBAL *)((char *)j - 8), v4, v5);
  _InterlockedDecrement((volatile signed __int32 *)this + 128);
  ExReleasePushLockSharedEx((char *)this + 496, 0LL);
  KeLeaveCriticalRegion();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v25, this, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v25);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v27, (DXGGLOBAL *)((char *)this + 544), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v27);
  v7 = (char *)this + 592;
  v8 = (char *)*((_QWORD *)this + 74);
  while ( 1 )
  {
    v9 = 0LL;
    if ( v8 != v7 )
      v9 = v8;
    if ( !v9 )
      break;
    v10 = v8 == v7;
    v11 = v8;
    v8 = *(char **)v8;
    if ( v10 )
      v11 = 0LL;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v11 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    if ( (*((_DWORD *)v11 + 106) & 4) != 0 )
      DXGSYNCOBJECTCA::ReportState((DXGSYNCOBJECTCA *)v11);
    else
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(v11 + 440), (struct DXGSYNCOBJECT *)v11);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v27);
  if ( v25[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v25);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)&v27, (DXGGLOBAL *)((char *)this + 680));
  DXGAUTOADAPTERLISTLOCK::AcquireShared((DXGADAPTERLISTLOCK **)&v27);
  v12 = (char *)this + 808;
  v13 = (char *)*((_QWORD *)this + 101);
  while ( 1 )
  {
LABEL_21:
    v14 = 0LL;
    if ( v13 != v12 )
      v14 = v13;
    if ( !v14 )
      break;
    v10 = v13 == v12;
    v15 = v13;
    v13 = *(char **)v13;
    if ( v10 )
      v15 = 0LL;
    _m_prefetchw(v15 + 24);
    v16 = *((_QWORD *)v15 + 3);
    while ( v16 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)v15 + 3, v16 + 1, v16);
      if ( v17 == v16 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v28, (struct DXGADAPTER *const)v15, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v15);
        if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v28, 2LL) >= 0 )
        {
          v18 = *((_QWORD *)v15 + 396);
          if ( v18 )
            ADAPTER_RENDER::FlushScheduler(v18, 6, 0xFFFFFFFF, 0);
          DXGADAPTER::ReportState((DXGADAPTER *)v15);
          v19 = *((_QWORD *)v15 + 396);
          if ( v19 )
            ADAPTER_RENDER::FlushScheduler(v19, 7, 0xFFFFFFFF, 0);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v28);
        goto LABEL_21;
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)&v27);
  if ( DXGGLOBAL::IsVmConnectedToHost(this) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0_EtwWriteTransfer(v20, &EventVGPUGuestStart, v21);
    Global = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((DXG_GUEST_GLOBAL_VMBUS **)Global + 212), &v27);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v23, &EventVGPUGuestEnd, v24, (__int64)&v27);
  }
}
