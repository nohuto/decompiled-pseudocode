/*
 * XREFs of ?ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ @ 0x180503838
 * Callers:
 *     _lambda_3a62f6db24c191cee0c877e4c7c22fb6_::operator() @ 0x1804F7964 (_lambda_3a62f6db24c191cee0c877e4c7c22fb6_--operator().c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z @ 0x1804FD9E4 (-HandleViewFallback@GamingPosturePositioner@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall GamingPosturePositioner::ShouldHandleViewFallback(GamingPosturePositioner *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 648) )
    return GetSystemMetrics(0x2000) == 0;
  return v1;
}
