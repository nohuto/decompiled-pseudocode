/*
 * XREFs of sub_180099E4C @ 0x180099E4C
 * Callers:
 *     sub_18009A280 @ 0x18009A280 (sub_18009A280.c)
 *     sub_18009B084 @ 0x18009B084 (sub_18009B084.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180026804 @ 0x180026804 (sub_180026804.c)
 *     sub_180099290 @ 0x180099290 (sub_180099290.c)
 *     sub_1800994C4 @ 0x1800994C4 (sub_1800994C4.c)
 *     sub_180099564 @ 0x180099564 (sub_180099564.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180099E4C(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, __int64 a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::GpuProfilerFrame::MarkerQueryData::`vftable';
  sub_1800D5364(a1 + 8);
  *(_DWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a5;
  sub_180026804(a5, a1 + 32, 1u);
  sub_180099290(a1 + 216);
  if ( sub_1800994C4(a1 + 32) )
  {
    sub_180012C40(&v14, a4);
    v9 = sub_180012C40(v15, a3);
    sub_180099564(a1 + 32, v9, v10);
  }
  v11 = a3[1];
  if ( v11 )
    sub_180010EC8(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010EC8(v12);
  return a1;
}
