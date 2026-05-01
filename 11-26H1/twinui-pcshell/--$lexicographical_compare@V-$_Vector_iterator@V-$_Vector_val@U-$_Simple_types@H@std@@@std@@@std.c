/*
 * XREFs of ??$lexicographical_compare@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@std@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@2@U?$less@X@2@@std@@YA_NV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@0@0V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@H@std@@@std@@@0@1U?$less@X@0@@Z @ 0x180208BA8
 * Callers:
 *     _anonymous_namespace_::DashboardExtensionVersion::operator__ @ 0x180208B80 (_anonymous_namespace_--DashboardExtensionVersion--operator__.c)
 * Callees:
 *     __std_mismatch_4 @ 0x1802CD340 (__std_mismatch_4.c)
 */

bool __fastcall std::lexicographical_compare<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<int>>>,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<int>>>,std::less<void>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  __int64 v9; // rax

  v5 = (a2 - a1) >> 2;
  v6 = (a4 - a3) >> 2;
  v7 = v5;
  if ( v6 < v5 )
    v7 = v6;
  v9 = _std_mismatch_4(a1, a3, v7);
  if ( v9 == v6 )
    return 0;
  if ( v9 == v5 )
    return 1;
  return *(_DWORD *)(a1 + 4 * v9) < *(_DWORD *)(a3 + 4 * v9);
}
