/*
 * XREFs of ??$_UIntegral_to_buff@DI@std@@YAPEADPEADI@Z @ 0x1800EA258
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@H@Z @ 0x1800ED500 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_UIntegral_to_buff<char,unsigned int>(__int64 a1, unsigned int a2)
{
  do
  {
    *(_BYTE *)--a1 = a2 % 0xA + 48;
    a2 /= 0xAu;
  }
  while ( a2 );
  return a1;
}
