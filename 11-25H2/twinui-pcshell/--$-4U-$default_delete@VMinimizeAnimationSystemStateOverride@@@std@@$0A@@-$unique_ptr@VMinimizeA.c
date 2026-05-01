/*
 * XREFs of ??$?4U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@$0A@@?$unique_ptr@VMinimizeAnimationSystemStateOverride@@U?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180487F94
 * Callers:
 *     _lambda_abbb930ddb92e06fa07b01ae54ef43e0_::operator() @ 0x180489B44 (_lambda_abbb930ddb92e06fa07b01ae54ef43e0_--operator().c)
 * Callees:
 *     ??R?$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSystemStateOverride@@@Z @ 0x180489BE4 (--R-$default_delete@VMinimizeAnimationSystemStateOverride@@@std@@QEBAXPEAVMinimizeAnimationSyste.c)
 */

__int64 *__fastcall std::unique_ptr<MinimizeAnimationSystemStateOverride>::operator=<std::default_delete<MinimizeAnimationSystemStateOverride>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<MinimizeAnimationSystemStateOverride>::operator()();
  return a1;
}
