/*
 * XREFs of _lambda_5a7476c6fd536a345eaeabfa896e18f7_::operator() @ 0x1801AF550
 * Callers:
 *     _lambda_84e14b76e88ec9f17bb7265a201c38f3_::_lambda_invoker_cdecl_ @ 0x1801AF3B0 (_lambda_84e14b76e88ec9f17bb7265a201c38f3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

float __fastcall lambda_5a7476c6fd536a345eaeabfa896e18f7_::operator()(__int64 a1, const WCHAR *a2, float a3)
{
  int v4; // [rsp+60h] [rbp+8h] BYREF
  int v5; // [rsp+64h] [rbp+Ch]
  DWORD v6; // [rsp+78h] [rbp+20h] BYREF

  v5 = HIDWORD(a1);
  v4 = 0;
  v6 = 4;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Input\\Settings\\EdgeGestureMetrics",
         a2,
         0x10u,
         0LL,
         &v4,
         &v6) )
  {
    return a3;
  }
  else
  {
    return (float)v4;
  }
}
