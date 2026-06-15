/*
 * XREFs of ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1800BB678
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800BAEF8 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSu.c)
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x1800BBBD0 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 *     _CProcessSubmixManager::GetAppSubmixClientContextHelper_::_1_::dtor$1 @ 0x1801676B3 (_CProcessSubmixManager--GetAppSubmixClientContextHelper_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VCAppSubmixClientContext@@@std@@QEBAXPEAVCAppSubmixClientContext@@@Z @ 0x1800BB7E8 (--R-$default_delete@VCAppSubmixClientContext@@@std@@QEBAXPEAVCAppSubmixClientContext@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CAppSubmixClientContext>::operator()();
  return result;
}
