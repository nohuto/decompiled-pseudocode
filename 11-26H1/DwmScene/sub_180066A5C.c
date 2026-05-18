/*
 * XREFs of sub_180066A5C @ 0x180066A5C
 * Callers:
 *     sub_180064090 @ 0x180064090 (sub_180064090.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18004E184 @ 0x18004E184 (sub_18004E184.c)
 *     sub_18007ED34 @ 0x18007ED34 (sub_18007ED34.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180066A5C(__int64 a1)
{
  __int64 v1; // [rsp+20h] [rbp-18h] BYREF
  __int64 v2; // [rsp+28h] [rbp-10h]

  sub_18004E184(*(_QWORD *)(a1 + 512), &v1);
  sub_18007ED34(v1, &unk_1801CC838);
  if ( v2 )
    sub_180010EC8(v2);
}
