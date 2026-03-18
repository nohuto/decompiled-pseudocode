/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@E@std@@@std@@YAPEAEPEAE_KAEAV?$allocator@E@0@@Z @ 0x14000DA34
 * Callers:
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 * Callees:
 *     memset_0 @ 0x140005978 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<unsigned char>>(char *a1, size_t a2)
{
  memset_0(a1, 0, a2);
  return &a1[a2];
}
