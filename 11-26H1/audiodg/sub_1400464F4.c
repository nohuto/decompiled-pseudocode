/*
 * XREFs of sub_1400464F4 @ 0x1400464F4
 * Callers:
 *     sub_1400463BC @ 0x1400463BC (sub_1400463BC.c)
 *     sub_14005C3DC @ 0x14005C3DC (sub_14005C3DC.c)
 *     sub_14006DF80 @ 0x14006DF80 (sub_14006DF80.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1400464F4(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rbx

  v3 = *a2;
  v4 = *a1;
  *a1 = *a2;
  if ( v3 )
    sub_1400B6010(v3);
  if ( v4 )
    sub_1400B6010(v4);
  return a1;
}
