/*
 * XREFs of HalpRestoreLegacyDmaControllerState @ 0x140BF2A00
 * Callers:
 *     HalpAcpiPostSleep @ 0x140BF2AA0 (HalpAcpiPostSleep.c)
 * Callees:
 *     HalpIoDelay @ 0x140727680 (HalpIoDelay.c)
 */

void HalpRestoreLegacyDmaControllerState()
{
  unsigned __int8 v0; // di
  char *v1; // rbx
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  __int64 v4; // rdx

  __outbyte(0xFu, 0xFu);
  __outbyte(0xDEu, 0xEu);
  HalpIoDelay();
  __outbyte(8u, 0);
  __outbyte(0xD0u, 0);
  HalpIoDelay();
  v0 = 0;
  v1 = (char *)&PcDmaChannelState;
  do
  {
    if ( v1[20] )
    {
      v2 = v1[17];
      v3 = *(_QWORD *)v1;
      if ( v0 >= 4u )
      {
        __outbyte(v3 + 22, v2);
        v4 = *(_QWORD *)v1 + 20LL;
      }
      else
      {
        __outbyte(v3 + 11, v2);
        v4 = *(_QWORD *)v1 + 10LL;
      }
      __outbyte(v4, v1[19]);
      HalpIoDelay();
    }
    ++v0;
    v1 += 24;
  }
  while ( v0 < 8u );
}
