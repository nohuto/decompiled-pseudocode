/*
 * XREFs of sub_18006C68C @ 0x18006C68C
 * Callers:
 *     sub_18006DE14 @ 0x18006DE14 (sub_18006DE14.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_18006C76C @ 0x18006C76C (sub_18006C76C.c)
 *     sub_18006D3DC @ 0x18006D3DC (sub_18006D3DC.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18006C68C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // xmm6_8
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  sub_18003D758(a1);
  v4 = *(_QWORD *)sub_18006C76C(a1, &v10);
  if ( *((_QWORD *)&v10 + 1) )
    sub_180010EC8(*((__int64 *)&v10 + 1));
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180012BF8(a1 + 8, &v10);
    sub_18006D3DC(&v9, v5);
    if ( *((_QWORD *)&v10 + 1) )
      sub_180010EC8(*((__int64 *)&v10 + 1));
    v6 = *((_QWORD *)&v9 + 1);
    if ( *((_QWORD *)&v9 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v9 + 1) + 8LL));
    v7 = v9;
    v10 = v9;
    sub_18003ADE8(a1, &v10);
    if ( *((_QWORD *)&v10 + 1) )
      sub_180010EC8(*((__int64 *)&v10 + 1));
    *a2 = v7;
    a2[1] = v6;
  }
  return a2;
}
