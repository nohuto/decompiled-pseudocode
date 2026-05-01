/*
 * XREFs of ??1?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@QEAA@XZ @ 0x1803AE220
 * Callers:
 *     ?Release@?$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip2@@AEAAKXZ @ 0x1803B7230 (-Release@-$merged_data@U_tip_tip_test_dynamic_attributes@tip2@@Vtest_data_dynamic@2@@details@tip.c)
 * Callees:
 *     ??1test_data_dynamic@tip2@@QEAA@XZ @ 0x1803AE958 (--1test_data_dynamic@tip2@@QEAA@XZ.c)
 *     ?complete_helper@?$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x1803BB678 (-complete_helper@-$shared_data@$00$00$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::~merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>(
        __int64 a1)
{
  *(_QWORD *)a1 = &tip2::details::merged_data<tip2::_tip_tip_test_dynamic_attributes,tip2::test_data_dynamic>::`vftable';
  if ( *(_QWORD *)(a1 + 248) && (*(_BYTE *)(a1 + 28) & 1) == 0 )
    tip2::details::shared_data<1,1,1>::complete_helper(a1 + 8, 4LL);
  tip2::test_data_dynamic::~test_data_dynamic((tip2::test_data_dynamic *)(a1 + 256));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 8);
}
