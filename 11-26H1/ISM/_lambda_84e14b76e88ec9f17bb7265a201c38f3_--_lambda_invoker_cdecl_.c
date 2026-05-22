/*
 * XREFs of _lambda_84e14b76e88ec9f17bb7265a201c38f3_::_lambda_invoker_cdecl_ @ 0x1801AF3B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_06c302a1a35ab94b6b920e377d290633_::operator() @ 0x1801AF4D8 (_lambda_06c302a1a35ab94b6b920e377d290633_--operator().c)
 *     _lambda_5a7476c6fd536a345eaeabfa896e18f7_::operator() @ 0x1801AF550 (_lambda_5a7476c6fd536a345eaeabfa896e18f7_--operator().c)
 */

void __fastcall lambda_84e14b76e88ec9f17bb7265a201c38f3_::_lambda_invoker_cdecl_(_DWORD *a1, HKEY a2)
{
  double v3; // xmm0_8
  __int64 v4; // rcx
  double v5; // xmm0_8
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = lambda_5a7476c6fd536a345eaeabfa896e18f7_::operator()(a1, L"HitTestSpanHimetric_X");
  a1[2] = LODWORD(v3);
  v5 = lambda_5a7476c6fd536a345eaeabfa896e18f7_::operator()(v4, L"HitTestSpanHimetric_Y");
  a1[3] = LODWORD(v5);
  *((_WORD *)a1 + 8) = lambda_06c302a1a35ab94b6b920e377d290633_::operator()(v6, L"OrientationBiasDegrees", 35LL);
  *((_WORD *)a1 + 9) = lambda_06c302a1a35ab94b6b920e377d290633_::operator()(v7, L"GestureTimeout", 250LL);
}
