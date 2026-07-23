/*
 * XREFs of RtlCharToInteger @ 0x180023F10
 * Callers:
 *     LdrpEnclaveAddForwarderModules @ 0x180022830 (LdrpEnclaveAddForwarderModules.c)
 *     LdrpResolveForwarder @ 0x1800238E0 (LdrpResolveForwarder.c)
 *     LdrpResolveProcedureAddress @ 0x1800C3200 (LdrpResolveProcedureAddress.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  ULONG v3; // r11d
  PCSZ v4; // r10
  CHAR v5; // al
  const CHAR *v6; // rcx
  char v7; // r9
  CHAR v8; // bl
  PCSZ v9; // rax
  int v10; // ecx
  unsigned int v11; // eax
  ULONG v12; // eax
  _BYTE *v14; // r10

  v3 = Base;
  v4 = String;
  v5 = *String;
  while ( 1 )
  {
    v6 = v4;
    v7 = v5;
    v8 = v5;
    ++v4;
    if ( v5 > 32 )
      break;
    v5 = *v4;
    if ( !*v4 )
    {
      v4 = v6;
      break;
    }
  }
  if ( ((v7 - 43) & 0xFD) == 0 )
    v7 = *v4++;
  v9 = v4;
  switch ( Base )
  {
    case 0u:
      v3 = 10;
      v10 = 0;
      if ( v7 == 48 )
      {
        v7 = *v4;
        v14 = v4 + 1;
        switch ( v7 )
        {
          case 'x':
            v10 = 4;
            v3 = 16;
            v7 = *v14;
            v4 = v14 + 1;
            break;
          case 'o':
            v10 = 3;
            v3 = 8;
            v7 = *v14;
            v4 = v14 + 1;
            break;
          case 'b':
            v10 = 1;
            v3 = 2;
            v7 = *v14;
            v4 = v14 + 1;
            break;
          default:
            v4 = v9 + 1;
            break;
        }
      }
      goto LABEL_7;
    case 2u:
      v10 = 1;
      break;
    case 8u:
      v10 = 3;
      Base = 0;
      goto LABEL_7;
    case 0xAu:
      Base = 0;
      v10 = 0;
      goto LABEL_7;
    case 0x10u:
      v10 = 4;
      break;
    default:
      return -1073741811;
  }
  Base = 0;
LABEL_7:
  while ( v7 )
  {
    if ( (unsigned __int8)(v7 - 48) > 9u )
    {
      if ( (unsigned __int8)(v7 - 65) <= 5u )
      {
        v11 = v7 - 55;
      }
      else
      {
        if ( (unsigned __int8)(v7 - 97) > 5u )
          break;
        v11 = v7 - 87;
      }
    }
    else
    {
      v11 = v7 - 48;
    }
    if ( v11 >= v3 )
      break;
    Base = v10 ? v11 | (Base << v10) : v11 + v3 * Base;
    v7 = *v4++;
  }
  v12 = -Base;
  if ( v8 != 45 )
    v12 = Base;
  *Value = v12;
  return 0;
}
