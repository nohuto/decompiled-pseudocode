/*
 * XREFs of ??$copy_to@UIApplicationView@@@?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIApplicationView@@@Z @ 0x1804A2A7C
 * Callers:
 *     ?CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z @ 0x1804A4C30 (-CreateThumbnailAppWithChilden@CAppThumbnailWindow@@AEAAJPEAUHWND__@@PEAPEAUIDCompThumbnail@@@Z.c)
 *     ?TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z @ 0x1804A9A28 (-TryGetTopTwoApplicationViews@CAppThumbnailWindow@@AEAAXPEAPEAUIApplicationView@@0@Z.c)
 *     ?MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@PEAUIVirtualDesktop@@PEAUHSTRING__@@UtagRECT@@PEAPEAU2@@Z @ 0x180561308 (-MakeBackgroundThumbnailFromThumbnailCache@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>::copy_to<IApplicationView>(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a2 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  }
  else
  {
    *a2 = 0LL;
  }
  return 0LL;
}
