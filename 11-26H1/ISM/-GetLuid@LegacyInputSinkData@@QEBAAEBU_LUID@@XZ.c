/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x18002DB7C
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800142E0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z @ 0x18002D8CC (-SetLegacyInputSinkData@InputSite@@QEAAX$$QEAVLegacyInputSinkData@@@Z.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800F7300 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 * Callees:
 *     ?_Throw_bad_variant_access@std@@YAXXZ @ 0x180099060 (-_Throw_bad_variant_access@std@@YAXXZ.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  unsigned __int8 v2; // al
  bool v3; // zf
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 36) )
  {
    v2 = *((_BYTE *)this + 8);
    v5 = 0LL;
    if ( v2 > 1u )
      std::_Throw_bad_variant_access();
    NtQueryCompositionInputSinkLuid(*(_QWORD *)this, &v5);
    v3 = *((_BYTE *)this + 36) == 0;
    *(_QWORD *)((char *)this + 28) = v5;
    if ( v3 )
      *((_BYTE *)this + 36) = 1;
  }
  return (const struct _LUID *)((char *)this + 28);
}
