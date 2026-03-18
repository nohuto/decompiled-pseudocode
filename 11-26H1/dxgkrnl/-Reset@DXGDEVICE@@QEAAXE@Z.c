/*
 * XREFs of ?Reset@DXGDEVICE@@QEAAXE@Z @ 0x1401C383C
 * Callers:
 *     ?StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z @ 0x1401A9D9C (-StopDisplayDevices@ADAPTER_RENDER@@QEAAXW4DXGADAPTER_DEVICELISTTYPE@@PEAVDXGADAPTER@@E@Z.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x140416A0C (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140030C90 (-IsCoreResourceExclusiveOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DKMT_DEVICEPAGEFAULT_STATE@@@Z @ 0x14005C164 (-VidSchMarkDeviceAsError@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_DEVICE@@W4_VIDSCH_ERROR_CODE@@PEAU_D3DK.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?Reset@DXGOVERLAY@@QEAAXXZ @ 0x1401F0864 (-Reset@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1401F71A8 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU_D3DKMT_MARKDEVICEASERROR@@@Z @ 0x1402BEF68 (-VmBusSendMarkDeviceAsError@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEBU.c)
 */

void __fastcall DXGDEVICE::Reset(DXGDEVICE *this, char a2)
{
  DXGOVERLAY *v4; // rsi
  DXGOVERLAY *i; // rdi
  DXGOVERLAY *v6; // rax
  DXGOVERLAY *v7; // rcx
  bool v8; // zf
  __int64 v9; // rcx
  const struct _WNF_STATE_NAME *v10; // rdx
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  DXGPROCESS **v13; // rdi
  struct DXGPROCESS *v14; // rdx
  DXG_GUEST_VIRTUALGPU_VMBUS *v15; // rcx
  DXGPROCESS *v16; // rcx
  _BYTE v17[16]; // [rsp+50h] [rbp-28h] BYREF
  int v18; // [rsp+80h] [rbp+8h] BYREF
  _D3DKMT_MARKDEVICEASERROR v19; // [rsp+90h] [rbp+18h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceExclusiveOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1755;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      1755LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 856LL), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
  v4 = (DXGDEVICE *)((char *)this + 512);
  for ( i = (DXGOVERLAY *)*((_QWORD *)this + 64); ; i = *(DXGOVERLAY **)i )
  {
    v6 = 0LL;
    if ( i != v4 )
      v6 = i;
    if ( !v6 )
      break;
    v7 = i;
    if ( i == v4 )
      v7 = 0LL;
    DXGOVERLAY::Reset(v7);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
  v8 = (*((_BYTE *)this + 1917) & 1) == 0;
  v9 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 152) = 2;
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v9 + 736) + 8LL) + 600LL))(*((_QWORD *)this + 100)) )
    {
      *((_DWORD *)this + 152) = 3;
    }
    else
    {
      v12 = 22;
      if ( !a2 )
        v12 = 26;
      VIDSCH_EXPORT::VidSchMarkDeviceAsError(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL), *((_QWORD *)this + 100), v12);
    }
    v13 = (DXGPROCESS **)((char *)this + 40);
  }
  else
  {
    v13 = (DXGPROCESS **)((char *)this + 40);
    v14 = (struct DXGPROCESS *)*((_QWORD *)this + 5);
    v15 = (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(v9 + 16) + 4712LL);
    v19.hDevice = *((_DWORD *)this + 117);
    v19.Reason = 0x80000000;
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMarkDeviceAsError(v15, v14, this, &v19);
  }
  v16 = *v13;
  v18 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v16, v10, &v18, v11) < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 1826;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DXGPROCESS::SendWnfNotification failed during DXGDEVICE::Reset.",
      1826LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
}
