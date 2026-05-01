/*
 * XREFs of ??$set_flag_value@J@?$shared_data@$0A@$0A@$00@details@tip2@@QEAAXGPEBDJ@Z @ 0x18066526C
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x180669AEC (GetPidlsFromTaskbarLayout.c)
 *     _PersistEnterprisePinDataToRegistry_::_1_::catch$4 @ 0x1806DD4D4 (_PersistEnterprisePinDataToRegistry_--_1_--catch$4.c)
 *     _ShouldAddEnterprisePinToOutput_::_1_::catch$26 @ 0x1806DD581 (_ShouldAddEnterprisePinToOutput_--_1_--catch$26.c)
 * Callees:
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x180673F20 (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,1>::set_flag_value<long>(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rbx

  result = tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock();
  v6 = result;
  if ( result )
  {
    v7 = result + 16;
    PropVariantClear((PROPVARIANT *)(result + 16));
    result = 0LL;
    *(_OWORD *)v7 = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_WORD *)v7 = 3;
    *(_DWORD *)(v6 + 24) = a4;
  }
  return result;
}
