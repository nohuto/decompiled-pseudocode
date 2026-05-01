/*
 * XREFs of ?ShouldHandleViewFallback@GamingPosturePositioner@@AEAA_NXZ @ 0x1804E4FD8
 * Callers:
 *     _lambda_bf1ca8575d68b9366077aadb303b08d6_::operator() @ 0x1804E1A08 (_lambda_bf1ca8575d68b9366077aadb303b08d6_--operator().c)
 *     ?HandleViewFallback@GamingPosturePositioner@@AEAAXXZ @ 0x1804E2E50 (-HandleViewFallback@GamingPosturePositioner@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall GamingPosturePositioner::ShouldHandleViewFallback(GamingPosturePositioner *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 616) )
    return GetSystemMetrics(0x2000) == 0;
  return v1;
}
