/*
 * XREFs of USBParseGetChannelConfigForUnit @ 0x140042388
 * Callers:
 *     USBParseExtensionUnit @ 0x1400373E0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x1400375B0 (USBParseFeatureUnit.c)
 *     USBParseMixerUnit @ 0x1400387E0 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x140038A70 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x140038D10 (USBParseSelectorUnit.c)
 *     USBParseTerminalUnit @ 0x1400424C0 (USBParseTerminalUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x14002E3E8 (USBParseGetUnit.c)
 */

__int64 __fastcall USBParseGetChannelConfigForUnit(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbp
  unsigned __int8 *Unit; // rax
  unsigned __int64 v10; // r9
  unsigned __int8 v11; // al
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx

  v4 = 0;
  v5 = a1 + *(unsigned __int16 *)(a1 + 2);
  *a4 = 0;
  while ( 1 )
  {
    Unit = USBParseGetUnit(a1, a2, a3);
    if ( !Unit )
      return 0LL;
    v10 = *Unit;
    if ( (unsigned __int64)&Unit[v10] > v5 )
      return 3221225473LL;
    switch ( Unit[2] )
    {
      case 2u:
        if ( (unsigned __int8)v10 < 0xCu )
          return 3221225473LL;
        v14 = *((unsigned __int16 *)Unit + 4);
LABEL_26:
        *a4 = v14;
        return 0LL;
      case 3u:
        if ( (unsigned __int8)v10 < 9u )
          return 3221225473LL;
        v11 = Unit[7];
        goto LABEL_15;
      case 4u:
        if ( (unsigned __int8)v10 < 5u )
          return 3221225473LL;
        v15 = Unit[4];
        if ( v10 < v15 + 9 )
          return 3221225473LL;
        v14 = *(unsigned __int16 *)&Unit[v15 + 6];
        goto LABEL_26;
      case 5u:
        if ( (unsigned __int8)v10 <= 5u )
          return 3221225473LL;
        v11 = Unit[5];
        goto LABEL_15;
    }
    if ( Unit[2] != 6 )
      break;
    if ( (unsigned __int8)v10 < 6u )
      return 3221225473LL;
    v11 = Unit[4];
LABEL_15:
    ++v4;
    a3 = v11;
    if ( v4 >= 0x3E8 )
      return 0LL;
  }
  if ( (unsigned int)Unit[2] - 7 > 1 )
    return 0LL;
  if ( (unsigned __int8)v10 >= 7u )
  {
    v13 = Unit[6];
    if ( v10 >= v13 + 12 )
    {
      v14 = *(unsigned __int16 *)&Unit[v13 + 8];
      goto LABEL_26;
    }
  }
  return 3221225473LL;
}
