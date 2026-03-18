/*
 * XREFs of ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z @ 0x14019FF84 (-Stop@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@EE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1401A7440 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401C3A8C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x14030E4E4 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z @ 0x14030EA3C (-EnableClockCalibration@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x14030EE04 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z @ 0x14030F4A4 (-PurgeSegments@ADAPTER_RENDER@@AEAAXUVIDMM_PURGE_FLAGS@@PEAVDXGPROCESS@@@Z.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x14030FA84 (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 *     ?Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ @ 0x140353308 (-Stop@DXGADAPTERSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x140355DA0 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 */

void __fastcall ADAPTER_RENDER::Stop(DXGSHAREDRESOURCE ***this, char a2, unsigned __int8 a3)
{
  DXGDEVICE *v6; // r14
  DXGDEVICE *i; // rbx
  DXGDEVICE *v8; // rax
  DXGDEVICE *v9; // rcx
  DXGDEVICE *v10; // r14
  DXGDEVICE *j; // rbx
  DXGDEVICE *v12; // rax
  DXGDEVICE *v13; // rcx
  DXGADAPTERSYNCOBJECT *v14; // r14
  DXGADAPTERSYNCOBJECT *k; // rbx
  DXGADAPTERSYNCOBJECT *v16; // rax
  DXGADAPTERSYNCOBJECT *v17; // rcx
  DXGSHAREDRESOURCE **m; // rbx
  DXGGLOBAL *Global; // rax

  ADAPTER_RENDER::EnableClockCalibration((ADAPTER_RENDER *)this, 0);
  *((_BYTE *)this + 1025) = a2;
  if ( !a3 )
  {
    if ( !KeReadStateEvent((PRKEVENT)this[2] + 2) )
    {
      WdLogSingleEntry5(0LL, 275LL, 6LL, this[2], 0LL, 0LL);
      WdLogGlobalForLineNumber = 2409;
    }
    ADAPTER_RENDER::FlushDeferredDestructions((ADAPTER_RENDER *)this);
  }
  v6 = (DXGDEVICE *)(this + 18);
  for ( i = (DXGDEVICE *)this[18]; ; i = *(DXGDEVICE **)i )
  {
    v8 = 0LL;
    if ( i != v6 )
      v8 = i;
    if ( !v8 )
      break;
    v9 = i;
    if ( i == v6 )
      v9 = 0LL;
    DXGDEVICE::Stop(v9, a3);
  }
  v10 = (DXGDEVICE *)(this + 20);
  for ( j = (DXGDEVICE *)this[20]; ; j = *(DXGDEVICE **)j )
  {
    v12 = 0LL;
    if ( j != v10 )
      v12 = j;
    if ( !v12 )
      break;
    v13 = j;
    if ( j == v10 )
      v13 = 0LL;
    DXGDEVICE::Stop(v13, a3);
  }
  if ( !a3 )
  {
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 24));
    v14 = (DXGADAPTERSYNCOBJECT *)(this + 30);
    for ( k = (DXGADAPTERSYNCOBJECT *)this[30]; ; k = *(DXGADAPTERSYNCOBJECT **)k )
    {
      v16 = 0LL;
      if ( k != v14 )
        v16 = k;
      if ( !v16 )
        break;
      v17 = k;
      if ( k == v14 )
        v17 = 0LL;
      DXGADAPTERSYNCOBJECT::Stop(v17);
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 24);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this + 32, 0LL);
  this[33] = (DXGSHAREDRESOURCE **)KeGetCurrentThread();
  for ( m = this[35]; m != (DXGSHAREDRESOURCE **)(this + 35); m = (DXGSHAREDRESOURCE **)*m )
  {
    DXGSHAREDRESOURCE::DestroyCoreAllocations(m[2], 0LL, 0);
    *((_DWORD *)m[2] + 3) |= 0x10u;
    if ( m[4] )
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::DestroySyncObject(Global, m[4], 0, 0);
      m[4] = 0LL;
    }
  }
  this[33] = 0LL;
  ExReleasePushLockExclusiveEx(this + 32, 0LL);
  KeLeaveCriticalRegion();
  if ( !a3 && !*((_BYTE *)this[2] + 209) )
  {
    ADAPTER_RENDER::FlushScheduler(this, 5LL, 0xFFFFFFFFLL);
    ADAPTER_RENDER::SuspendVidMmWorkerThread(this, 1LL, 0LL);
    ADAPTER_RENDER::ResumeVidMmWorkerThread((ADAPTER_RENDER *)this, 0, 1u);
    ADAPTER_RENDER::PurgeSegments(this, 0LL, 0LL);
    ADAPTER_RENDER::FlushScheduler(this, 5LL, 0xFFFFFFFFLL);
  }
}
