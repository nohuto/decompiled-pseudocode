/*
 * XREFs of ?VidSchWaitForQueuedPresentLimit@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@IE@Z @ 0x14004A2B8
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402EE2A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     DxgkGetDeviceStateInternal @ 0x14036A470 (DxgkGetDeviceStateInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchWaitForQueuedPresentLimit(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_DEVICE *a2,
        __int64 a3,
        char a4)
{
  unsigned int v4; // r10d

  v4 = a3;
  LOBYTE(a3) = a4;
  return (*(__int64 (__fastcall **)(struct _VIDSCH_DEVICE *, _QWORD, __int64))(*((_QWORD *)this + 1) + 200LL))(
           a2,
           v4,
           a3);
}
