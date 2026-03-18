/*
 * XREFs of ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A1ADC
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14036E800 (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 *     ?DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403A19D8 (-DestroyDeviceNoCoreAccess@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ??_GDXGDEVICE@@QEAAPEAXI@Z @ 0x14003CBD8 (--_GDXGDEVICE@@QEAAPEAXI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x14003CE00 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x140214368 (-DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A1DAC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyDevice(DXGADAPTER **this, struct DXGDEVICE *a2, struct COREDEVICEACCESS *a3)
{
  __int64 v6; // rax
  const wchar_t *v7; // r9
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  struct DXGPROCESS_RENDER_ADAPTER_INFO *v9; // rsi
  ADAPTER_DISPLAY *v10; // rcx
  __int64 *v11; // rdx
  __int64 *v12; // rcx
  __int64 **v13; // rax
  struct DXGDEVICE *v14; // rdx
  struct DXGDEVICE **v15; // rax

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner((ADAPTER_RENDER *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1924;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 1924LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)a2 + 116) == 2 )
  {
    if ( this[7] == KeGetCurrentThread() )
      goto LABEL_7;
    WdLogSingleEntry0(1LL);
    v6 = 1927LL;
    v7 = L"m_DeviceCreationLockCdd.IsExclusiveOwner()";
    goto LABEL_6;
  }
  if ( this[4] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    v6 = 1931LL;
    v7 = L"m_DeviceCreationLock.IsExclusiveOwner()";
LABEL_6:
    WdLogGlobalForLineNumber = v6;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)v7, v6, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_7:
  if ( *((_DWORD *)this[2] + 50) == 1 )
  {
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(*((DXGPROCESS **)a2 + 5), *((_DWORD *)this[2] + 60));
    v9 = RenderAdapterInfo;
    if ( RenderAdapterInfo )
    {
      if ( *((struct DXGDEVICE **)RenderAdapterInfo + 9) == a2 )
      {
        DXGVIRTUALGPUMANAGER::DestroyVirtualGpuState(this[233], a2);
        *((_QWORD *)v9 + 9) = 0LL;
      }
    }
  }
  v10 = (ADAPTER_DISPLAY *)*((_QWORD *)this[2] + 395);
  if ( v10 && ADAPTER_DISPLAY::IsVidPnSourceOwner(v10, a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1966;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!GetAdapter()->IsDisplayAdapter() || (!GetAdapter()->GetDisplayCore()->IsVidPnSourceOwner(pDevice))",
      1966LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent((__int64)v10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1972;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pProcess != NULL", 1972LL, 0LL, 0LL, 0LL, 0LL);
  }
  v11 = (__int64 *)(((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64));
  v12 = (__int64 *)*v11;
  if ( *(__int64 **)(*v11 + 8) != v11
    || (v13 = *(__int64 ***)((((unsigned __int64)a2 + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64))
                           + 8),
        *v13 != v11)
    || (*v13 = v12,
        v12[1] = (__int64)v13,
        DXGDEVICE::DestroyAllDeviceState(a2, a3),
        v14 = *(struct DXGDEVICE **)a2,
        v15 = (struct DXGDEVICE **)*((_QWORD *)a2 + 1),
        *(struct DXGDEVICE **)(*(_QWORD *)a2 + 8LL) != a2)
    || *v15 != a2 )
  {
    __fastfail(3u);
  }
  *v15 = v14;
  *((_QWORD *)v14 + 1) = v15;
  DXGDEVICE::`scalar deleting destructor'(a2);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
}
