/*
 * XREFs of sub_18004B2D4 @ 0x18004B2D4
 * Callers:
 *     sub_18004B290 @ 0x18004B290 (sub_18004B290.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_180026A6C @ 0x180026A6C (sub_180026A6C.c)
 *     sub_180049B60 @ 0x180049B60 (sub_180049B60.c)
 *     sub_18004A150 @ 0x18004A150 (sub_18004A150.c)
 *     sub_18004B71C @ 0x18004B71C (sub_18004B71C.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall sub_18004B2D4(__int64 a1, __int64 a2, __int64 *a3)
{
  _QWORD *v5; // rcx
  unsigned int v6; // eax
  int v7; // r8d
  __int64 *result; // rax
  __int64 *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+30h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-49h] BYREF
  __int64 v14; // [rsp+48h] [rbp-41h]
  __int64 *v15; // [rsp+60h] [rbp-29h]
  _QWORD v16[4]; // [rsp+68h] [rbp-21h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+88h] [rbp-1h] BYREF

  v15 = a3;
  v5 = (_QWORD *)(a1 + 104);
  if ( !(0x2E8BA2E8BA2E8BA3LL * ((__int64)(v5[1] - *v5) >> 3)) )
  {
    sub_180011CC4(v16, "Out of range");
    v6 = (unsigned int)sub_180011CC4(
                         &v13,
                         "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\e"
                         "ngine\\meshinstance.cpp");
    sub_18006A84C((unsigned int)pExceptionObject, v6, v7, (unsigned int)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  result = (__int64 *)sub_18004B71C(v5, 0LL);
  v9 = result;
  if ( *result != *a3 )
  {
    sub_18004A150(a1, 0LL);
    result = sub_180013540(v9, a3);
    if ( *a3 )
    {
      result = (__int64 *)sub_180026A6C(*a3, &v13);
      if ( v13 )
      {
        v10 = sub_180012C40(&v12, &v13);
        result = (__int64 *)sub_180049B60(a1, 0LL, v10);
      }
      if ( v14 )
        result = (__int64 *)sub_180010EC8(v14);
    }
  }
  v11 = a3[1];
  if ( v11 )
    return (__int64 *)sub_180010EC8(v11);
  return result;
}
