/*
 * XREFs of ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180058214
 * Callers:
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800069FC (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 * Callees:
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x1800582A8 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x1800582BC (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800B2990 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 */

const struct CDWMDisplay *__fastcall CDisplayModeChangeHelper::GetNewConnectedDisplays(
        CDWMDisplaySet *this,
        CDWMDisplaySet *a2,
        __int64 *a3)
{
  const struct CDWMDisplay *result; // rax
  unsigned int i; // edi
  const struct CDWMDisplay *v8; // rbp
  const struct CDWMDisplay **v9; // rdx
  const struct CDWMDisplay *v10; // [rsp+48h] [rbp+10h] BYREF

  result = (const struct CDWMDisplay *)*a3;
  if ( *a3 != a3[1] )
    a3[1] = (__int64)result;
  for ( i = 0; i < *((_DWORD *)a2 + 16); ++i )
  {
    v10 = CDWMDisplaySet::DisplayNoRef(a2, i);
    v8 = v10;
    result = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(this, v10);
    if ( !result )
    {
      v9 = (const struct CDWMDisplay **)a3[1];
      if ( v9 == (const struct CDWMDisplay **)a3[2] )
      {
        result = (const struct CDWMDisplay *)std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(
                                               a3,
                                               v9,
                                               &v10);
      }
      else
      {
        *v9 = v8;
        a3[1] += 8LL;
      }
    }
  }
  return result;
}
