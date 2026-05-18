/*
 * XREFs of sub_180046C1C @ 0x180046C1C
 * Callers:
 *     sub_180046FD4 @ 0x180046FD4 (sub_180046FD4.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800474DC @ 0x1800474DC (sub_1800474DC.c)
 *     sub_18004754C @ 0x18004754C (sub_18004754C.c)
 *     sub_1800D668C @ 0x1800D668C (sub_1800D668C.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180046C1C(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax
  char v4; // bl
  BOOL v5; // r15d
  char v6; // r12
  __int64 *v7; // rax
  __int64 v8; // r14
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // rax
  int v13; // edi
  int v14; // ebx
  int v15; // eax
  __int64 v16; // [rsp+50h] [rbp-69h] BYREF
  __int64 v17; // [rsp+58h] [rbp-61h]
  __int128 v18; // [rsp+60h] [rbp-59h] BYREF
  __int128 v19; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v20[8]; // [rsp+80h] [rbp-39h] BYREF
  __int64 v21; // [rsp+88h] [rbp-31h]
  _QWORD v22[7]; // [rsp+90h] [rbp-29h] BYREF
  _QWORD *v23; // [rsp+C8h] [rbp+Fh]
  __int64 v24; // [rsp+120h] [rbp+67h] BYREF
  _QWORD *v25; // [rsp+128h] [rbp+6Fh]
  __int64 *v26; // [rsp+130h] [rbp+77h]

  HIDWORD(v25) = HIDWORD(a2);
  LODWORD(v25) = 0;
  result = (unsigned int)a1[75];
  v4 = 3;
  if ( !(_DWORD)result || (_DWORD)result == 3 )
  {
    v5 = result == 3;
    if ( a1[72] == 1 )
    {
      v6 = 1;
      v7 = (__int64 *)sub_1800474DC(a1, v20, 0LL);
      v8 = *v7;
      v16 = *v7;
      v17 = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      v9 = &v16;
    }
    else
    {
      v6 = 0;
      v10 = (__int64 *)sub_1800474DC(a1, &v19, 0LL);
      v8 = *v10;
      *((_QWORD *)&v18 + 1) = v10[1];
      *v10 = 0LL;
      v10[1] = 0LL;
      v9 = (__int64 *)&v18;
      v4 = 12;
    }
    v11 = v9[1];
    *v9 = 0LL;
    v9[1] = 0LL;
    if ( (v4 & 8) != 0 )
    {
      v4 &= ~8u;
      if ( *((_QWORD *)&v18 + 1) )
        sub_180010EC8(*((__int64 *)&v18 + 1));
    }
    if ( (v4 & 4) != 0 )
    {
      v4 &= ~4u;
      if ( *((_QWORD *)&v19 + 1) )
        sub_180010EC8(*((__int64 *)&v19 + 1));
    }
    if ( (v4 & 2) != 0 )
    {
      v4 &= ~2u;
      if ( v17 )
        sub_180010EC8(v17);
    }
    if ( (v4 & 1) != 0 && v21 )
      sub_180010EC8(v21);
    v18 = 0LL;
    v25 = v22;
    v12 = sub_18000D954(&v24, (__int64)a1);
    v23 = 0LL;
    v22[0] = &std::_Func_impl_no_alloc<_lambda_7334b5a9a3bbefa9324c75fdace13832_,void,std::shared_ptr<Spectre::Utils::Math::Vector3> const &,void *>::`vftable';
    v22[1] = *v12;
    v23 = v22;
    v13 = a1[28];
    v26 = &v16;
    v16 = v8;
    v17 = v11;
    v19 = 0LL;
    v14 = a1[30];
    v15 = sub_18004754C(a1, v20, 0LL);
    result = sub_1800D668C(v15, v14, (unsigned int)&v16, v13, v6, v5, (__int64)v22);
    if ( *((_QWORD *)&v18 + 1) )
      return sub_180010EC8(*((__int64 *)&v18 + 1));
  }
  return result;
}
