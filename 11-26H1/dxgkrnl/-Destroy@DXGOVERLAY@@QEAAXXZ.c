/*
 * XREFs of ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1401EFCC8
 * Callers:
 *     ??1DXGOVERLAY@@QEAA@XZ @ 0x1401EFC7C (--1DXGOVERLAY@@QEAA@XZ.c)
 *     ?Stop@DXGOVERLAY@@QEAAXXZ @ 0x1401F08FC (-Stop@DXGOVERLAY@@QEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402EAC9C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DisableOverlays@ADAPTER_RENDER@@AEAAXXZ @ 0x1403A98F8 (-DisableOverlays@ADAPTER_RENDER@@AEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x14005ECAC (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1401A9984 (-ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1401AE0EC (-DdiDestroyOverlay@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGOVERLAY::Destroy(DXGOVERLAY *this)
{
  __int64 v2; // rcx
  void *v3; // rdx
  unsigned int v4; // edx

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 188;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetAdapter()->IsCoreResourceSharedOwner()",
      188LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
    || *(__int64 (__fastcall **)(void *const, struct _DXGKARG_CREATEOVERLAY *))(v2 + 704) == ADAPTER_RENDER::DefaultDdiCreateOverlay
    || *(__int64 (__fastcall **)(void *const))(v2 + 768) == ADAPTER_RENDER::DefaultDdiDestroyOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_FLIPOVERLAY *))(v2 + 760) == ADAPTER_RENDER::DefaultDdiFlipOverlay
    || *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_UPDATEOVERLAY *))(v2 + 752) == ADAPTER_RENDER::DefaultDdiUpdateOverlay )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 189;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"GetAdapter()->IsOverlayEnabled()", 189LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = 0LL;
  if ( v3 )
  {
    ADAPTER_RENDER::DdiDestroyOverlay(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3168LL),
      v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  v4 = *((_DWORD *)this + 8);
  if ( v4 != -1 )
  {
    ADAPTER_RENDER::ReleaseOverlayId(
      *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 3168LL),
      v4);
    *((_DWORD *)this + 8) = -1;
  }
}
