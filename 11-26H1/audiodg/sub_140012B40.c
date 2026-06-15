/*
 * XREFs of sub_140012B40 @ 0x140012B40
 * Callers:
 *     sub_140012D6C @ 0x140012D6C (sub_140012D6C.c)
 * Callees:
 *     sub_140012BF0 @ 0x140012BF0 (sub_140012BF0.c)
 *     sub_140012C9C @ 0x140012C9C (sub_140012C9C.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140012B40(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  int v5; // esi

  *a1 = 0LL;
  v2 = sub_140049338(568LL, &unk_1400C75FC);
  if ( !v2 )
    return 2147942414LL;
  v4 = sub_140012C9C(v2);
  v5 = sub_140012BF0(v4);
  if ( v5 >= 0 )
  {
    if ( v4 )
      sub_1400B6010(v4);
    *a1 = v4;
    if ( v4 )
      sub_1400B6010(v4);
    return 0LL;
  }
  else
  {
    if ( v4 )
      sub_1400B6010(v4);
    return (unsigned int)v5;
  }
}
