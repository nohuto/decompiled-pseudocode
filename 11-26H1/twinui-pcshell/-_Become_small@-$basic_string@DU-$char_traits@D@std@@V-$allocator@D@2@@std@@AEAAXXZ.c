/*
 * XREFs of ?_Become_small@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180314D9C
 * Callers:
 *     ?_Pretty_message@filesystem_error@filesystem@std@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$basic_string_view@DU?$char_traits@D@std@@@3@AEBVpath@23@1@Z @ 0x180314F64 (-_Pretty_message@filesystem_error@filesystem@std@@CA-AV-$basic_string@DU-$char_traits@D@std@@V-$.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

void __fastcall std::string::_Become_small(void **a1)
{
  void *v1; // rbx

  v1 = *a1;
  memcpy_0(a1, *a1, (size_t)a1[2] + 1);
  std::_Deallocate<16>(v1, (struct std::nothrow_t *)((char *)a1[3] + 1));
  a1[3] = (void *)15;
}
