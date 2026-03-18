/*
 * XREFs of GetCoalesceableMouseMessage @ 0x140143750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCoalesceableMouseMessage(int a1, unsigned __int64 *a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r11
  __int16 v7; // dx
  int v8; // ecx

  v4 = *a2;
  while ( 1 )
  {
    if ( !a3 )
      return 0LL;
    if ( *(_DWORD *)(a3 + 24) != 255 )
      break;
    a3 = *(_QWORD *)(a3 + 8);
  }
  if ( (*(_DWORD *)(a3 + 100) & 2) != 0
    || *(_DWORD *)(a3 + 24) != a1
    || a3 == -124
    || !a4
    || *(_DWORD *)(a3 + 124) != *a4
    || *(_DWORD *)(a3 + 128) != a4[1] )
  {
    return 0LL;
  }
  if ( ((a1 - 522) & 0xFFFFFFFB) == 0 )
  {
    v7 = *(_WORD *)(a3 + 34) + WORD1(v4);
    v8 = -v7;
    if ( v7 > 0 )
      v8 = v7;
    if ( v8 > 0x7FFF )
      return 0LL;
    *a2 = (unsigned __int16)v4 | ((unsigned __int64)(unsigned __int16)(*(_WORD *)(a3 + 34) + WORD1(v4)) << 16);
  }
  return a3;
}
