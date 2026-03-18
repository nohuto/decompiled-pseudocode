/*
 * XREFs of ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A1DAC
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403700B8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A1ADC (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1401935A8 (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainClientResources@DXGDEVICE@@QEAAXXZ @ 0x140193604 (-DrainClientResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1401C1FDC (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402E6274 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ @ 0x1403A2FA8 (-DestroyAllTrackedWorkloads@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1403A3054 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1403A35A8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1403A379C (OutputDuplProcessDestroyDevice.c)
 *     ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1403A37E8 (-DrainResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?DrainAllocations@DXGDEVICE@@QEAAXXZ @ 0x1403A392C (-DrainAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A39A4 (-DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A62FC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllDeviceState(DXGDEVICE *this, PERESOURCE **a2)
{
  void *v4; // rcx
  struct DXGOVERLAY ****i; // rbx
  void *v6; // rcx
  char v7; // bl
  const char *v8; // rdx
  struct COREDEVICEACCESS *v9; // r8
  struct DXGCONTEXT **m; // rbx
  unsigned int v11; // edx
  DXGADAPTER *v12; // rcx
  struct _ERESOURCE *v13; // rcx
  struct DXGPAGINGQUEUE **n; // rbx
  struct DXGPAGINGQUEUE **j; // rbx
  struct COREDEVICEACCESS *v16; // r8
  struct DXGPAGINGQUEUE **k; // rbx
  _BYTE v18[16]; // [rsp+50h] [rbp-38h] BYREF
  _BYTE v19[32]; // [rsp+60h] [rbp-28h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 829;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      829LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 117), *((_QWORD *)this + 5));
  WdLogGlobalForLineNumber = 835;
  DXGPUSHLOCK::AcquireExclusive((DXGDEVICE *)((char *)this + 432));
  *((_BYTE *)this + 72) = 1;
  *((_QWORD *)this + 55) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 432, 0LL);
  KeLeaveCriticalRegion();
  v4 = (void *)*((_QWORD *)this + 241);
  if ( v4 )
  {
    KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 22);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  for ( i = (struct DXGOVERLAY ****)((char *)this + 512);
        *i != (struct DXGOVERLAY ***)i;
        DXGDEVICE::DestroyOverlay(this, *i) )
  {
    ;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  if ( *((_DWORD *)this + 152) == 4 )
  {
    DXGDEVICE::DrainClientResources((struct _KTHREAD **)this);
    DXGDEVICE::DrainClientAllocations((struct _KTHREAD **)this);
    if ( g_Feature_FenceStorageUsingVidMmAlloc )
    {
      for ( j = (struct DXGPAGINGQUEUE **)((char *)this + 528);
            *j != (struct DXGPAGINGQUEUE *)j;
            DXGDEVICE::DestroyPagingQueue(this, *j, v9) )
      {
        ;
      }
      DXGDEVICE::DestroyAllDeviceSyncObjects(this);
    }
  }
  else
  {
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 237), this);
    v6 = (void *)*((_QWORD *)this + 241);
    if ( v6 )
    {
      KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 22);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    }
    if ( *((_QWORD *)this + 100) )
    {
      if ( !a2 || DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        v7 = 0;
      }
      else
      {
        v7 = 1;
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
      }
      DXGDEVICE::FlushScheduler(this, 1LL, 4294967293LL, 0LL);
      if ( v7 )
        COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, v8);
      if ( *((DXGDEVICE **)this + 105) != (DXGDEVICE *)((char *)this + 840) )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 168LL))(*((_QWORD *)this + 100));
    }
    DXGDEVICE::DrainResources(this);
    DXGDEVICE::DrainAllocations(this);
    if ( g_Feature_FenceStorageUsingVidMmAlloc )
    {
      DXGDEVICE::DestroyAllDeviceSyncObjects(this);
      for ( k = (struct DXGPAGINGQUEUE **)((char *)this + 528);
            *k != (struct DXGPAGINGQUEUE *)k;
            DXGDEVICE::DestroyPagingQueue(this, *k, v16) )
      {
        ;
      }
    }
    DXGDEVICE::DestroyDevice(this, a2);
  }
  for ( m = (struct DXGCONTEXT **)((char *)this + 496);
        *m != (struct DXGCONTEXT *)m;
        DXGDEVICE::DestroyContext(this, *m, 0LL) )
  {
    ;
  }
  if ( *((DXGDEVICE **)this + 105) != (DXGDEVICE *)((char *)this + 840) )
  {
    WdLogSingleEntry5(0LL, 275LL, 43LL, this, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 0LL);
    WdLogGlobalForLineNumber = 1023;
  }
  if ( !g_Feature_FenceStorageUsingVidMmAlloc )
  {
    for ( n = (struct DXGPAGINGQUEUE **)((char *)this + 528);
          *n != (struct DXGPAGINGQUEUE *)n;
          DXGDEVICE::DestroyPagingQueue(this, *n, v9) )
    {
      ;
    }
    DXGDEVICE::DestroyAllDeviceSyncObjects(this);
  }
  DXGDEVICE::DestroyAllTrackedWorkloads(this);
  v11 = *((_DWORD *)this + 117);
  if ( v11 )
  {
    DXGPROCESS::FreeHandleSafe(*((DXGPROCESS **)this + 5), v11);
    *((_DWORD *)this + 117) = 0;
  }
  v12 = (DXGADAPTER *)*((_QWORD *)this + 237);
  if ( v12 )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v12);
    *((_QWORD *)this + 237) = 0LL;
  }
  v13 = (struct _ERESOURCE *)*((_QWORD *)this + 17);
  if ( v13 )
  {
    ExDeleteResourceLite(v13);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
}
