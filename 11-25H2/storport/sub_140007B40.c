/*
 * XREFs of sub_140007B40 @ 0x140007B40
 * Callers:
 *     sub_140004890 @ 0x140004890 (sub_140004890.c)
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 *     sub_140007BD8 @ 0x140007BD8 (sub_140007BD8.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_1400FC9A0 @ 0x1400FC9A0 (sub_1400FC9A0.c)
 *     sub_1400FD3D0 @ 0x1400FD3D0 (sub_1400FD3D0.c)
 *     sub_1400FDA54 @ 0x1400FDA54 (sub_1400FDA54.c)
 *     sub_140103A50 @ 0x140103A50 (sub_140103A50.c)
 *     sub_14010A138 @ 0x14010A138 (sub_14010A138.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140007B40(int a1)
{
  char result; // al

  if ( a1 > -1073741667 )
  {
    switch ( a1 )
    {
      case -1073741643:
        return 9;
      case -1073741632:
        return 8;
      case -1073741300:
        return 37;
      case -1073740682:
        return 24;
      default:
        result = 4;
        if ( a1 >= 0 )
          return 1;
        break;
    }
  }
  else
  {
    switch ( a1 )
    {
      case -1073741667:
        return 10;
      case -2147483643:
        return 18;
      case -2147483631:
        return 5;
      case -1073741808:
        return 34;
      case -1073741790:
        return 23;
      default:
        result = 4;
        if ( a1 == -1073741670 )
          return 48;
        break;
    }
  }
  return result;
}
