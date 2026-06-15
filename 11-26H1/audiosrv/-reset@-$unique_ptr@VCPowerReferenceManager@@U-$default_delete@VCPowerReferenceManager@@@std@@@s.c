/*
 * XREFs of ?reset@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAXPEAVCPowerReferenceManager@@@Z @ 0x1800DBE10
 * Callers:
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800D9110 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ?Terminate@CAudioSrv@@UEAAXXZ @ 0x1800DAA10 (-Terminate@CAudioSrv@@UEAAXXZ.c)
 * Callees:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800D777C (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 */

void __fastcall std::unique_ptr<CPowerReferenceManager>::reset(__int64 a1, struct CPdcActivationClient *a2)
{
  CPowerReferenceManager *v2; // rax

  v2 = g_powerReferenceManager;
  g_powerReferenceManager = a2;
  if ( v2 )
    std::default_delete<CPowerReferenceManager>::operator()(a1, v2);
}
