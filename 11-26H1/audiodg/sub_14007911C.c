/*
 * XREFs of sub_14007911C @ 0x14007911C
 * Callers:
 *     sub_140079B90 @ 0x140079B90 (sub_140079B90.c)
 *     sub_14007A820 @ 0x14007A820 (sub_14007A820.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14007911C(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx

  v3 = *a1;
  v4 = 0;
  *a3 = 0LL;
  if ( !v3 )
    return 2147942487LL;
  v5 = *a1;
  if ( v5 )
    return (unsigned int)sub_1400B6010(v5);
  return v4;
}
