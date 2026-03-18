/*
 * XREFs of HUBDSM_WritingCustomPropertiesInRegistry @ 0x140026220
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_ParseAndWriteCustomPropertiesInRegistry @ 0x140086E00 (HUBMISC_ParseAndWriteCustomPropertiesInRegistry.c)
 */

__int64 __fastcall HUBDSM_WritingCustomPropertiesInRegistry(__int64 a1)
{
  return HUBMISC_ParseAndWriteCustomPropertiesInRegistry(*(_QWORD *)(a1 + 960));
}
