/*
 * XREFs of ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC
 * Callers:
 *     _lambda_1a8a671d465f8785bc97c99107a222a3_::operator() @ 0x14015BAAC (_lambda_1a8a671d465f8785bc97c99107a222a3_--operator().c)
 *     _anonymous_namespace_::ComputeWindowToActivate @ 0x140192C70 (_anonymous_namespace_--ComputeWindowToActivate.c)
 *     _lambda_8e519a2256dcdf5e4b624ad02749eac7_::operator() @ 0x1401A2938 (_lambda_8e519a2256dcdf5e4b624ad02749eac7_--operator().c)
 *     _lambda_9e1c073be7703093e3ca0af05debe537_::operator() @ 0x1401A365C (_lambda_9e1c073be7703093e3ca0af05debe537_--operator().c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     _lambda_771c0aaec53f6674fc2d137116610048_::_lambda_invoker_cdecl_ @ 0x14024AA70 (_lambda_771c0aaec53f6674fc2d137116610048_--_lambda_invoker_cdecl_.c)
 *     _lambda_901e485e0433aa03d5d4ca8cfaefa235_::operator() @ 0x14025184C (_lambda_901e485e0433aa03d5d4ca8cfaefa235_--operator().c)
 * Callees:
 *     ?IsWindowCloaked@@YA_NPEBUtagWND@@@Z @ 0x140047DD0 (-IsWindowCloaked@@YA_NPEBUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 */

bool __fastcall IsWindowActivateable(const struct tagWND *a1)
{
  char v1; // dl
  const struct tagWND *CompositeAppFrameWindowOrSelf; // rax

  if ( !a1 )
    return 0;
  v1 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v1 & 0x10) == 0 || (v1 & 8) != 0 )
    return 0;
  CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(a1);
  return !IsWindowCloaked(CompositeAppFrameWindowOrSelf);
}
