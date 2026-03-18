/*
 * XREFs of ?ReleaseRenderingResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180132A70
 * Callers:
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x180123968 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 *     ?ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ @ 0x180132740 (-ReleaseFlipResources@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ResetBuffers@CCaptureRenderTarget@@IEAAXXZ @ 0x180133300 (-ResetBuffers@CCaptureRenderTarget@@IEAAXXZ.c)
 *     ?ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETADAPTERLUID@@@Z @ 0x18021BAEC (-ProcessSetAdapterLUID@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDE.c)
 *     ?NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x180249670 (-NotifyInvalidResource@CCaptureRenderTarget@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@std@@YAXPEAUDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@QEAU12@AEAV?$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@0@@Z @ 0x18009A498 (--$_Destroy_range@V-$allocator@UDXGIResourceRenderTargetBitmapPair@CCaptureRenderTarget@@@std@@@.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?clear@?$vector@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@V?$allocator@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x180132BA4 (-clear@-$vector@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-Cl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCaptureRenderTarget::ReleaseRenderingResources(CCaptureRenderTarget *this)
{
  __int64 **v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rcx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v5; // rdx
  CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *v6; // rcx
  unsigned int v7; // esi
  __int64 v8; // r8

  (*(void (__fastcall **)(CCaptureRenderTarget *))(*(_QWORD *)this + 272LL))(this);
  std::vector<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>>::clear((char *)this + 2760);
  v2 = (__int64 **)((char *)this + 2712);
  if ( *((_QWORD *)this + 336) )
  {
    v7 = 0;
    if ( (__int64)(*((_QWORD *)this + 340) - (_QWORD)*v2) >> 3 )
    {
      v8 = 0LL;
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 336) + 56LL))(
          *((_QWORD *)this + 336),
          *(_QWORD *)(*((_QWORD *)this + 342) + 8 * v8));
        v8 = ++v7;
      }
      while ( v7 < (unsigned __int64)((__int64)(*((_QWORD *)this + 340) - (_QWORD)*v2) >> 3) );
    }
  }
  v3 = (__int64 *)*((_QWORD *)this + 340);
  if ( *v2 != v3 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(*v2, v3);
    *((_QWORD *)this + 340) = *((_QWORD *)this + 339);
  }
  v4 = *((_QWORD *)this + 329);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((*((_QWORD *)this + 330) - v4) >> 3) )
  {
    (*(void (__fastcall **)(_QWORD, unsigned __int64))(**(_QWORD **)(v4 + 8) + 80LL))(
      *(_QWORD *)(v4 + 8),
      ((unsigned __int64)this + 2384) & -(__int64)(this != 0LL));
    v5 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)*((_QWORD *)this + 330);
    v6 = (CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair *)*((_QWORD *)this + 329);
    if ( v6 != v5 )
    {
      std::_Destroy_range<std::allocator<CCaptureRenderTarget::DXGIResourceRenderTargetBitmapPair>>(v6, v5);
      *((_QWORD *)this + 330) = *((_QWORD *)this + 329);
    }
  }
  *((_DWORD *)this + 664) = -1;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 333);
  *((_QWORD *)this + 334) = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)this + 299);
}
