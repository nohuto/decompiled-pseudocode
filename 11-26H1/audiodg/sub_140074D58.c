/*
 * XREFs of sub_140074D58 @ 0x140074D58
 * Callers:
 *     sub_140074904 @ 0x140074904 (sub_140074904.c)
 *     sub_1400751A0 @ 0x1400751A0 (sub_1400751A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140074D58(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // r8
  int i; // ecx

  v2 = (_DWORD *)qword_1400E87E0;
  for ( i = 0; i < dword_1400E87F0; ++i )
  {
    if ( *v2 == *a2 )
      return (unsigned int)i;
    ++v2;
  }
  return 0xFFFFFFFFLL;
}
