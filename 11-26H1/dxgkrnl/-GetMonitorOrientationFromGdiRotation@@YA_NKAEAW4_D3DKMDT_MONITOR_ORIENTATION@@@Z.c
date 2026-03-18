/*
 * XREFs of ?GetMonitorOrientationFromGdiRotation@@YA_NKAEAW4_D3DKMDT_MONITOR_ORIENTATION@@@Z @ 0x140057808
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 * Callees:
 *     <none>
 */

char __fastcall GetMonitorOrientationFromGdiRotation(int a1, enum _D3DKMDT_MONITOR_ORIENTATION *a2)
{
  int v3; // ecx
  int v4; // ecx

  if ( !a1 )
  {
    *a2 = D3DKMDT_MO_0DEG;
    return 1;
  }
  v3 = a1 - 1;
  if ( !v3 )
  {
    *a2 = D3DKMDT_MO_90DEG;
    return 1;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    *a2 = D3DKMDT_MO_180DEG;
    return 1;
  }
  if ( v4 == 1 )
  {
    *a2 = D3DKMDT_MO_270DEG;
    return 1;
  }
  *a2 = D3DKMDT_MO_UNINITIALIZED;
  return 0;
}
