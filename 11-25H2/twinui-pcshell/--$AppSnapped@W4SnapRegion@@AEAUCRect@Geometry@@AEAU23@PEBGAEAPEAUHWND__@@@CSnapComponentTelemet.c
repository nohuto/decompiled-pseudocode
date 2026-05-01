/*
 * XREFs of ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x180577D7C
 * Callers:
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180226F0C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 * Callees:
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18008F5F8 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x18008F638 (-get@-$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AX.c)
 *     ?AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z @ 0x18057AEE0 (-AppSnapped_@CSnapComponentTelemetry@@QEBAXW4SnapRegion@@AEBUCRect@Geometry@@1PEBGPEAUHWND__@@@Z.c)
 */

char __fastcall CSnapComponentTelemetry::AppSnapped<enum SnapRegion,Geometry::CRect &,Geometry::CRect &,unsigned short const *,HWND__ * &>(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        _QWORD *a5)
{
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // rcx

  result = CSnapComponentTelemetry::IsEnabled((__int64)a1);
  if ( result )
  {
    wil::details::static_lazy<CSnapComponentTelemetry>::get(
      v10,
      (void (__cdecl *)())_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
    return CSnapComponentTelemetry::AppSnapped_(v11, *a1, a2, a3, *a4, *a5);
  }
  return result;
}
