/*
 * XREFs of USBParseCountOutputChannelsForUnit @ 0x140042250
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

__int64 __fastcall USBParseCountOutputChannelsForUnit(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbp
  unsigned __int8 *Unit; // rax
  unsigned __int8 *v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned __int8 v17; // al
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx

  v4 = 0;
  v5 = a1 + *(unsigned __int16 *)(a1 + 2);
  *a4 = 0;
  while ( 1 )
  {
    Unit = USBParseGetUnit(a1, a2, a3);
    v10 = Unit;
    if ( !Unit )
      return 0LL;
    v11 = *Unit;
    if ( (unsigned __int64)&Unit[v11] > v5 )
      return 3221225473LL;
    v12 = Unit[2] - 2;
    if ( !v12 )
    {
      if ( (unsigned __int8)v11 >= 0xCu )
      {
        v20 = v10[7];
        goto LABEL_27;
      }
      return 3221225473LL;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      if ( (unsigned __int8)v11 < 9u )
        return 3221225473LL;
      v17 = v10[7];
      goto LABEL_15;
    }
    v14 = v13 - 1;
    if ( !v14 )
      break;
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( (unsigned int)(v16 - 1) >= 2 )
        {
          *a4 = 0;
          return 0LL;
        }
        if ( (unsigned __int8)v11 >= 7u )
        {
          v19 = v10[6];
          if ( v11 >= v19 + 7 )
          {
            v20 = v10[v19 + 7];
LABEL_27:
            *a4 = v20;
            return 0LL;
          }
        }
        return 3221225473LL;
      }
      if ( (unsigned __int8)v11 < 6u )
        return 3221225473LL;
      v17 = v10[4];
    }
    else
    {
      if ( (unsigned __int8)v11 <= 5u )
        return 3221225473LL;
      v17 = v10[5];
    }
LABEL_15:
    ++v4;
    a3 = v17;
    if ( v4 >= 0x3E8 )
      return 0LL;
  }
  if ( (unsigned __int8)v11 >= 5u )
  {
    v21 = v10[4];
    if ( v11 >= v21 + 5 )
    {
      v20 = v10[v21 + 5];
      goto LABEL_27;
    }
  }
  return 3221225473LL;
}
