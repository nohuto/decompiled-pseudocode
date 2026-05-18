/*
 * XREFs of sub_18002BE58 @ 0x18002BE58
 * Callers:
 *     sub_18002CAA0 @ 0x18002CAA0 (sub_18002CAA0.c)
 *     sub_18006E278 @ 0x18006E278 (sub_18006E278.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180054068 @ 0x180054068 (sub_180054068.c)
 *     sub_180054220 @ 0x180054220 (sub_180054220.c)
 */

__int64 __fastcall sub_18002BE58(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  sub_180054068(a1, &v4, a2);
  if ( v4 )
  {
    v2 = sub_180054220();
    if ( v5 )
      sub_180010EC8(v5);
    return v2;
  }
  else
  {
    if ( v5 )
      sub_180010EC8(v5);
    return 0LL;
  }
}
