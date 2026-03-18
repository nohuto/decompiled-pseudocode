/*
 * XREFs of ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1401A6A7C
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140197C9C (-Destroy@DXGADAPTER@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1401A609C (-CreateRenderCore@ADAPTER_RENDER@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x14003B9D8 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x14003CB24 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x14003E5E8 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x140070E18 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140214368 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1402E75F4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 *     ?CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x140371EF8 (-CloseVidMmAdapter@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAXPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::Destroy(ADAPTER_RENDER *this)
{
  DXGVIRTUALGPUMANAGER *v2; // rcx
  DXGVIRTUALGPUMANAGER *v3; // rcx
  DXGGLOBAL *Global; // rax
  _QWORD *v5; // r14
  _QWORD *i; // rsi
  __int64 j; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v8; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF
  char v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+51h] [rbp+9h]

  v11 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v10);
  v2 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 234);
  if ( v2 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v2, 0LL);
  v3 = (DXGVIRTUALGPUMANAGER *)*((_QWORD *)this + 233);
  if ( v3 )
    DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(v3, 0LL);
  if ( *((_QWORD *)this + 113) )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 113), 0, 0);
    *((_QWORD *)this + 113) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  v5 = (_QWORD *)((char *)this + 296);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  for ( i = (_QWORD *)*((_QWORD *)this + 37); i != v5; i = (_QWORD *)*i )
    DXGPROCESS_RENDER_ADAPTER_INFO::CloseVidMmAdapter(
      (DXGPROCESS_RENDER_ADAPTER_INFO *)(i - 11),
      (struct DXGPROCESS *)*(i - 3),
      this);
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  if ( *((_QWORD *)this + 96) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 95) + 8LL) + 24LL))();
    *((_QWORD *)this + 96) = 0LL;
  }
  if ( *((_QWORD *)this + 93) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)this + 92) + 8LL) + 40LL))();
    *((_QWORD *)this + 93) = 0LL;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 72, 0LL);
  *((_QWORD *)this + 10) = KeGetCurrentThread();
  while ( (_QWORD *)*v5 != v5 )
    DXGPROCESS::DestroyAdapterInfo(*(DXGPROCESS **)(*v5 - 24LL), (struct DXGPROCESS_RENDER_ADAPTER_INFO *)(*v5 - 88LL));
  *((_QWORD *)this + 10) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
  KeLeaveCriticalRegion();
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)this + 122, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v9);
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 252); j = (unsigned int)(j + 1) )
  {
    v8 = *(DXGPRESENTHISTORYTOKENQUEUE **)(*((_QWORD *)this + 127) + 8 * j);
    if ( v8 )
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v8);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 127));
  *((_DWORD *)this + 252) = 0;
  *((_QWORD *)this + 127) = 0LL;
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v10);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
  DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v10);
}
