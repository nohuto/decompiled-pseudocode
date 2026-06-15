/*
 * XREFs of sub_1400278AC @ 0x1400278AC
 * Callers:
 *     sub_14002736C @ 0x14002736C (sub_14002736C.c)
 *     sub_140027854 @ 0x140027854 (sub_140027854.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400278AC(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  int i; // ecx

  v2 = (_QWORD *)qword_1400E8780;
  for ( i = 0; i < dword_1400E8788; ++i )
  {
    if ( *v2 == *a2 )
      return (unsigned int)i;
    ++v2;
  }
  return 0xFFFFFFFFLL;
}
