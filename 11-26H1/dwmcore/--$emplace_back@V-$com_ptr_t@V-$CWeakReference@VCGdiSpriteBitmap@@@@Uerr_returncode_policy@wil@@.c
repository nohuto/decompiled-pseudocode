/*
 * XREFs of ??$emplace_back@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@V?$CWeakReference@VCGdiSpriteBitmap@@@@Uerr_returncode_policy@wil@@@wil@@$$QEAV23@@Z @ 0x180208720
 * Callers:
 *     ?RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z @ 0x180191BA4 (-RegisterIndirectTarget@CBaseExpression@@QEAAXPEAVCResource@@@Z.c)
 *     ?AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z @ 0x1802086AC (-AddRetryDeviceBitmap@CLegacySurfaceManager@@QEAAXPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x18020D8C8 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1801BF65C (--$_Emplace_reallocate@V-$com_ptr_t@UIDisplaySurfacePrivate@Core@Display@Devices@Windows@@Uerr_r.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>::emplace_back<wil::com_ptr_t<CWeakReference<CGdiSpriteBitmap>,wil::err_returncode_policy>>(
        __int64 **a1,
        __int64 *a2)
{
  __int64 *v2; // r9
  __int64 v3; // rax
  __int64 *v4; // rdx

  v2 = a1[1];
  if ( v2 == a1[2] )
    return std::vector<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Devices::Display::Core::IDisplaySurfacePrivate,wil::err_returncode_policy>>(
             a1,
             a1[1],
             a2,
             (__int64)v2);
  v3 = *a2;
  *a2 = 0LL;
  *v2 = v3;
  v4 = a1[1];
  a1[1] = v4 + 1;
  return v4;
}
