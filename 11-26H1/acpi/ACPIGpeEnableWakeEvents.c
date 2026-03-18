/*
 * XREFs of ACPIGpeEnableWakeEvents @ 0x14002FC3C
 * Callers:
 *     ACPIWakeEnableWakeEvents @ 0x14002FBD0 (ACPIWakeEnableWakeEvents.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x14002FCB0 (ACPIWriteGpeEnableRegister.c)
 *     READ_PM1_ENABLE @ 0x14002FD50 (READ_PM1_ENABLE.c)
 */

__int64 ACPIGpeEnableWakeEvents()
{
  _WORD *v0; // rbx
  __int64 i; // rdi
  void *v2; // rdx
  __int64 result; // rax

  v0 = AcpiInformation;
  for ( i = 0LL; (unsigned int)i < *((unsigned __int16 *)AcpiInformation + 51); v0 = AcpiInformation )
  {
    v2 = GpeWakeEnable;
    LOBYTE(v2) = *((_BYTE *)GpeWakeEnable + i);
    ACPIWriteGpeEnableRegister((unsigned int)i, v2);
    *((_BYTE *)GpeSavedWakeMask + i) = *((_BYTE *)GpeWakeEnable + i);
    i = (unsigned int)(i + 1);
  }
  result = READ_PM1_ENABLE();
  v0[57] = result;
  return result;
}
