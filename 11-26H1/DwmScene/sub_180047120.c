/*
 * XREFs of sub_180047120 @ 0x180047120
 * Callers:
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800474DC @ 0x1800474DC (sub_1800474DC.c)
 *     sub_180047514 @ 0x180047514 (sub_180047514.c)
 *     sub_18004754C @ 0x18004754C (sub_18004754C.c)
 *     sub_180047584 @ 0x180047584 (sub_180047584.c)
 *     sub_1800D6984 @ 0x1800D6984 (sub_1800D6984.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_180047120(_DWORD *a1, __int64 a2, char a3)
{
  __int64 result; // rax
  char v5; // bl
  BOOL v6; // r12d
  char v7; // r13
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rsi
  _QWORD *v13; // rax
  int v14; // r14d
  int v15; // esi
  int v16; // edi
  int v17; // ebx
  int v18; // eax
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int128 v23; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v24; // [rsp+90h] [rbp-70h] BYREF
  __int64 v25; // [rsp+98h] [rbp-68h]
  _BYTE *v26; // [rsp+A0h] [rbp-60h]
  _BYTE v27[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v28[16]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v29[16]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v30[7]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v31; // [rsp+110h] [rbp+10h]
  __int128 v32; // [rsp+118h] [rbp+18h]
  __int64 v33; // [rsp+180h] [rbp+80h] BYREF
  _QWORD *v34; // [rsp+188h] [rbp+88h]
  char v35; // [rsp+190h] [rbp+90h]
  __int64 *v36; // [rsp+198h] [rbp+98h]

  v35 = a3;
  HIDWORD(v34) = HIDWORD(a2);
  LODWORD(v34) = 0;
  result = (unsigned int)a1[75];
  v5 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v6 = result == 3;
    if ( a1[72] == 1 )
    {
      v7 = 1;
      v8 = (__int64 *)sub_1800474DC(a1, &v24, 0LL);
      v9 = *v8;
      v21 = *v8;
      v22 = v8[1];
      *v8 = 0LL;
      v8[1] = 0LL;
      v10 = &v21;
    }
    else
    {
      v7 = 0;
      v11 = (__int64 *)sub_1800474DC(a1, &v23, 0LL);
      v9 = *v11;
      v20 = v11[1];
      *v11 = 0LL;
      v11[1] = 0LL;
      v10 = &v19;
      v5 = 12;
    }
    v12 = v10[1];
    *v10 = 0LL;
    v10[1] = 0LL;
    if ( (v5 & 8) != 0 )
    {
      v5 &= ~8u;
      if ( v20 )
        sub_180010EC8(v20);
    }
    if ( (v5 & 4) != 0 )
    {
      v5 &= ~4u;
      if ( *((_QWORD *)&v23 + 1) )
        sub_180010EC8(*((__int64 *)&v23 + 1));
    }
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      if ( v22 )
        sub_180010EC8(v22);
    }
    if ( (v5 & 1) != 0 && v25 )
      sub_180010EC8(v25);
    v23 = 0LL;
    v34 = v30;
    v13 = sub_18000D954(&v33, (__int64)a1);
    v31 = 0LL;
    v30[0] = &std::_Func_impl_no_alloc<_lambda_ab41f81ca63d3d4c36433f589e0aa9fa_,void,std::shared_ptr<Spectre::Utils::Math::Vector4> const &,void *>::`vftable';
    v30[1] = *v13;
    v31 = v30;
    v14 = a1[28];
    v36 = &v19;
    v19 = v9;
    v20 = v12;
    v32 = 0LL;
    v15 = a1[30];
    v26 = v27;
    v16 = sub_180047514(a1, v27, 0LL);
    v24 = v28;
    v17 = sub_180047584(a1, v28, 0LL);
    v18 = sub_18004754C(a1, v29, 0LL);
    result = sub_1800D6984(v18, v17, v16, v15, (__int64)&v19, v14, v7, v6, v35, (__int64)v30);
    if ( *((_QWORD *)&v23 + 1) )
      return sub_180010EC8(*((__int64 *)&v23 + 1));
  }
  return result;
}
