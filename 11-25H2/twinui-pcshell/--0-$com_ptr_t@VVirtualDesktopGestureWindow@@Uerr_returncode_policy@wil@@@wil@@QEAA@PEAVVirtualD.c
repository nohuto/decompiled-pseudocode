/*
 * XREFs of ??0?$com_ptr_t@VVirtualDesktopGestureWindow@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVVirtualDesktopGestureWindow@@@Z @ 0x1805385C0
 * Callers:
 *     _lambda_93656037d821f0cf4f10769c2d148d9f_::_lambda_93656037d821f0cf4f10769c2d148d9f__0 @ 0x180538254 (_lambda_93656037d821f0cf4f10769c2d148d9f_--_lambda_93656037d821f0cf4f10769c2d148d9f__0.c)
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::_lambda_c876813055a0f8eb90a291ca9ab0fec3__0 @ 0x1805383B4 (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--_lambda_c876813055a0f8eb90a291ca9ab0fec3__0.c)
 *     ?MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@UtagRECT@@V?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@I0@Z @ 0x18053DA54 (-MakeBackgroundThumbnailFromWallpaperPathAsync@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumb.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a2 + 16) + 8LL))(a2 + 16);
  return a1;
}
