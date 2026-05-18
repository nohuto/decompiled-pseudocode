/*
 * XREFs of sub_180093000 @ 0x180093000
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 *     sub_18004A388 @ 0x18004A388 (sub_18004A388.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180093000(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_18004A388(a2, &v3);
  sub_180046FD4(*v2);
  if ( v4 )
    sub_180010EC8(v4);
}
