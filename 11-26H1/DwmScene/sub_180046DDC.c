/*
 * XREFs of sub_180046DDC @ 0x180046DDC
 * Callers:
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800474DC @ 0x1800474DC (sub_1800474DC.c)
 *     sub_18004754C @ 0x18004754C (sub_18004754C.c)
 *     sub_180047584 @ 0x180047584 (sub_180047584.c)
 *     sub_1800D6DF0 @ 0x1800D6DF0 (sub_1800D6DF0.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180046DDC(_DWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // bl
  BOOL v6; // r15d
  char v7; // r12
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // r13
  _QWORD *v13; // rax
  int v14; // esi
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int128 v22; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v23; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+98h] [rbp-68h]
  _BYTE v25[16]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v26[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v27[7]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v28; // [rsp+F8h] [rbp-8h]
  __int128 v29; // [rsp+100h] [rbp+0h]
  __int64 v30; // [rsp+160h] [rbp+60h] BYREF
  _QWORD *v31; // [rsp+168h] [rbp+68h]
  char v32; // [rsp+170h] [rbp+70h]
  __int64 *v33; // [rsp+178h] [rbp+78h]

  v32 = a3;
  HIDWORD(v31) = HIDWORD(a2);
  LODWORD(v31) = 0;
  result = (unsigned int)a1[75];
  v5 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v6 = result == 3;
    if ( a1[72] == 1 )
    {
      v7 = 1;
      v8 = (__int64 *)sub_1800474DC(a1, &v23, 0LL);
      v9 = *v8;
      v20 = *v8;
      v21 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      v10 = &v20;
    }
    else
    {
      v7 = 0;
      v11 = (__int64 *)sub_1800474DC(a1, &v22, 0LL);
      v9 = *v11;
      v19 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      v10 = &v18;
      v5 = 12;
    }
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      if ( v19 )
        sub_180010EC8(v19);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( *((_QWORD *)&v22 + 1) )
        sub_180010EC8(*((__int64 *)&v22 + 1));
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v21 )
        sub_180010EC8(v21);
    }
    if ( (v5 & 1) != 0 && v24 )
      sub_180010EC8(v24);
    v22 = 0LL;
    v31 = v27;
    v13 = sub_18000D954(&v30, (__int64)a1);
    v28 = 0LL;
    v27[0] = &std::_Func_impl_no_alloc<_lambda_0c82bcc1497f3afd643663d7c3bef72a_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v27[1] = *v13;
    v28 = v27;
    v14 = a1[28];
    v33 = &v18;
    v18 = v9;
    v19 = v12;
    v29 = 0LL;
    v15 = a1[30];
    v23 = v25;
    v16 = sub_180047584(a1, v25, 0LL);
    v17 = sub_18004754C(a1, v26, 0LL);
    result = sub_1800D6DF0(v17, v16, v15, (unsigned int)&v18, v14, v7, v6, v32, (__int64)v27);
    if ( *((_QWORD *)&v22 + 1) )
      return sub_180010EC8(*((__int64 *)&v22 + 1));
  }
  return result;
}
