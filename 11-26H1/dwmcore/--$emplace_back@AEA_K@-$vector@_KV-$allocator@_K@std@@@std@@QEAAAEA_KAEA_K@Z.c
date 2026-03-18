/*
 * XREFs of ??$emplace_back@AEA_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAAEA_KAEA_K@Z @ 0x180243F38
 * Callers:
 *     ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x180242F40 (-OnDisconnected@DataSourceProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x1801B589C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 */

char *__fastcall std::vector<unsigned __int64>::emplace_back<unsigned __int64 &>(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v5; // rdx
  __int64 v6; // rdx

  v5 = *(__int64 **)(a1 + 8);
  if ( v5 == *(__int64 **)(a1 + 16) )
    return std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(
             (void **)a1,
             (__int64)v5,
             a2,
             a4);
  *v5 = *a2;
  v6 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v6 + 8;
  return (char *)v6;
}
