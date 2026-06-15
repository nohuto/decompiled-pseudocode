/*
 * XREFs of ??R?$default_delete@VCStreamClassPolicyGains@@@std@@QEBAXPEAVCStreamClassPolicyGains@@@Z @ 0x1800424DC
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x1800423E4 (--1-$unique_ptr@VCStreamClassPolicyGains@@U-$default_delete@VCStreamClassPolicyGains@@@std@@@std.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x180042404 (--1CStreamClassPolicyGains@@QEAA@XZ.c)
 */

void __fastcall std::default_delete<CStreamClassPolicyGains>::operator()(__int64 a1, CStreamClassPolicyGains *a2)
{
  if ( a2 )
  {
    CStreamClassPolicyGains::~CStreamClassPolicyGains(a2);
    operator delete(a2, (const struct std::nothrow_t *)0x1A8);
  }
}
