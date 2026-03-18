/*
 * XREFs of ?GetPrimaryAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180128D84
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x180127FC4 (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJXZ @ 0x1801904D0 (-Snapshot@CCachedVisualImage@@QEAAJXZ.c)
 *     ?EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ @ 0x1802133B4 (-EnsureSceneCompositor@CSceneResourceManager@@AEAAJXZ.c)
 *     ?GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x180215DF4 (-GetDefaultDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z.c)
 *     ?GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z @ 0x18022F230 (-GetSpectreTexture@CSceneResourceManager@@QEAAJPEAVCResource@@PEAPEAUISpectreTexture@@@Z.c)
 *     ?GetRenderTargetInfo@COffScreenRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180254CE0 (-GetRenderTargetInfo@COffScreenRenderTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?LockAndRead@CDebugVisualImage@@QEAAXXZ @ 0x18026302C (-LockAndRead@CDebugVisualImage@@QEAAXXZ.c)
 * Callees:
 *     ?GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z @ 0x180128E34 (-GetPrimaryAdapter@CDisplayManager@@QEAAJPEAPEAUIDXGIAdapter1@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _LUID __fastcall CDisplayManager::GetPrimaryAdapterLuid(CDisplayManager *this, _QWORD *a2)
{
  struct IDXGIAdapter1 *v4; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[296]; // [rsp+30h] [rbp-158h] BYREF
  __int64 v6; // [rsp+158h] [rbp-30h]

  *a2 = 0LL;
  v4 = 0LL;
  if ( (int)CDisplayManager::GetPrimaryAdapter(this, &v4) >= 0 )
  {
    memset_0(v5, 0, 0x138uLL);
    if ( ((int (__fastcall *)(struct IDXGIAdapter1 *, _BYTE *))v4->lpVtbl->GetDesc1)(v4, v5) >= 0 )
      *a2 = v6;
  }
  if ( v4 )
    ((void (__fastcall *)(struct IDXGIAdapter1 *))v4->lpVtbl->Release)(v4);
  return (struct _LUID)a2;
}
