/*
 * XREFs of _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_ @ 0x1805E27CC
 * Callers:
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5508 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x18002C9CC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::_lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  const struct winrt::hstring *v4; // r8

  std::wstring::wstring(a1, a2);
  winrt::hstring::hstring((winrt::hstring *)(v3 + 32), v4, (unsigned int)v4);
  return a1;
}
