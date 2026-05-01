/*
 * XREFs of ?Release@?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805AD510
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805AAE8C (--1-$com_ptr_t@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_polic.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805AD7E0 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805ADD04 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805AAEAC (--1-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 80);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>::~merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
