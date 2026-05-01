/*
 * XREFs of ??1?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@QEAA@XZ @ 0x180665944
 * Callers:
 *     ?Release@?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@AEAAKXZ @ 0x18066EE34 (-Release@-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic.c)
 * Callees:
 *     ??1stored_flag_requirements@details@tip2@@QEAA@XZ @ 0x180665C30 (--1stored_flag_requirements@details@tip2@@QEAA@XZ.c)
 *     ?complete_helper@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z @ 0x180673728 (-complete_helper@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAXW4TestQueryOptions@@@Z.c)
 */

void __fastcall tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::~merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>(
        __int64 a1)
{
  *(_QWORD *)a1 = &tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>::`vftable';
  if ( *(_QWORD *)(a1 + 240) && (*(_BYTE *)(a1 + 28) & 1) == 0 )
    tip2::details::shared_data<0,0,1>::complete_helper(a1 + 8, 4LL);
  tip2::details::stored_flag_requirements::~stored_flag_requirements((tip2::details::stored_flag_requirements *)(a1 + 256));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 8);
}
