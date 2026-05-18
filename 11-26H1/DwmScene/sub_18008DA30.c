/*
 * XREFs of sub_18008DA30 @ 0x18008DA30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_18000E26C @ 0x18000E26C (sub_18000E26C.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180017A8C @ 0x180017A8C (sub_180017A8C.c)
 *     sub_18003B950 @ 0x18003B950 (sub_18003B950.c)
 *     sub_180042248 @ 0x180042248 (sub_180042248.c)
 *     sub_18006A84C @ 0x18006A84C (sub_18006A84C.c)
 *     sub_18008D758 @ 0x18008D758 (sub_18008D758.c)
 *     sub_18008D824 @ 0x18008D824 (sub_18008D824.c)
 *     sub_18008DBE8 @ 0x18008DBE8 (sub_18008DBE8.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_18008DA30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 *v8; // rax
  __int64 *v9; // rsi
  void *v10; // rcx
  __int64 *v11; // rdi
  __int64 *v12; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  char v16; // [rsp+30h] [rbp-89h]
  __int128 v17; // [rsp+38h] [rbp-81h] BYREF
  __int64 v18; // [rsp+48h] [rbp-71h]
  __int64 v19; // [rsp+50h] [rbp-69h] BYREF
  int v20; // [rsp+58h] [rbp-61h]
  __int64 v21; // [rsp+60h] [rbp-59h] BYREF
  __int64 v22; // [rsp+68h] [rbp-51h]
  _QWORD *v23; // [rsp+80h] [rbp-39h]
  _QWORD v24[4]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+A8h] [rbp-11h] BYREF

  v4 = a4;
  v23 = a2;
  v8 = sub_180042248(a4, &v21);
  sub_18003B950(*v8, (__int64)&v19);
  if ( v22 )
    sub_180010EC8(v22);
  v17 = 0LL;
  v18 = 0LL;
  v21 = v19;
  LODWORD(v22) = v20;
  sub_18008DBE8(a1, v4, (unsigned int)&v21, (unsigned int)&v17, a3);
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( *(_DWORD *)(a1 + 8) != 1 )
    {
      sub_180011CC4(v24, "Unsupported sorting order");
      v14 = sub_180011CC4(
              &v21,
              "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\dist"
              "ancefromcamerascenenodetraversal.cpp");
      sub_18006A84C(pExceptionObject, (__int64)v14, v15, (__int64)v24, 0);
      throw (Spectre::Engine::EngineException *)pExceptionObject;
    }
    sub_18008D758((char *)v17, *((float **)&v17 + 1), v16);
  }
  else
  {
    sub_18008D824((char *)v17, *((float **)&v17 + 1), v16);
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v9 = (__int64 *)*((_QWORD *)&v17 + 1);
  v10 = (void *)v17;
  if ( (_QWORD)v17 != *((_QWORD *)&v17 + 1) )
  {
    v11 = (__int64 *)(v17 + 8);
    do
    {
      v12 = (__int64 *)a2[1];
      if ( v12 == (__int64 *)a2[2] )
      {
        sub_180017A8C(a2, (__int64)v12, v11);
      }
      else
      {
        *v12 = *v11;
        a2[1] += 8LL;
      }
      v11 += 2;
    }
    while ( v11 - 1 != v9 );
    v10 = (void *)v17;
  }
  if ( v10 )
    sub_18000E26C(v10, (v18 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL);
  return a2;
}
