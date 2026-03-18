/*
 * XREFs of ?ReadyForRender@CCaptureRenderTarget@@MEAA_NXZ @ 0x180123640
 * Callers:
 *     <none>
 * Callees:
 *     ?TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ @ 0x18012352C (-TryTargetNextBuffer@CCaptureRenderTarget@@IEAAJXZ.c)
 *     ?ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ @ 0x180123710 (-ReadyForRender@COffScreenRenderTarget@@MEAA_NXZ.c)
 *     ?GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ @ 0x18012388C (-GetD3DDeviceNoRef@CCaptureRenderTarget@@IEAAPEAVCD3DDevice@@XZ.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ @ 0x180124348 (-GetCurrentFrameBuffer@CCaptureRenderTarget@@IEAAPEAUIDXGIResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCaptureRenderTarget::ReadyForRender(CCaptureRenderTarget *this)
{
  __int64 v2; // rcx
  bool result; // al
  struct CD3DDevice *D3DDeviceNoRef; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  result = 0;
  if ( (!*((_BYTE *)this + 2824) || *((_DWORD *)g_pComposition + 1613)) && COffScreenRenderTarget::ReadyForRender(this) )
  {
    v2 = *((_QWORD *)this + 336);
    if ( v2 )
    {
      v5 = 0;
      if ( (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v2 + 24LL))(v2, &v5) >= 0 )
      {
        if ( v5 )
        {
          D3DDeviceNoRef = CCaptureRenderTarget::GetD3DDeviceNoRef(this);
          if ( D3DDeviceNoRef )
          {
            if ( *((_QWORD *)this + 343) != *((_QWORD *)this + 342)
              && *((_BYTE *)this + 2589)
              && (int)CCaptureRenderTarget::EnsureResources(this, D3DDeviceNoRef) >= 0
              && (int)CCaptureRenderTarget::TryTargetNextBuffer(this) >= 0
              && CCaptureRenderTarget::GetCurrentFrameBuffer(this) )
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return result;
}
