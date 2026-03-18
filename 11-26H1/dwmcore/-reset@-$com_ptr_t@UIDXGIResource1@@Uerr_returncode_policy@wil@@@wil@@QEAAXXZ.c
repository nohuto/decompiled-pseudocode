/*
 * XREFs of ?reset@?$com_ptr_t@UIDXGIResource1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801B1E84
 * Callers:
 *     ?ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z @ 0x180298078 (-ShareToD3D12@CD3DDevice@@QEAAJPEAUIUnknown@@PEAPEAUID3D12Resource@@@Z.c)
 *     ?CreateCrossAdapterSharedHandle@CD2DBitmap@@UEAAJPEAPEAX@Z @ 0x1802A9530 (-CreateCrossAdapterSharedHandle@CD2DBitmap@@UEAAJPEAPEAX@Z.c)
 *     ?EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ @ 0x1802A977C (-EnsureIgnoreAlphaBitmap@CD2DBitmap@@IEAAJXZ.c)
 *     ?Initialize@?$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x1802B7F64 (-Initialize@-$CDeviceTextureT@VICrossAdapterTexture@@@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11T.c)
 *     ?ReleaseD3DResources@?$CDeviceTextureT@VIDeviceTexture@@@@MEAAXXZ @ 0x1802B8770 (-ReleaseD3DResources@-$CDeviceTextureT@VIDeviceTexture@@@@MEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<IDXGIResource1,wil::err_returncode_policy>::reset(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return result;
}
