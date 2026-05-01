/*
 * XREFs of ?push_back@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N$$QEAUtest_flag@2@@Z @ 0x180332F50
 * Callers:
 *     ??$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector_nothrow@Utest_flag@tip2@@@tip2@@@Z @ 0x18028D02C (--$load_nothrow@Utest_flag@tip2@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector_nothrow@Utest_flag@t.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x180673F20 (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 * Callees:
 *     ??0test_flag@tip2@@QEAA@$$QEAU01@@Z @ 0x18032B8A4 (--0test_flag@tip2@@QEAA@$$QEAU01@@Z.c)
 *     ?reserve@?$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z @ 0x180333448 (-reserve@-$vector_nothrow@Utest_flag@tip2@@@tip2@@QEAA_N_K@Z.c)
 */

char __fastcall tip2::vector_nothrow<tip2::test_flag>::push_back(_QWORD *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v5; // rdx
  char result; // al

  v2 = a1[1];
  if ( a1[2] < v2 )
    goto LABEL_5;
  v5 = 2 * v2;
  if ( !v2 )
    v5 = 10LL;
  result = tip2::vector_nothrow<tip2::test_flag>::reserve(a1, v5);
  if ( result )
  {
LABEL_5:
    tip2::test_flag::test_flag(*a1 + 104LL * a1[2]++, a2);
    return 1;
  }
  return result;
}
