/*
 * XREFs of ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A45C
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801345AC (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18018AEA0 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801D94B4 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x18021412C (--1CCaptureController@@EEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@@@Z @ 0x1800452B4 (--4-$com_ptr_t@VCDeviceTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCDeviceTexture@.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x1800643C8 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18014A014 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801D3930 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801DAE88 (-SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z.c)
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18021EB9C (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureController::RemoveRenderTarget(CCaptureController *this, struct CCaptureRenderTarget *a2)
{
  CCaptureRenderTarget **i; // rbx
  __int64 *v4; // rdi
  CCaptureRenderTarget *v5; // rcx
  __int64 v6; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v7; // r8
  CCaptureRenderTarget *v8; // rcx
  __int64 *v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx

  for ( i = (CCaptureRenderTarget **)*((_QWORD *)this + 20); i != *((CCaptureRenderTarget ***)this + 21); ++i )
  {
    v4 = (__int64 *)(i + 1);
    if ( *i == a2 )
    {
      CCaptureRenderTarget::SetTargetVisual(*i, 0LL);
      *((_BYTE *)*i + 2589) = 0;
      v5 = *i;
      *((_QWORD *)v5 + 15) = 0LL;
      COffScreenRenderTarget::CalcTreeBounds(v5, v6, v7);
      CCaptureRenderTarget::SetTransform((struct CResource **)*i, 0LL);
      *((_BYTE *)*i + 2590) = 0;
      v8 = *i;
      *((_DWORD *)v8 + 650) = 0x40000000;
      CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts((enum DXGI_COLOR_SPACE_TYPE *)v8);
      CCaptureRenderTarget::SetReferenceVisual(*i, 0LL);
      *((_BYTE *)*i + 2824) = 0;
      wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)*i + 328, 0LL);
      v9 = (__int64 *)*((_QWORD *)this + 21);
      while ( v4 != v9 )
      {
        v10 = *v4;
        *v4 = 0LL;
        v11 = *(v4 - 1);
        *(v4 - 1) = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        ++v4;
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)(*((_QWORD *)this + 21) - 8LL));
      *((_QWORD *)this + 21) -= 8LL;
      return;
    }
  }
}
