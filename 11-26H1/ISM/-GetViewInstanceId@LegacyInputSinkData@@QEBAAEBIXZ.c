/*
 * XREFs of ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x180054E20
 * Callers:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180014B50 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x18002AE88 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 * Callees:
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180099060 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

char *__fastcall LegacyInputSinkData::GetViewInstanceId(LegacyInputSinkData *this)
{
  char *v2; // rbx
  unsigned __int8 v4; // al
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 20) )
  {
    v2 = (char *)this + 16;
  }
  else
  {
    v4 = *((_BYTE *)this + 8);
    LODWORD(v5) = 0;
    if ( v4 > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputSinkViewId(*(_QWORD *)this, &v5);
    v2 = (char *)this + 16;
    BYTE4(v5) = 1;
    *(_QWORD *)v2 = v5;
  }
  if ( !v2[4] )
    std::_Throw_bad_optional_access();
  return v2;
}
