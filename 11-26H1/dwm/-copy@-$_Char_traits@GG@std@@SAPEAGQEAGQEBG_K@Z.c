/*
 * XREFs of ?copy@?$_Char_traits@GG@std@@SAPEAGQEAGQEBG_K@Z @ 0x14000EDE8
 * Callers:
 *     ?copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z @ 0x14000F0C4 (-copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBA_KQEAG_K_K@Z.c)
 * Callees:
 *     memcpy_0 @ 0x140006152 (memcpy_0.c)
 */

void *__fastcall std::_Char_traits<unsigned short,unsigned short>::copy(void *a1, const void *a2, __int64 a3)
{
  memcpy_0(a1, a2, 2 * a3);
  return a1;
}
