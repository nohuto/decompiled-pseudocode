/*
 * XREFs of HalpLbrInitializeIntel @ 0x140BF5394
 * Callers:
 *     HalpLbrInitialize @ 0x140BF5224 (HalpLbrInitialize.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpLbrInitializeIntel(char a1, unsigned __int8 a2)
{
  unsigned int v2; // r9d
  unsigned int v14; // ecx
  unsigned int v20; // ecx
  unsigned __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax

  v2 = a2;
  _RAX = 7LL;
  __asm { cpuid }
  if ( (_RDX & 0x80000) != 0 )
  {
    dword_140F87A40 = 2;
    _RAX = 28LL;
    __asm { cpuid }
    _BitScanReverse((unsigned int *)&_RAX, (unsigned __int8)_RAX);
    dword_140F87A44 = _RBX;
    dword_140F87A2C = 8 * _RAX + 8;
    goto LABEL_48;
  }
  if ( a1 != 6 )
    goto LABEL_48;
  dword_140F87A40 = 1;
  if ( v2 > 0x55 )
  {
    if ( v2 > 0x7D )
    {
      if ( v2 == 126 || v2 == 140 || v2 == 141 || v2 == 142 || v2 == 158 || v2 == 165 || v2 == 166 || v2 - 167 <= 1 )
        goto LABEL_47;
    }
    else
    {
      switch ( v2 )
      {
        case '}':
          goto LABEL_47;
        case 'V':
          goto LABEL_16;
        case '\\':
        case '^':
        case '_':
        case 'f':
        case 'g':
        case 'j':
        case 'l':
        case 'z':
          goto LABEL_47;
      }
    }
LABEL_48:
    if ( !dword_140F87A2C )
      return 0;
    goto LABEL_49;
  }
  if ( v2 == 85 )
    goto LABEL_47;
  if ( v2 > 0x3A )
  {
    if ( v2 == 60 || v2 == 61 || v2 == 62 || v2 == 63 || v2 == 69 || v2 == 70 || v2 == 71 )
      goto LABEL_16;
    v14 = v2 - 78;
    if ( v2 != 78 )
      goto LABEL_25;
LABEL_47:
    dword_140F87A2C = 32;
    goto LABEL_48;
  }
  switch ( v2 )
  {
    case 0x3Au:
      goto LABEL_16;
    case 0x1Au:
      goto LABEL_16;
    case 0x1Eu:
      goto LABEL_16;
    case 0x1Fu:
      goto LABEL_16;
    case 0x25u:
      goto LABEL_16;
    case 0x2Au:
      goto LABEL_16;
    case 0x2Cu:
      goto LABEL_16;
    case 0x2Du:
      goto LABEL_16;
  }
  v14 = v2 - 46;
  if ( v2 == 46 )
    goto LABEL_16;
LABEL_25:
  if ( v14 != 1 )
    goto LABEL_48;
LABEL_16:
  dword_140F87A2C = 16;
LABEL_49:
  _RAX = 10LL;
  __asm { cpuid }
  v20 = (unsigned __int8)_RAX;
  if ( (_BYTE)_RAX )
  {
    _RAX = 1LL;
    HalpLbrIsFreezeLegacy = v20 <= 3;
    __asm { cpuid }
    if ( (_RCX & 0x8000) == 0 )
      return 1;
    v26 = __readmsr(0x345u);
    v27 = (v26 & 0x3F) - 3;
    if ( v27 )
    {
      v28 = v27 - 1;
      if ( !v28 )
      {
        HalpLbrMostSignificantFromAddrBit = 60;
        return 1;
      }
      v29 = v28 - 1;
      if ( !v29 )
        goto LABEL_56;
      v30 = v29 - 1;
      if ( v30 )
      {
        if ( v30 == 1 )
LABEL_56:
          HalpLbrInfoSupported = 1;
        return 1;
      }
      HalpLbrMostSignificantToAddrBit = 47;
    }
    HalpLbrMostSignificantFromAddrBit = 62;
    return 1;
  }
  return 0;
}
