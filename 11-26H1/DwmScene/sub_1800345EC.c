/*
 * XREFs of sub_1800345EC @ 0x1800345EC
 * Callers:
 *     sub_180034DD0 @ 0x180034DD0 (sub_180034DD0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_1800187D4 @ 0x1800187D4 (sub_1800187D4.c)
 *     sub_18001C72C @ 0x18001C72C (sub_18001C72C.c)
 *     sub_18001DEF0 @ 0x18001DEF0 (sub_18001DEF0.c)
 *     sub_18002E290 @ 0x18002E290 (sub_18002E290.c)
 *     sub_18002FD5C @ 0x18002FD5C (sub_18002FD5C.c)
 *     sub_18002FF78 @ 0x18002FF78 (sub_18002FF78.c)
 *     sub_180030044 @ 0x180030044 (sub_180030044.c)
 *     sub_1800302D8 @ 0x1800302D8 (sub_1800302D8.c)
 *     sub_1800303A4 @ 0x1800303A4 (sub_1800303A4.c)
 *     sub_180030470 @ 0x180030470 (sub_180030470.c)
 *     sub_18004D70C @ 0x18004D70C (sub_18004D70C.c)
 *     sub_18004DC48 @ 0x18004DC48 (sub_18004DC48.c)
 *     sub_180075B8C @ 0x180075B8C (sub_180075B8C.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800345EC(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // r15
  _DWORD *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rcx
  _QWORD *i; // rbx
  unsigned int v10; // esi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  _QWORD *j; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r14
  __int64 result; // rax
  __int128 v31; // [rsp+20h] [rbp-A9h] BYREF
  _DWORD *v32; // [rsp+30h] [rbp-99h] BYREF
  __int64 v33; // [rsp+38h] [rbp-91h]
  __int128 v34; // [rsp+40h] [rbp-89h] BYREF
  void *v35[2]; // [rsp+50h] [rbp-79h] BYREF
  __int128 v36; // [rsp+60h] [rbp-69h] BYREF
  __int128 v37; // [rsp+70h] [rbp-59h] BYREF
  _OWORD v38[2]; // [rsp+80h] [rbp-49h] BYREF
  _OWORD v39[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int128 pExceptionObject; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+7h]
  __int128 v42; // [rsp+D8h] [rbp+Fh]

  v4 = a1[64];
  if ( a1[78] != a1[77] )
    sub_1800187D4((__int64 *)(v4 + 18664), (__int64)(a1 + 77));
  sub_180012C40(&v32, a1 + 80);
  v5 = v32;
  if ( v32 )
  {
    v7 = v33;
  }
  else
  {
    v6 = sub_180075B8C(v39, a2);
    v5 = *(_DWORD **)v6;
    v7 = *(_QWORD *)(v6 + 8);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(v6 + 8) = 0LL;
    if ( *((_QWORD *)&v39[0] + 1) )
      sub_180010EC8(*((__int64 *)&v39[0] + 1));
    v32 = v5;
    v8 = v33;
    v33 = v7;
    if ( v8 )
      sub_180010EC8(v8);
  }
  if ( v5[2] != a2 )
  {
    sub_180011CC4(v39, "Shader database platform is incompatible with engine shader platform");
    sub_18001C72C(&pExceptionObject, (__int64)v39, 0);
    throw (Spectre::Utils::SpectreException *)&pExceptionObject;
  }
  (*(void (__fastcall **)(_DWORD *, void **))(*(_QWORD *)v5 + 8LL))(v5, v35);
  for ( i = *(_QWORD **)v35[0]; !*((_BYTE *)i + 25); i = j )
  {
    sub_1800181BC(v39, (__int64)(i + 4));
    v10 = *((_DWORD *)i + 20);
    *(_QWORD *)&v34 = &pExceptionObject;
    pExceptionObject = 0LL;
    v41 = 0LL;
    v42 = *((_OWORD *)i + 4);
    v11 = sub_1800181BC(v38, (__int64)v39);
    sub_18004DC48(v4, v11, v10, &pExceptionObject);
    sub_1800129D0((__int64)v39);
    v12 = i[2];
    if ( *(_BYTE *)(v12 + 25) )
    {
      for ( j = (_QWORD *)i[1]; !*((_BYTE *)j + 25) && i == (_QWORD *)j[2]; j = (_QWORD *)j[1] )
        i = j;
    }
    else
    {
      j = sub_18001DEF0((_QWORD *)v12);
    }
  }
  v14 = sub_1800302D8(v39);
  v15 = *v14;
  v16 = v14[1];
  *v14 = 0LL;
  v14[1] = 0LL;
  a1[8] = v15;
  v17 = a1[9];
  a1[9] = v16;
  if ( v17 )
    sub_180010EC8(v17);
  if ( *((_QWORD *)&v39[0] + 1) )
    sub_180010EC8(*((__int64 *)&v39[0] + 1));
  v18 = a1[64];
  v31 = 0LL;
  v19 = a1[9];
  if ( v19 )
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
  v31 = *((_OWORD *)a1 + 4);
  sub_18004D70C(v18, &v31);
  sub_180030044(&v34);
  v20 = a1[64];
  v31 = 0LL;
  v21 = *((_QWORD *)&v34 + 1);
  if ( *((_QWORD *)&v34 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v34 + 1) + 8LL));
  v31 = v34;
  sub_18004D70C(v20, &v31);
  sub_1800303A4(&v36);
  v22 = a1[64];
  v31 = 0LL;
  v23 = *((_QWORD *)&v36 + 1);
  if ( *((_QWORD *)&v36 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v36 + 1) + 8LL));
  v31 = v36;
  sub_18004D70C(v22, &v31);
  sub_18002FF78(&v37);
  v24 = a1[64];
  v31 = 0LL;
  v25 = *((_QWORD *)&v37 + 1);
  if ( *((_QWORD *)&v37 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v37 + 1) + 8LL));
  v31 = v37;
  sub_18004D70C(v24, &v31);
  sub_180030470(v38);
  v26 = a1[64];
  v31 = 0LL;
  v27 = *((_QWORD *)&v38[0] + 1);
  if ( *((_QWORD *)&v38[0] + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v38[0] + 1) + 8LL));
  v31 = v38[0];
  sub_18004D70C(v26, &v31);
  sub_18002FD5C(v39);
  v28 = a1[64];
  v31 = 0LL;
  v29 = *((_QWORD *)&v39[0] + 1);
  if ( *((_QWORD *)&v39[0] + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v39[0] + 1) + 8LL));
  v31 = v39[0];
  sub_18004D70C(v28, &v31);
  if ( v29 )
    sub_180010EC8(v29);
  if ( v27 )
    sub_180010EC8(v27);
  if ( v25 )
    sub_180010EC8(v25);
  if ( v23 )
    sub_180010EC8(v23);
  if ( v21 )
    sub_180010EC8(v21);
  result = sub_18002E290(v35, (__int64)v35);
  if ( v7 )
    return sub_180010EC8(v7);
  return result;
}
