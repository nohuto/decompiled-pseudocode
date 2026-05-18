/*
 * XREFs of sub_18005D8B8 @ 0x18005D8B8
 * Callers:
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_1800926D0 @ 0x1800926D0 (sub_1800926D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000D921 (_CxxThrowException.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_180011F5C @ 0x180011F5C (sub_180011F5C.c)
 *     sub_180012C40 @ 0x180012C40 (sub_180012C40.c)
 *     sub_18003A468 @ 0x18003A468 (sub_18003A468.c)
 *     sub_18004DE2C @ 0x18004DE2C (sub_18004DE2C.c)
 *     sub_18005E244 @ 0x18005E244 (sub_18005E244.c)
 *     sub_18007C390 @ 0x18007C390 (sub_18007C390.c)
 *     sub_18007C50C @ 0x18007C50C (sub_18007C50C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005D8B8(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // r8
  unsigned int i; // edi
  __int64 *v5; // rax
  _QWORD *v6; // rax
  unsigned int v7; // edi
  _QWORD *v8; // rsi
  __int64 *v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+38h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-41h]
  __int64 v13; // [rsp+50h] [rbp-31h] BYREF
  __int64 v14; // [rsp+58h] [rbp-29h]
  __int64 v15; // [rsp+70h] [rbp-11h] BYREF
  __int64 v16; // [rsp+78h] [rbp-9h]
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp+Fh] BYREF

  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_180011CC4(&v15, "ShaderFamily::EndDeclaration() -- this function must only be called once.");
    v2 = sub_180011CC4(
           &v13,
           "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003A468(pExceptionObject, (__int64)v2, v3, (__int64)&v15, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  for ( i = 0; i < 0xA; ++i )
  {
    sub_180012C40(&v11, (_QWORD *)(a1 + 16 * ((int)i + 6LL)));
    if ( !v11 )
    {
      v5 = sub_18004DE2C(*(_QWORD *)(a1 + 440), &v15, i);
      sub_180011F5C(&v11, v5);
      if ( v16 )
        sub_180010EC8(v16);
      sub_18007C50C(v11);
      v6 = sub_180012C40(&v13, &v11);
      sub_18005E244(a1, v6);
    }
    if ( v12 )
      sub_180010EC8(v12);
  }
  *(_DWORD *)(a1 + 432) = 1;
  v7 = 0;
  v8 = (_QWORD *)(a1 + 96);
  do
  {
    v9 = (__int64 *)sub_18007C390(*v8, &v13);
    result = (__int64)sub_180011F5C((_QWORD *)(a1 + 16 * ((int)v7 + 16LL)), v9);
    if ( v14 )
      result = sub_180010EC8(v14);
    ++v7;
    v8 += 2;
  }
  while ( v7 < 0xA );
  return result;
}
