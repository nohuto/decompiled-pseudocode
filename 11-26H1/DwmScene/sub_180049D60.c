/*
 * XREFs of sub_180049D60 @ 0x180049D60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013300 @ 0x180013300 (sub_180013300.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180049048 @ 0x180049048 (sub_180049048.c)
 *     sub_180049E40 @ 0x180049E40 (sub_180049E40.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall sub_180049D60(__int64 a1, _OWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int128 v13; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v14[3]; // [rsp+38h] [rbp-30h] BYREF

  v8 = sub_18001C514(208LL);
  v9 = v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_DWORD *)(v8 + 8) = 1;
    *(_DWORD *)(v8 + 12) = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj2<Spectre::Engine::MeshInstance>::`vftable';
    sub_180049048(v8 + 16, a4);
  }
  else
  {
    v9 = 0LL;
  }
  v13 = 0LL;
  sub_180013300(&v13, v9 + 16, v9);
  v10 = sub_180012C40(v14, &v13);
  sub_180049E40(a1, v10, a3);
  *a2 = v13;
  v11 = a4[1];
  if ( v11 )
    sub_180010EC8(v11);
  return a2;
}
