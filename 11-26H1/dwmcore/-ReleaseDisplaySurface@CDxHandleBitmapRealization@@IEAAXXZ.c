/*
 * XREFs of ?ReleaseDisplaySurface@CDxHandleBitmapRealization@@IEAAXXZ @ 0x1800FB0CC
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800FAFEC (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x1802AC620 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x1800FB158 (-NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseDisplaySurface(CDxHandleBitmapRealization *this)
{
  __int64 *v1; // rbx
  struct Windows::Devices::Display::Core::IDisplaySurface *v2; // rdx

  v1 = (__int64 *)((char *)this + 384);
  v2 = (struct Windows::Devices::Display::Core::IDisplaySurface *)*((_QWORD *)this + 48);
  if ( v2 )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased(this, v2);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v1);
  }
}
