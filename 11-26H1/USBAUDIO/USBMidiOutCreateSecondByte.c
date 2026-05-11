/*
 * XREFs of USBMidiOutCreateSecondByte @ 0x14003ED30
 * Callers:
 *     USBMIDICreateEventPackets @ 0x14003C994 (USBMIDICreateEventPackets.c)
 * Callees:
 *     <none>
 */

char __fastcall USBMidiOutCreateSecondByte(__int64 a1, _BYTE *a2, char a3)
{
  char v3; // r9
  char v4; // al
  char v5; // al

  v3 = 0;
  if ( a3 >= 0 )
  {
    v5 = *a2 & 0xF;
    a2[2] = a3;
    if ( v5 != 12 && v5 != 13 && v5 != 2 )
      return v3;
    return 1;
  }
  if ( (a3 & 0xF8) != 0xF8 )
  {
    if ( a3 != -9 || !*(_BYTE *)(a1 + 68) )
      return v3;
    v4 = *a2 & 0xF6;
    a2[2] = -9;
    *a2 = v4 | 6;
    *(_BYTE *)(a1 + 68) = 0;
    return 1;
  }
  if ( *(_BYTE *)(a1 + 68) )
    a2[2] = a3;
  return v3;
}
