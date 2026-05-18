/*
 * XREFs of sub_18006F16C @ 0x18006F16C
 * Callers:
 *     sub_18006D84C @ 0x18006D84C (sub_18006D84C.c)
 *     sub_18006E278 @ 0x18006E278 (sub_18006E278.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18006E9F0 @ 0x18006E9F0 (sub_18006E9F0.c)
 *     sub_18008FD60 @ 0x18008FD60 (sub_18008FD60.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18006F16C(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // eax
  int v8; // r8d
  int v9; // r9d
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+38h] [rbp-51h] BYREF
  __int64 v13; // [rsp+48h] [rbp-41h] BYREF
  __int64 v14; // [rsp+58h] [rbp-31h] BYREF
  __int64 v15; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v16[7]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD *v17; // [rsp+B0h] [rbp+27h]
  __int64 v18; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = *a2;
  v5 = sub_180012C40(&v12, a1 + 44);
  v6 = sub_18000D954(&v18, (__int64)a1);
  v17 = 0LL;
  v16[0] = &std::_Func_impl_no_alloc<_lambda_c3255ca82109f45dbf65110c90bf1ea2_,std::pair<std::shared_ptr<Spectre::Engine::SceneNode>,std::shared_ptr<Spectre::Engine::Mesh>>,>::`vftable';
  v16[1] = *v6;
  v17 = v16;
  sub_18006E9F0((__int64)a1, &v13, 0);
  sub_180012C40(&v14, a1 + 38);
  v7 = (unsigned int)sub_180012C40(&v15, a1 + 34);
  result = sub_18008FD60(v4, v7, v8, v9, (__int64)v16, (__int64)v5);
  v11 = a2[1];
  if ( v11 )
    return sub_180010EC8(v11);
  return result;
}
