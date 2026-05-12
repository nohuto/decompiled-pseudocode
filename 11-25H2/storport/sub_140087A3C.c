/*
 * XREFs of sub_140087A3C @ 0x140087A3C
 * Callers:
 *     sub_1400D4D04 @ 0x1400D4D04 (sub_1400D4D04.c)
 * Callees:
 *     sub_140088088 @ 0x140088088 (sub_140088088.c)
 *     sub_140088168 @ 0x140088168 (sub_140088168.c)
 *     sub_14008BEA0 @ 0x14008BEA0 (sub_14008BEA0.c)
 *     sub_14008C0D8 @ 0x14008C0D8 (sub_14008C0D8.c)
 */

__int64 __fastcall sub_140087A3C(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  unsigned int v6; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 64);
  if ( *(_DWORD *)v4 != 1314275652 )
    return 3221225659LL;
  if ( !v4 )
    return 3221225473LL;
  result = sub_140088168();
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v4 + 576) + 152LL) & 9) != 9 )
      return 3221225659LL;
    v6 = 4 * (*(_DWORD *)(a2 + 8) & 0x1FF);
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 576) + 152LL) & 2) != 0
      && (int)sub_140088088(a1) >= 0
      && (v6 & *(_DWORD *)(*(_QWORD *)(v4 + 576) + 156LL)) == 0 )
    {
      return 3221225659LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 576) + 152LL) & 4) != 0 )
    {
      v7 = 0;
      result = sub_14008BEA0(a1, &v7);
      if ( (int)result >= 0 )
      {
        if ( *(_BYTE *)(a2 + 12) )
        {
          if ( (v6 & v7) != 0 )
            return result;
          v6 |= v7;
        }
        else
        {
          if ( (v6 & v7) == 0 )
            return result;
          v6 = v7 & ~v6;
        }
      }
    }
    return sub_14008C0D8(a1, v6);
  }
  return result;
}
