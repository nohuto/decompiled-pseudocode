/*
 * XREFs of sub_18009EC54 @ 0x18009EC54
 * Callers:
 *     sub_180002FC0 @ 0x180002FC0 (sub_180002FC0.c)
 *     sub_180003140 @ 0x180003140 (sub_180003140.c)
 *     sub_1800031B0 @ 0x1800031B0 (sub_1800031B0.c)
 *     sub_180003220 @ 0x180003220 (sub_180003220.c)
 *     sub_180003290 @ 0x180003290 (sub_180003290.c)
 *     sub_180003300 @ 0x180003300 (sub_180003300.c)
 *     sub_180003370 @ 0x180003370 (sub_180003370.c)
 *     sub_1800033E0 @ 0x1800033E0 (sub_1800033E0.c)
 *     sub_180003450 @ 0x180003450 (sub_180003450.c)
 *     sub_1800034C0 @ 0x1800034C0 (sub_1800034C0.c)
 *     sub_180003530 @ 0x180003530 (sub_180003530.c)
 *     sub_1800035A0 @ 0x1800035A0 (sub_1800035A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 *     sub_18009EA4C @ 0x18009EA4C (sub_18009EA4C.c)
 */

// Hidden C++ exception states: #wind=18
__int64 sub_18009EC54()
{
  __int64 v0; // rbx
  _QWORD *v1; // rax
  _QWORD *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int128 v26; // [rsp+28h] [rbp-79h]
  __int128 v27; // [rsp+28h] [rbp-79h]
  __int128 v28; // [rsp+28h] [rbp-79h]
  __int128 v29; // [rsp+28h] [rbp-79h]
  __int128 v30; // [rsp+28h] [rbp-79h]
  __int128 v31; // [rsp+28h] [rbp-79h]
  __int128 v32; // [rsp+38h] [rbp-69h]
  __int128 v33; // [rsp+58h] [rbp-49h] BYREF
  __int128 v34; // [rsp+68h] [rbp-39h]
  _QWORD v35[4]; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v36[32]; // [rsp+98h] [rbp-9h] BYREF
  _QWORD v37[4]; // [rsp+B8h] [rbp+17h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801CDCF0 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDCF0);
    if ( dword_1801CDCF0 == -1 )
    {
      *(_QWORD *)&v26 = &unk_18013BAA0;
      *((_QWORD *)&v26 + 1) = &unk_18013C36C;
      *(_QWORD *)&v32 = 0x100000005LL;
      v1 = sub_18009EA4C();
      v2 = sub_180075CF8(v37, 1LL, (__int64)v1, 3);
      v3 = sub_18001C928((__int64)v36, (__int64)"ImageProcessingBlur/ShaderModel40/", v2);
      v4 = sub_18001C87C((__int64)v35, v3, (__int64)"/Pixel");
      v33 = v26;
      v34 = v32;
      sub_180075D94(v4, (__int64)&v33);
      sub_1800129D0((__int64)v36);
      sub_1800129D0((__int64)v37);
      sub_18000D4CC(&dword_1801CDCF0);
    }
  }
  if ( dword_1801CDCF4 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDCF4);
    if ( dword_1801CDCF4 == -1 )
    {
      *(_QWORD *)&v27 = &unk_18013C370;
      *((_QWORD *)&v27 + 1) = &unk_18013CF2C;
      *(_QWORD *)&v32 = 0x100000005LL;
      v5 = sub_18009EA4C();
      v6 = sub_180075CF8(v35, 2LL, (__int64)v5, 3);
      v7 = sub_18001C928((__int64)v36, (__int64)"ImageProcessingBlur/ShaderModel40/", v6);
      v8 = sub_18001C87C((__int64)v37, v7, (__int64)"/Pixel");
      v33 = v27;
      v34 = v32;
      sub_180075D94(v8, (__int64)&v33);
      sub_1800129D0((__int64)v36);
      sub_1800129D0((__int64)v35);
      sub_18000D4CC(&dword_1801CDCF4);
    }
  }
  if ( dword_1801CDCF8 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDCF8);
    if ( dword_1801CDCF8 == -1 )
    {
      *(_QWORD *)&v28 = &unk_18013A900;
      *((_QWORD *)&v28 + 1) = &unk_18013BA9C;
      *(_QWORD *)&v32 = 0x100000005LL;
      v9 = sub_18009EA4C();
      v10 = sub_180075CF8(v35, 4LL, (__int64)v9, 3);
      v11 = sub_18001C928((__int64)v36, (__int64)"ImageProcessingBlur/ShaderModel40/", v10);
      v12 = sub_18001C87C((__int64)v37, v11, (__int64)"/Pixel");
      v33 = v28;
      v34 = v32;
      sub_180075D94(v12, (__int64)&v33);
      sub_1800129D0((__int64)v36);
      sub_1800129D0((__int64)v35);
      sub_18000D4CC(&dword_1801CDCF8);
    }
  }
  if ( dword_1801CDCFC > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDCFC);
    if ( dword_1801CDCFC == -1 )
    {
      *(_QWORD *)&v29 = &unk_18013A310;
      *((_QWORD *)&v29 + 1) = &unk_18013A8FC;
      *(_QWORD *)&v32 = 0x100000001LL;
      v13 = sub_18009EA4C();
      v14 = sub_180075CF8(v35, 1LL, (__int64)v13, 3);
      v15 = sub_18001C928((__int64)v36, (__int64)"ImageProcessingBlur/ShaderModel40/", v14);
      v16 = sub_18001C87C((__int64)v37, v15, (__int64)"/Vertex");
      v33 = v29;
      v34 = v32;
      sub_180075D94(v16, (__int64)&v33);
      sub_1800129D0((__int64)v36);
      sub_1800129D0((__int64)v35);
      sub_18000D4CC(&dword_1801CDCFC);
    }
  }
  if ( dword_1801CDD00 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDD00);
    if ( dword_1801CDD00 == -1 )
    {
      *(_QWORD *)&v30 = &unk_18013A310;
      *((_QWORD *)&v30 + 1) = &unk_18013A8FC;
      *(_QWORD *)&v32 = 0x100000001LL;
      v17 = sub_18009EA4C();
      v18 = sub_180075CF8(v35, 2LL, (__int64)v17, 3);
      v19 = sub_18001C928((__int64)v36, (__int64)"ImageProcessingBlur/ShaderModel40/", v18);
      v20 = sub_18001C87C((__int64)v37, v19, (__int64)"/Vertex");
      v33 = v30;
      v34 = v32;
      sub_180075D94(v20, (__int64)&v33);
      sub_1800129D0((__int64)v36);
      sub_1800129D0((__int64)v35);
      sub_18000D4CC(&dword_1801CDD00);
    }
  }
  if ( dword_1801CDD04 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDD04);
    if ( dword_1801CDD04 == -1 )
    {
      *(_QWORD *)&v31 = &unk_18013A310;
      *((_QWORD *)&v31 + 1) = &unk_18013A8FC;
      *(_QWORD *)&v32 = 0x100000001LL;
      v21 = sub_18009EA4C();
      v22 = sub_180075CF8(v35, 4LL, (__int64)v21, 3);
      v23 = sub_18001C928((__int64)v36, (__int64)"ImageProcessingBlur/ShaderModel40/", v22);
      v24 = sub_18001C87C((__int64)v37, v23, (__int64)"/Vertex");
      v33 = v31;
      v34 = v32;
      sub_180075D94(v24, (__int64)&v33);
      sub_1800129D0((__int64)v36);
      sub_1800129D0((__int64)v35);
      sub_18000D4CC(&dword_1801CDD04);
    }
  }
  return 0LL;
}
