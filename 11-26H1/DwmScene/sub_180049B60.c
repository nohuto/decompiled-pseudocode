/*
 * XREFs of sub_180049B60 @ 0x180049B60
 * Callers:
 *     sub_18004B2D4 @ 0x18004B2D4 (sub_18004B2D4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18004B71C @ 0x18004B71C (sub_18004B71C.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_18007A86C @ 0x18007A86C (sub_18007A86C.c)
 *     sub_18007C390 @ 0x18007C390 (sub_18007C390.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180049B60(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned int v5; // eax
  int v6; // r8d
  _QWORD *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-79h] BYREF
  __int64 v15; // [rsp+38h] [rbp-71h]
  __int64 v16; // [rsp+40h] [rbp-69h] BYREF
  __int64 v17; // [rsp+48h] [rbp-61h]
  __int64 v18; // [rsp+50h] [rbp-59h] BYREF
  __int64 v19; // [rsp+58h] [rbp-51h]
  _QWORD *v20; // [rsp+60h] [rbp-49h]
  __int64 v21; // [rsp+68h] [rbp-41h] BYREF
  __int64 v22; // [rsp+70h] [rbp-39h]
  __int64 v23; // [rsp+88h] [rbp-21h] BYREF
  __int64 v24; // [rsp+90h] [rbp-19h]
  _BYTE pExceptionObject[56]; // [rsp+A8h] [rbp-1h] BYREF

  v20 = a3;
  if ( a2 >= 0x2E8BA2E8BA2E8BA3LL * ((__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3) )
  {
    sub_180011CC4(&v23, "Out of range");
    v5 = (unsigned int)sub_180011CC4(
                         &v21,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v5, v6, (unsigned int)&v23, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v7 = (_QWORD *)sub_18004B71C();
  sub_180012C40(&v23, (_QWORD *)(*a3 + 96LL));
  v8 = (__int64 *)sub_18007C390(v23, &v18);
  sub_180011F5C(v7 + 3, v8);
  if ( v19 )
    sub_180010EC8(v19);
  sub_180012C40(&v18, (_QWORD *)(*a3 + 144LL));
  v9 = (__int64 *)sub_18007C390(v18, &v16);
  sub_180011F5C(v7 + 5, v9);
  if ( v17 )
    sub_180010EC8(v17);
  sub_180012C40(&v16, (_QWORD *)(*a3 + 208LL));
  v10 = (__int64 *)sub_18007C390(v16, &v14);
  sub_180011F5C(v7 + 7, v10);
  if ( v15 )
    sub_180010EC8(v15);
  sub_180012C40(&v14, (_QWORD *)(*a3 + 224LL));
  v11 = (__int64 *)sub_18007C390(v14, &v21);
  sub_180011F5C(v7 + 9, v11);
  if ( v22 )
    sub_180010EC8(v22);
  result = sub_18007A86C(a1);
  if ( v15 )
    result = sub_180010EC8(v15);
  if ( v17 )
    result = sub_180010EC8(v17);
  if ( v19 )
    result = sub_180010EC8(v19);
  if ( v24 )
    result = sub_180010EC8(v24);
  v13 = a3[1];
  if ( v13 )
    return sub_180010EC8(v13);
  return result;
}
