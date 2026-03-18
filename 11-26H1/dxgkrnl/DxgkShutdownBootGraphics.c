/*
 * XREFs of DxgkShutdownBootGraphics @ 0x14030C080
 * Callers:
 *     ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1401DF380 (-NotifyShutdown@DXGGLOBAL@@QEAAXXZ.c)
 *     ?DxgkCddDestroy@@YAJIIIQEAXE@Z @ 0x14030AB20 (-DxgkCddDestroy@@YAJIIIQEAXE@Z.c)
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x14000F920 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x140017DC0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x140038000 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@@EI@Z @ 0x14005D500 (-VidSchControlVSyncDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@W4_VIDSCH_VSYNC_REASON_DEVICE@.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140290178 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(struct DXGDEVICE *a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  void *v5; // rcx
  void *v6; // rcx
  struct DXGDEVICE *v8; // rbx
  __int64 v9; // rdi
  struct _KTHREAD **Current; // rax
  _BYTE v11[16]; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  char v14; // [rsp+50h] [rbp-10h]
  struct DXGDEVICE *v15; // [rsp+80h] [rbp+20h] BYREF
  char v16; // [rsp+90h] [rbp+30h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1616), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 401) != 4 && *((_DWORD *)DXGGLOBAL::GetGlobal() + 401) )
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
  v5 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 187);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 187) = 0LL;
  }
  v6 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 201);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 201) = 0LL;
  }
  v15 = 0LL;
  if ( a1 )
  {
    v8 = a1;
  }
  else
  {
    if ( !a2 )
      goto LABEL_8;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v6);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, a2, Current, &v15);
    v8 = v15;
    if ( v15 )
      _InterlockedIncrement64((volatile signed __int64 *)v15 + 8);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v16);
  }
  if ( v8 )
  {
    v9 = *((_QWORD *)v8 + 237);
    if ( v9 )
    {
      v13 = *((_QWORD *)v8 + 237);
      v14 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
      if ( *(_DWORD *)(v9 + 200) == 1 && *((_BYTE *)v8 + 1952) )
      {
        VIDSCH_EXPORT::VidSchControlVSyncDevice(
          *(_QWORD *)(*(_QWORD *)(v9 + 3168) + 736LL),
          *((_QWORD *)v8 + 100),
          3LL,
          0,
          0xFFFFFFFD);
        *((_BYTE *)v8 + 1952) = 0;
      }
      DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    }
    if ( !a1 && _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v8 + 2), v8);
  }
LABEL_8:
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 401) = 4;
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v11);
  return 0LL;
}
