/*
 * XREFs of ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x1803101A0
 * Callers:
 *     ?uflow@?$basic_filebuf@DU?$char_traits@D@std@@@std@@MEAAHXZ @ 0x1801FB610 (-uflow@-$basic_filebuf@DU-$char_traits@D@std@@@std@@MEAAHXZ.c)
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180314F64 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 *     ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180664DFC (-to_string@winrt@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$basic_str.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::string::string(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
