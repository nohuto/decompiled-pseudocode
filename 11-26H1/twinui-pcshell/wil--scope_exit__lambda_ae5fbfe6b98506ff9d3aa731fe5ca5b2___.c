/*
 * XREFs of wil::scope_exit__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___ @ 0x1805E2330
 * Callers:
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5508 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x180033808 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::scope_exit__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 result; // rax

  std::wstring::wstring(a1, a2);
  v3 = *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v4 + 32) = v3;
  result = v4;
  *(_BYTE *)(v4 + 40) = 1;
  return result;
}
