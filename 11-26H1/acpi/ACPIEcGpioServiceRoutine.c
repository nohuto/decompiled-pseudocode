/*
 * XREFs of ACPIEcGpioServiceRoutine @ 0x14004B360
 * Callers:
 *     <none>
 * Callees:
 *     ACPIEcMaskInterrupt @ 0x140020410 (ACPIEcMaskInterrupt.c)
 */

char __fastcall ACPIEcGpioServiceRoutine(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 2298) & 1) == 0 )
    ACPIEcMaskInterrupt(a2);
  KeInsertQueueDpc((PRKDPC)(a2 + 2232), 0LL, 0LL);
  return 0;
}
