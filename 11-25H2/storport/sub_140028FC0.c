/*
 * XREFs of sub_140028FC0 @ 0x140028FC0
 * Callers:
 *     sub_14004EEC0 @ 0x14004EEC0 (sub_14004EEC0.c)
 * Callees:
 *     sub_140029040 @ 0x140029040 (sub_140029040.c)
 */

bool __fastcall sub_140028FC0(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(unsigned __int8 *)(a2 + 2);
  if ( (_BYTE)v2 == 40 )
    v2 = *(_DWORD *)(a2 + 20);
  if ( v2 == 9 )
    return 1;
  if ( v2 != 8 )
  {
    switch ( v2 )
    {
      case 0:
      case 2:
      case 7:
      case 18:
      case 19:
      case 23:
      case 32:
      case 36:
      case 37:
        return 1;
      case 16:
        return (unsigned __int8)sub_140029040(*(_QWORD *)(a1 + 24)) != 0;
      default:
        return 0;
    }
  }
  return *(_BYTE *)(*(_QWORD *)(a1 + 24) + 467LL) != 0;
}
