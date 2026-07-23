/*
 * XREFs of SpiMax311SetBaud @ 0x140726EA0
 * Callers:
 *     SpiMax311InitializePort @ 0x140726D80 (SpiMax311InitializePort.c)
 * Callees:
 *     SpiSend16 @ 0x140727028 (SpiSend16.c)
 */

char __fastcall SpiMax311SetBaud(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  char result; // al

  if ( a1 && *(_QWORD *)a1 )
  {
    if ( a2 > 0x3840 )
    {
      switch ( a2 )
      {
        case 0x4B00u:
          v4 = 49162LL;
          goto LABEL_35;
        case 0x7080u:
          v4 = 49155LL;
          goto LABEL_35;
        case 0x9600u:
          v4 = 49161LL;
          goto LABEL_35;
        case 0xE100u:
          v4 = 49154LL;
          goto LABEL_35;
        case 0x12C00u:
          v4 = 49160LL;
          goto LABEL_35;
        case 0x38400u:
          v4 = 49152LL;
          goto LABEL_35;
      }
    }
    else
    {
      switch ( a2 )
      {
        case 0x3840u:
          v4 = 49156LL;
          goto LABEL_35;
        case 0x258u:
          v4 = 49167LL;
          goto LABEL_35;
        case 0x4B0u:
          v4 = 49166LL;
          goto LABEL_35;
        case 0x708u:
          v4 = 49159LL;
          goto LABEL_35;
        case 0x960u:
          v4 = 49165LL;
          goto LABEL_35;
        case 0xE10u:
          v4 = 49158LL;
          goto LABEL_35;
        case 0x12C0u:
          v4 = 49164LL;
          goto LABEL_35;
        case 0x1C20u:
          v4 = 49157LL;
          goto LABEL_35;
        case 0x2580u:
          v4 = 49163LL;
LABEL_35:
          SpiSend16(a1, v4);
          result = 1;
          *(_DWORD *)(a1 + 8) = a2;
          return result;
      }
    }
    v4 = 49153LL;
    goto LABEL_35;
  }
  return 0;
}
