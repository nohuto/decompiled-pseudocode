/*
 * XREFs of sub_180014BBC @ 0x180014BBC
 * Callers:
 *     sub_1800151CC @ 0x1800151CC (sub_1800151CC.c)
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_180014E04 @ 0x180014E04 (sub_180014E04.c)
 *     sub_180014FA4 @ 0x180014FA4 (sub_180014FA4.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_180014BBC(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+28h] [rbp-28h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int64 v11; // [rsp+40h] [rbp-10h]

  sub_18003D758();
  v4 = *(_QWORD *)sub_180014E04(a1, &v10);
  if ( v11 )
    sub_180010EC8(v11);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180012BF8(a1 + 8, &v10);
    v6 = sub_18001C514(128LL);
    v7 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::Bounds>::`vftable';
      sub_180014FA4(v6 + 16, v5);
    }
    else
    {
      v7 = 0LL;
    }
    v9 = 0LL;
    sub_180013300(&v9, v7 + 16, v7);
    if ( v11 )
      sub_180010EC8(v11);
    sub_180012C40(&v10, &v9);
    sub_18003ADE8(a1, &v10);
    if ( v11 )
      sub_180010EC8(v11);
    *(_OWORD *)a2 = v9;
  }
  return a2;
}
