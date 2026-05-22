/*
 * XREFs of ?on_destroy@?$shared_data@$0A@$0A@$00@details@tip2@@IEAAXXZ @ 0x18010AB4C
 * Callers:
 *     ??1?$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180109880 (--1-$merged_data@U_tip_HapticPenAttachedTipTest_attributes@@Vtest_data_basic@tip2@@@details@tip2.c)
 * Callees:
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x18010A204 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip2::details::shared_data<0,0,1>::on_destroy(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 240) )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      tip2::details::shared_data<0,0,1>::complete_helper(a1, 4u);
  }
}
