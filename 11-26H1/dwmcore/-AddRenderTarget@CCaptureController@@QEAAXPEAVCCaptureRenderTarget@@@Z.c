/*
 * XREFs of ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18026A25C
 * Callers:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801D94B4 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x1800643C8 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18014A014 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801BF65C (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 *     ?UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ @ 0x1801D3930 (-UpdateRenderTargetBitmapSDRBoosts@CCaptureRenderTarget@@QEAAXXZ.c)
 *     ?SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z @ 0x1801DAE88 (-SetTransform@CCaptureRenderTarget@@QEAAXPEAVCTransform3D@@@Z.c)
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18021EB9C (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureController::AddRenderTarget(
        CCaptureController *this,
        struct CCaptureRenderTarget *a2,
        __int64 a3,
        __int64 a4)
{
  char *v4; // rdi
  __int64 v5; // rbp
  __int64 *v8; // rdx
  __int64 v9; // rcx
  float v10; // xmm6_4
  float v11; // xmm7_4
  __int64 v12; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v13; // r8
  struct CCaptureRenderTarget *v14; // [rsp+50h] [rbp+8h] BYREF

  v4 = (char *)this + 160;
  v5 = 0LL;
  v14 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct CCaptureRenderTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = (__int64 *)*((_QWORD *)v4 + 1);
  if ( v8 == *((__int64 **)v4 + 2) )
  {
    std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
      (__int64 **)v4,
      v8,
      (__int64 *)&v14,
      a4);
  }
  else
  {
    v14 = 0LL;
    *v8 = (__int64)a2;
    *((_QWORD *)v4 + 1) += 8LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  v9 = *((_QWORD *)this + 16);
  v10 = *((float *)this + 19);
  v11 = *((float *)this + 20);
  if ( v9 )
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 192LL))(v9);
  CCaptureRenderTarget::SetTargetVisual(a2, *((struct CVisual **)this + 13));
  *((_BYTE *)a2 + 2589) = *((_BYTE *)this + 72);
  *((_DWORD *)a2 + 30) = (int)v10;
  *((_DWORD *)a2 + 31) = (int)v11;
  COffScreenRenderTarget::CalcTreeBounds(a2, v12, v13);
  *(_QWORD *)((char *)a2 + 2604) = *(_QWORD *)((char *)this + 92);
  CCaptureRenderTarget::SetTransform((struct CResource **)a2, *((struct CTransform3D **)this + 14));
  *((_BYTE *)a2 + 2590) = *((_BYTE *)this + 84);
  *((_DWORD *)a2 + 650) = *((_DWORD *)this + 22);
  CCaptureRenderTarget::UpdateRenderTargetBitmapSDRBoosts((enum DXGI_COLOR_SPACE_TYPE *)a2);
  CCaptureRenderTarget::SetReferenceVisual(a2, *((struct CVisual **)this + 15));
  *((_BYTE *)a2 + 2824) = *((_BYTE *)this + 100);
  wil::com_ptr_t<CDeviceTexture,wil::err_returncode_policy>::operator=((__int64 *)a2 + 328, v5);
}
