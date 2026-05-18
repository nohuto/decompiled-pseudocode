/*
 * XREFs of sub_18009820C @ 0x18009820C
 * Callers:
 *     sub_18002A268 @ 0x18002A268 (sub_18002A268.c)
 * Callees:
 *     sub_18000D81C @ 0x18000D81C (sub_18000D81C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_18006F320 @ 0x18006F320 (sub_18006F320.c)
 *     sub_180097F08 @ 0x180097F08 (sub_180097F08.c)
 *     sub_180098010 @ 0x180098010 (sub_180098010.c)
 *     sub_1800981BC @ 0x1800981BC (sub_1800981BC.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall sub_18009820C(__int64 *a1)
{
  _QWORD *v2; // rdx
  unsigned int v3; // ebp
  _QWORD *v4; // r15
  __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h]

  sub_1800D5364(a1);
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  sub_18006F320(a1 + 1, v2);
  sub_1800981BC(a1 + 6);
  sub_18000D81C((__int64)(a1 + 8), 16LL, 5LL, (__int64 (__fastcall *)(__int64))sub_180011D00);
  v3 = 0;
  v4 = a1 + 18;
  v5 = a1 + 9;
  do
  {
    v6 = sub_18001C514(1096LL);
    v7 = v6;
    v11 = v6;
    if ( v6 )
    {
      *(_OWORD *)v6 = 0LL;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = 1;
      *(_QWORD *)v6 = &std::_Ref_count_obj2<Spectre::Engine::GpuProfilerFrame>::`vftable';
      sub_180097F08();
    }
    else
    {
      v7 = 0LL;
    }
    *(v5 - 1) = v7 + 16;
    v8 = *v5;
    *v5 = v7;
    if ( v8 )
      sub_180010EC8(v8);
    *v4 = 0LL;
    v10 = (int)v3;
    sub_180098010((__int64)(a1 + 1), &v10);
    ++v3;
    v5 += 2;
    ++v4;
  }
  while ( v3 < 5 );
  return a1;
}
