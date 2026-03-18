/*
 * XREFs of sub_14002A860 @ 0x14002A860
 * Callers:
 *     sub_1400028E0 @ 0x1400028E0 (sub_1400028E0.c)
 *     sub_140026640 @ 0x140026640 (sub_140026640.c)
 * Callees:
 *     sub_140005000 @ 0x140005000 (sub_140005000.c)
 *     sub_140019038 @ 0x140019038 (sub_140019038.c)
 */

__int64 __fastcall sub_14002A860(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx

  v6 = 0;
  v7 = sub_140005000(a2);
  if ( *(_DWORD *)(v7 + 4220) )
  {
    if ( (unsigned int)sub_140019038() )
      return (unsigned int)StorPortExtendedFunction(134LL, a1, a2, a3);
    else
      return (unsigned int)StorPortExtendedFunction(
                             126LL,
                             a1,
                             a2,
                             (unsigned int)(unsigned __int16)*(_DWORD *)(v7 + 4144) + 1);
  }
  return v6;
}
