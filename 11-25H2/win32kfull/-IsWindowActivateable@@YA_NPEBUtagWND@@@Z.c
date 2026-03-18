/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x140023FA0
 * Callers:
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x140023EC0 (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x1400243E0 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _lambda_8e519a2256dcdf5e4b624ad02749eac7_::operator() @ 0x1400244A8 (_lambda_8e519a2256dcdf5e4b624ad02749eac7_--operator().c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::_lambda_invoker_cdecl_ @ 0x1401EF420 (_lambda_1a8a671d465f8785bc97c99107a222a3_--_lambda_invoker_cdecl_.c)
 *     _lambda_771c0aaec53f6674fc2d137116610048_::operator() @ 0x14022992C (_lambda_771c0aaec53f6674fc2d137116610048_--operator().c)
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x140277658 (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--operator().c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140022220 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140024198 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsWindowHolographicForHitTest@@YA_NPEBUtagWND@@@Z @ 0x140024220 (-IsWindowHolographicForHitTest@@YA_NPEBUtagWND@@@Z.c)
 */

bool __fastcall IsWindowActivateable(const struct tagWND *a1)
{
  char v1; // dl
  const struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  const struct tagWND *v3; // r8

  if ( !a1 )
    return 0;
  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v1 & 0x10) == 0 || (v1 & 8) != 0 )
    return 0;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(a1);
  return IsWindowHolographicForHitTest(CompositeAppFrameWindowOrSelf) || !IsWindowCloaked(v3);
}
