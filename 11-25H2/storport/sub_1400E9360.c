/*
 * XREFs of sub_1400E9360 @ 0x1400E9360
 * Callers:
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     sub_14002CDD0 @ 0x14002CDD0 (sub_14002CDD0.c)
 */

__int64 __fastcall sub_1400E9360(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  int v4; // ebp
  int v5; // esi

  v1 = 0;
  v3 = 0;
  if ( *(_WORD *)(a1 + 26) )
  {
    while ( 2 )
    {
      v4 = 0;
      while ( *(_DWORD *)(*(_QWORD *)(a1 + 864) + ((unsigned __int64)v3 << 7) + 56) )
      {
        sub_14002CDD0(0x3E8u);
        if ( (unsigned int)++v4 >= 0x7D0 )
        {
LABEL_10:
          v1 = -1073741643;
          *(_DWORD *)(*(_QWORD *)(a1 + 1272) + 48LL) |= 8u;
          return v1;
        }
      }
      if ( ++v3 < *(unsigned __int16 *)(a1 + 26) )
        continue;
      break;
    }
  }
  v5 = 0;
  while ( *(_DWORD *)(*(_QWORD *)(a1 + 856) + 56LL) )
  {
    sub_14002CDD0(0x3E8u);
    if ( (unsigned int)++v5 >= 0x7D0 )
      goto LABEL_10;
  }
  return v1;
}
