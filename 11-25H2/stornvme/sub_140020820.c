/*
 * XREFs of sub_140020820 @ 0x140020820
 * Callers:
 *     sub_1400109F0 @ 0x1400109F0 (sub_1400109F0.c)
 *     sub_14001DF50 @ 0x14001DF50 (sub_14001DF50.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140020820(__int64 a1)
{
  __int16 v1; // ax
  unsigned __int16 v2; // bx
  bool v4; // cf

  v1 = *(_WORD *)(a1 + 976);
  v2 = 0;
  while ( v1 )
  {
    v4 = v2 < 0x1388u;
    if ( v2 >= 0x1388u )
      return v4;
    StorPortStallExecution(10LL);
    v1 = *(_WORD *)(a1 + 976);
    ++v2;
  }
  return v2 < 0x1388u;
}
