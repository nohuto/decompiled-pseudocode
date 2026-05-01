/*
 * XREFs of ??$emplace_back@AEAPEAUHWND__@@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@QEAAAEAPEAUHWND__@@AEAPEAU2@@Z @ 0x1804A2AB0
 * Callers:
 *     _lambda_cab7c03a2b5ac7190be81e45414ea272_::operator() @ 0x1801EBE2C (_lambda_cab7c03a2b5ac7190be81e45414ea272_--operator().c)
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___ @ 0x1804A2410 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_084b982c3a23c0cc356622f4c8c8a7df___.c)
 *     ?TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1804A9760 (-TryCreateThumbnailsForTopTwoAppsAndAddToExcludeList@CAppThumbnailWindow@@AEAAJAEAV-$vector@PEAU.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEB_K@?$vector@_KV?$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z @ 0x18025445C (--$_Emplace_reallocate@AEB_K@-$vector@_KV-$allocator@_K@std@@@std@@AEAAPEA_KQEA_KAEB_K@Z.c)
 */

char *__fastcall std::vector<HWND__ *>::emplace_back<HWND__ * &>(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rdx

  v3 = (__int64 *)a1[1];
  if ( v3 == (__int64 *)a1[2] )
    return std::vector<unsigned __int64>::_Emplace_reallocate<unsigned __int64 const &>(a1, (__int64)v3, a2);
  *v3 = *a2;
  v4 = a1[1];
  a1[1] = v4 + 8;
  return (char *)v4;
}
