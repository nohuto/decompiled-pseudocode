/*
 * XREFs of sub_1400B251C @ 0x1400B251C
 * Callers:
 *     sub_1400BA188 @ 0x1400BA188 (sub_1400BA188.c)
 * Callees:
 *     sub_1400710E8 @ 0x1400710E8 (sub_1400710E8.c)
 */

__int64 __fastcall sub_1400B251C(__int64 a1, __int16 a2, _DWORD *a3)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1:
      if ( *(_BYTE *)(a1 + 3) == 6 )
        return sub_1400710E8(
                 (char *)a3 + 2,
                 32LL,
                 L"Year: %c%c%c%c Week: %c%c",
                 *(unsigned __int8 *)(a1 + 4),
                 *(unsigned __int8 *)(a1 + 5),
                 *(unsigned __int8 *)(a1 + 6),
                 *(unsigned __int8 *)(a1 + 7),
                 *(unsigned __int8 *)(a1 + 8),
                 *(unsigned __int8 *)(a1 + 9));
      break;
    case 3:
      if ( *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        a3[18] = result;
      }
      break;
    case 4:
      if ( *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        a3[17] = result;
      }
      break;
    case 5:
      if ( *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        a3[20] = result;
      }
      break;
    default:
      if ( a2 == 6 && *(_BYTE *)(a1 + 3) == 4 )
      {
        result = _byteswap_ulong(*(_DWORD *)(a1 + 4));
        a3[19] = result;
      }
      break;
  }
  return result;
}
