/*
 * XREFs of sub_140020624 @ 0x140020624
 * Callers:
 *     sub_14001FD58 @ 0x14001FD58 (sub_14001FD58.c)
 * Callees:
 *     sub_14000C040 @ 0x14000C040 (sub_14000C040.c)
 *     sub_14000D650 @ 0x14000D650 (sub_14000D650.c)
 */

char __fastcall sub_140020624(__int64 a1)
{
  unsigned __int8 v2; // di
  unsigned __int8 i; // r10
  __int64 v4; // rbx
  unsigned __int16 *v5; // r11
  unsigned int v6; // eax
  char v7; // r9
  char v8; // r10
  __int64 v9; // r11
  unsigned int v10; // r8d

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 1560) + 263LL) + 1;
  if ( (*(_BYTE *)(sub_14000C040(a1, 0) + 3) & 2) != 0 )
    return 0;
  for ( i = 1; i < v2; i = v8 + 1 )
  {
    v4 = sub_14000C040(a1, i);
    sub_14000D650(v5);
    v6 = sub_14000D650((unsigned __int16 *)v4);
    if ( v6 > v10 )
      return 0;
    if ( (*(_BYTE *)(v4 + 3) & 2) != 0 )
    {
      if ( v7 )
      {
        if ( (*(_BYTE *)(v9 + 3) & 2) == 0 )
          return 0;
      }
      else if ( (*(_BYTE *)(v9 + 3) & 2) != 0 )
      {
        return 0;
      }
    }
    else if ( v7 )
    {
      return 0;
    }
  }
  return 1;
}
