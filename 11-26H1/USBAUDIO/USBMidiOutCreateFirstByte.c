/*
 * XREFs of USBMidiOutCreateFirstByte @ 0x14003EC30
 * Callers:
 *     USBMIDICreateEventPackets @ 0x14003C994 (USBMIDICreateEventPackets.c)
 * Callees:
 *     <none>
 */

bool __fastcall USBMidiOutCreateFirstByte(__int64 a1, char *a2, unsigned __int8 a3)
{
  char v3; // r9
  char v5; // cl
  char v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  char v10; // cl
  char v11; // cl
  char v12; // cl

  v3 = 0;
  if ( (a3 & 0x80u) == 0 )
  {
    v9 = *(_BYTE *)(a1 + 69);
    if ( v9 )
    {
      v10 = *a2;
      a2[1] = v9;
      v11 = (*(_BYTE *)(a1 + 69) >> 4) | v10 & 0xF0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 68) )
        return v3;
      v12 = *a2 & 0xF4;
      a2[1] = a3;
      v11 = v12 | 4;
    }
    *a2 = v11;
    return v3;
  }
  a2[1] = a3;
  *(_BYTE *)(a1 + 69) = 0;
  if ( (a3 & 0xF8) == 0xF8 )
  {
    v5 = *(_BYTE *)(a1 + 68);
    v6 = *a2;
    if ( v5 )
      v7 = v6 & 0xF0 | 4;
    else
      v7 = v6 | 0xF;
    *a2 = v7;
    return v5 == 0;
  }
  if ( a3 == 0xF0 )
  {
    *a2 = *a2 & 0xF0 | 4;
    *(_BYTE *)(a1 + 68) = 1;
    return v3;
  }
  *(_BYTE *)(a1 + 68) = 0;
  if ( (unsigned __int8)(a3 + 0x80) <= 0x6Fu )
  {
    *(_BYTE *)(a1 + 69) = a3;
    v8 = (a3 >> 4) | *a2 & 0xF0;
LABEL_19:
    *a2 = v8;
    return v3;
  }
  if ( (a3 & 0xF0) != 0xF0 )
    return v3;
  switch ( a3 )
  {
    case 0xF1u:
      goto LABEL_18;
    case 0xF2u:
      v8 = *a2 & 0xF0 | 3;
      goto LABEL_19;
    case 0xF3u:
LABEL_18:
      v8 = *a2 & 0xF0 | 2;
      goto LABEL_19;
  }
  if ( (unsigned int)a3 - 246 <= 1 )
  {
    v3 = 1;
    *a2 = *a2 & 0xF0 | 5;
  }
  return v3;
}
