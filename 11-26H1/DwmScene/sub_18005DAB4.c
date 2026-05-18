/*
 * XREFs of sub_18005DAB4 @ 0x18005DAB4
 * Callers:
 *     sub_180042E1C @ 0x180042E1C (sub_180042E1C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011AF4 @ 0x180011AF4 (sub_180011AF4.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_180013540 @ 0x180013540 (sub_180013540.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004C300 @ 0x18004C300 (sub_18004C300.c)
 *     sub_18005C4F0 @ 0x18005C4F0 (sub_18005C4F0.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18005DAB4(__int64 a1, _QWORD *a2, __int64 a3, int a4)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // r11
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *i; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v19; // [rsp+30h] [rbp-69h] BYREF
  int v20; // [rsp+38h] [rbp-61h] BYREF
  __int128 v21; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v22[2]; // [rsp+58h] [rbp-41h] BYREF
  __int64 v23; // [rsp+68h] [rbp-31h]
  _QWORD v24[4]; // [rsp+78h] [rbp-21h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-1h] BYREF

  v19 = (unsigned __int64)a2;
  v20 = a4;
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_180011CC4(
      v24,
      "ShaderFamily::GetPipeline() -- shader family declaration must be complete before pipelines can be accessed");
    v5 = sub_180011CC4(
           v22,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v5, v6, (__int64)v24, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v19 = a3 & *(_QWORD *)(a1 + 64);
  v7 = sub_18005C4F0((__int64 *)(a1 + 416), (__int64)v24, &v20);
  sub_180011AF4((__int64 *)(*(_QWORD *)v7 + 56LL), v22, &v19);
  if ( *(_BYTE *)(v23 + 25) || v19 < *(_QWORD *)(v23 + 32) || v23 == *(_QWORD *)(v8 + 56) )
  {
    v10 = *(_QWORD **)(v8 + 40);
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v12 = i + 2;
      v13 = i[2];
      v14 = *(_QWORD **)(v13 + 32);
      v15 = *(_QWORD **)(v13 + 24);
      if ( v15 == v14 )
      {
LABEL_16:
        v16 = sub_18004C300((__int64 *)(v8 + 56), (__int64)&v21, &v19);
        sub_180013540((__int64 *)(*(_QWORD *)v16 + 40LL), v12);
        v9 = v12;
        goto LABEL_7;
      }
      while ( v15 != v14 )
      {
        if ( (v19 & *v15) == *v15 && (v19 & v15[1]) == 0 )
          goto LABEL_16;
        v15 += 2;
      }
    }
    v21 = 0LL;
    v17 = sub_18004C300((__int64 *)(v8 + 56), (__int64)v22, &v19);
    sub_180011F5C((_QWORD *)(*(_QWORD *)v17 + 40LL), (__int64 *)&v21);
    if ( *((_QWORD *)&v21 + 1) )
      sub_180010EC8(*((__int64 *)&v21 + 1));
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v9 = (_QWORD *)(v23 + 40);
LABEL_7:
    sub_180012C40(a2, v9);
  }
  return a2;
}
