/*
 * XREFs of sub_18005E954 @ 0x18005E954
 * Callers:
 *     sub_1800627F8 @ 0x1800627F8 (sub_1800627F8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012BF8 @ 0x180012BF8 (sub_180012BF8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_1800170C8 @ 0x1800170C8 (sub_1800170C8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18003D758 @ 0x18003D758 (sub_18003D758.c)
 *     sub_18004F2AC @ 0x18004F2AC (sub_18004F2AC.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall sub_18005E954(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  __int128 v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp-10h]

  sub_18003D758(a1);
  v4 = *sub_1800170C8(a1, &v9);
  if ( v10 )
    sub_180010EC8(v10);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180012BF8(a1 + 8, &v9);
    v5 = sub_18001C514(552LL);
    v6 = v5;
    if ( v5 )
    {
      *(_OWORD *)v5 = 0LL;
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = 1;
      *(_QWORD *)v5 = &std::_Ref_count_obj2<Spectre::Engine::LightProbe>::`vftable';
      sub_18004F2AC();
    }
    else
    {
      v6 = 0LL;
    }
    v8 = 0LL;
    sub_180013300(&v8, v6 + 16, v6);
    if ( v10 )
      sub_180010EC8(v10);
    sub_180012C40(&v9, &v8);
    sub_18003ADE8(a1, &v9);
    if ( v10 )
      sub_180010EC8(v10);
    *(_OWORD *)a2 = v8;
  }
  return a2;
}
