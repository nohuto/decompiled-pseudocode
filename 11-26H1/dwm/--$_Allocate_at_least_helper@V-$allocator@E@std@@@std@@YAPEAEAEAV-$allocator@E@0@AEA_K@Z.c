/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@E@std@@@std@@YAPEAEAEAV?$allocator@E@0@AEA_K@Z @ 0x14000D5E0
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Allocate_at_least_helper<std::allocator<unsigned char>>(__int64 a1, size_t *a2)
{
  return std::_Allocate<16,std::_Default_allocate_traits>(*a2);
}
