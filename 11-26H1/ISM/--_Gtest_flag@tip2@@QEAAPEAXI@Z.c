/*
 * XREFs of ??_Gtest_flag@tip2@@QEAAPEAXI@Z @ 0x1800A32A0
 * Callers:
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x1800A3420 (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x18010AC5C (-reserve@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z.c)
 * Callees:
 *     <none>
 */

PROPVARIANT *__fastcall tip2::test_flag::`scalar deleting destructor'(PROPVARIANT *this)
{
  PropVariantClear(this + 2);
  return this;
}
