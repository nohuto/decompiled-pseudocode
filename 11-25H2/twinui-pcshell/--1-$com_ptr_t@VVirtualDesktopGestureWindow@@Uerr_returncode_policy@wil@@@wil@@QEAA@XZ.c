/*
 * XREFs of ??1?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180538BC8
 * Callers:
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_ @ 0x1805389B0 (_lambda_93656037d821f0cf4f10769c2d148d9f_--__lambda_93656037d821f0cf4f10769c2d148d9f_.c)
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::__lambda_c876813055a0f8eb90a291ca9ab0fec3_ @ 0x1805389FC (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--__lambda_c876813055a0f8eb90a291ca9ab0fec3_.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x18053DA54 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 16) + 16LL))(v1 + 16);
  return result;
}
