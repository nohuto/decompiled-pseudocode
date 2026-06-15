/*
 * XREFs of sub_140005E68 @ 0x140005E68
 * Callers:
 *     sub_140009D00 @ 0x140009D00 (sub_140009D00.c)
 *     sub_140046698 @ 0x140046698 (sub_140046698.c)
 * Callees:
 *     sub_140006260 @ 0x140006260 (sub_140006260.c)
 */

__int64 __fastcall sub_140005E68(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 4) )
  {
    *(_DWORD *)(a1 + 4) = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      if ( *(_DWORD *)(a1 + 16) == 1 )
        return sub_1400338C0();
    }
    else
    {
      return sub_140006260();
    }
  }
  return result;
}
