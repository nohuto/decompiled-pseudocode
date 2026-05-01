/*
 * XREFs of ?rfind@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KG_K@Z @ 0x1802E06D0
 * Callers:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1801FC264 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ??$get_runtime_activation_factory_impl@$00@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x18020B22C (--$get_runtime_activation_factory_impl@$00@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUgu.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::rfind(_QWORD *a1)
{
  _WORD *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  _WORD *i; // rax

  v1 = a1;
  v2 = a1[2];
  if ( a1[3] > 7uLL )
    v1 = (_WORD *)*a1;
  if ( !v2 )
    return -1LL;
  v3 = v2 - 1;
  v4 = -1LL;
  if ( v3 != -1 )
    v4 = v3;
  for ( i = &v1[v4]; *i != 46; --i )
  {
    if ( i == v1 )
      return -1LL;
  }
  return i - v1;
}
