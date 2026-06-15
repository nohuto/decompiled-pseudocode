/*
 * XREFs of ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x1800423E4
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@QEAA@XZ @ 0x1800423BC (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCStre.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$1 @ 0x18004C370 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x1800424DC (--R-$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z.c)
 */

__int64 __fastcall std::unique_ptr<CStreamClassPolicyGains>::~unique_ptr<CStreamClassPolicyGains>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::default_delete<CStreamClassPolicyGains>::operator()();
  return result;
}
