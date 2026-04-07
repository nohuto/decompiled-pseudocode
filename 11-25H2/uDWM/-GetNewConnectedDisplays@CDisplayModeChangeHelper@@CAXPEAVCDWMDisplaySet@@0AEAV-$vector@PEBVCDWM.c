/*
 * XREFs of ?GetNewConnectedDisplays@CDisplayModeChangeHelper@@CAXPEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x1800682D4
 * Callers:
 *     ?IsNewConnectVariant@CDisplayModeChangeHelper@@CA?AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet@@0AEAV?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@@Z @ 0x180065E98 (-IsNewConnectVariant@CDisplayModeChangeHelper@@CA-AW4DisplayModeChangeResult@@PEAVCDWMDisplaySet.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x1800613E0 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 *     ?DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z @ 0x180068368 (-DisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@I@Z.c)
 *     ?GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z @ 0x18006837C (-GetMatchedPhysicalDisplayNoRef@CDWMDisplaySet@@QEBAPEBVCDWMDisplay@@PEBV2@@Z.c)
 */

const struct CDWMDisplay *__fastcall CDisplayModeChangeHelper::GetNewConnectedDisplays(
        CDWMDisplaySet *this,
        CDWMDisplaySet *a2,
        __int64 a3)
{
  const struct CDWMDisplay *result; // rax
  unsigned int i; // edi
  const struct CDWMDisplay *v8; // rbp
  _BYTE *v9; // rdx
  const struct CDWMDisplay *v10; // [rsp+48h] [rbp+10h] BYREF

  result = *(const struct CDWMDisplay **)a3;
  if ( *(_QWORD *)a3 != *(_QWORD *)(a3 + 8) )
    *(_QWORD *)(a3 + 8) = result;
  for ( i = 0; i < *((_DWORD *)a2 + 16); ++i )
  {
    v10 = CDWMDisplaySet::DisplayNoRef(a2, i);
    v8 = v10;
    result = CDWMDisplaySet::GetMatchedPhysicalDisplayNoRef(this, v10);
    if ( !result )
    {
      v9 = *(_BYTE **)(a3 + 8);
      if ( v9 == *(_BYTE **)(a3 + 16) )
      {
        result = (const struct CDWMDisplay *)std::vector<CDWMDisplay const *>::_Emplace_reallocate<CDWMDisplay const * const &>(
                                               (void **)a3,
                                               v9,
                                               &v10);
      }
      else
      {
        *(_QWORD *)v9 = v8;
        *(_QWORD *)(a3 + 8) += 8LL;
      }
    }
  }
  return result;
}
