/*
 * XREFs of ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1402E600C
 * Callers:
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x14003CC28 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ @ 0x140052B98 (-GetCurrentValueStorage@DXGSYNCOBJECT@@QEAAPEAUVIDMM_MONITORED_FENCE_STORAGE@@XZ.c)
 *     ?FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z @ 0x1400678B0 (-FreeHandleUnsafe@DXGPROCESS@@QEAAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1401911A0 (-UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x14022E764 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E5D3C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1402E6138 (-RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGDEVICESYNCOBJECT::~DXGDEVICESYNCOBJECT(DXGDEVICESYNCOBJECT *this)
{
  DXGDEVICE **v1; // rsi
  DXGSYNCOBJECT *v3; // rcx
  __int64 v4; // rbx
  struct VIDMM_MONITORED_FENCE_STORAGE *CurrentValueStorage; // rax
  struct DXGPROCESS *Current; // rbx
  PERESOURCE *Global; // rax
  struct DXGPROCESS *v8; // rbx
  struct DXGGLOBAL *v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (DXGDEVICE **)((char *)this + 16);
  if ( (*((_BYTE *)this + 92) & 2) != 0 )
    DXGDEVICE::RemoveDeviceSyncObjectFromList(*v1, this);
  if ( *((_QWORD *)this + 7) )
  {
    v3 = (DXGSYNCOBJECT *)*((_QWORD *)this + 4);
    if ( (*((_DWORD *)v3 + 107) & 2) != 0 )
    {
      DXGDEVICESYNCOBJECT::UnmapCpuVaForParavirtualization(this);
    }
    else
    {
      v4 = *(_QWORD *)(*((_QWORD *)*v1 + 2) + 760LL);
      CurrentValueStorage = DXGSYNCOBJECT::GetCurrentValueStorage(v3);
      (*(void (__fastcall **)(_QWORD, struct VIDMM_MONITORED_FENCE_STORAGE *))(*(_QWORD *)(v4 + 8) + 912LL))(
        *((_QWORD *)*v1 + 99),
        CurrentValueStorage);
    }
  }
  DXGDEVICESYNCOBJECT::DestroyCoreState(this);
  if ( *((_DWORD *)this + 10) )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v10, Current);
    DXGPROCESS::FreeHandleUnsafe(Current, *((_DWORD *)this + 10));
    *((_DWORD *)this + 10) = 0;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
  }
  if ( *((_QWORD *)this + 4) )
  {
    Global = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(Global, *((struct DXGSYNCOBJECT **)this + 4), 0, 0);
  }
  if ( *((_DWORD *)this + 11) )
  {
    v8 = DXGPROCESS::GetCurrent();
    v9 = DXGGLOBAL::GetGlobal();
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(
      *((DXG_GUEST_GLOBAL_VMBUS **)v9 + 212),
      *((_DWORD *)v8 + 122),
      *((_DWORD *)this + 11));
  }
  *((_QWORD *)this + 2) = 0LL;
}
