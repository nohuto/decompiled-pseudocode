/*
 * XREFs of _dynamic_atexit_destructor_for__g_powerReferenceManager__ @ 0x18016CD60
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z @ 0x1800D777C (--R-$default_delete@VCPowerReferenceManager@@@std@@QEBAXPEAVCPowerReferenceManager@@@Z.c)
 */

void __fastcall dynamic_atexit_destructor_for__g_powerReferenceManager__(__int64 a1)
{
  if ( g_powerReferenceManager )
    std::default_delete<CPowerReferenceManager>::operator()(a1, g_powerReferenceManager);
}
