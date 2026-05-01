/*
 * XREFs of ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x180283F4C
 * Callers:
 *     ??$process@V?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@1@@Z @ 0x180283C78 (--$process@V-$nvp@AEAV-$vector_nothrow@Utest_flag@tip2@@@tip2@@@tson@@@input_archive@tson@@AEAAX.c)
 *     ?deserialize_data@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@@Z @ 0x180283CC0 (-deserialize_data@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXAEBUTestInfo@TestInfo_ODR_guard@@.c)
 * Callees:
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x180177078 (-startNode@input_archive@tson@@QEAAXXZ.c)
 *     ?finishNode@input_archive@tson@@QEAAXXZ @ 0x1801774D0 (-finishNode@input_archive@tson@@QEAAXXZ.c)
 *     ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x18020A8D4 (--$-RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z.c)
 *     ?clear@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ @ 0x18028347C (-clear@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x180331D58 (-load_nothrow@tson@@YAXAEAVinput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?push_back@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z @ 0x180332568 (-push_back@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z.c)
 */

void __fastcall tson::load_nothrow<tip2::test_flag>(tson *this, _QWORD *a2)
{
  unsigned int v4; // edx
  __int64 i; // rbx
  struct tip2::test_flag *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v8[16]; // [rsp+30h] [rbp-88h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v10; // [rsp+50h] [rbp-68h]
  _BYTE v11[72]; // [rsp+58h] [rbp-60h] BYREF

  v7 = 0LL;
  tson::input_archive::operator()<tson::size_tag &>((__int64)this, &v7);
  tip2::vector_nothrow<tip2::test_flag>::clear(a2, v4);
  for ( i = v7; i; --i )
  {
    memset_0(v8, 0, 0x68uLL);
    v10 = 0LL;
    *(_OWORD *)pvar = 0LL;
    memset_0(v11, 0, 0x40uLL);
    tson::input_archive::startNode(this);
    tson::load_nothrow(this, (struct tson::input_archive *)v8, v6);
    tson::input_archive::finishNode(this);
    tip2::vector_nothrow<tip2::test_flag>::push_back(a2, v8);
    PropVariantClear(pvar);
  }
}
