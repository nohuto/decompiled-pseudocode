/*
 * XREFs of sub_1800A687C @ 0x1800A687C
 * Callers:
 *     sub_180002FB0 @ 0x180002FB0 (sub_180002FB0.c)
 *     sub_180003130 @ 0x180003130 (sub_180003130.c)
 *     sub_1800031A0 @ 0x1800031A0 (sub_1800031A0.c)
 *     sub_180003210 @ 0x180003210 (sub_180003210.c)
 *     sub_180003280 @ 0x180003280 (sub_180003280.c)
 *     sub_1800032F0 @ 0x1800032F0 (sub_1800032F0.c)
 *     sub_180003360 @ 0x180003360 (sub_180003360.c)
 *     sub_1800033D0 @ 0x1800033D0 (sub_1800033D0.c)
 *     sub_180003440 @ 0x180003440 (sub_180003440.c)
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_180003520 @ 0x180003520 (sub_180003520.c)
 *     sub_180003590 @ 0x180003590 (sub_180003590.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 *     sub_1800A6800 @ 0x1800A6800 (sub_1800A6800.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800A687C()
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
  __int128 v10; // [rsp+20h] [rbp-69h]
  __int128 v11; // [rsp+20h] [rbp-69h]
  __int128 v12; // [rsp+30h] [rbp-59h]
  __int128 v13; // [rsp+50h] [rbp-39h] BYREF
  __int128 v14; // [rsp+60h] [rbp-29h]
  _QWORD v15[4]; // [rsp+70h] [rbp-19h] BYREF
  _BYTE v16[32]; // [rsp+90h] [rbp+7h] BYREF
  _QWORD v17[4]; // [rsp+B0h] [rbp+27h] BYREF

  v0 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex);
  if ( dword_1801CE028 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CE028);
    if ( dword_1801CE028 == -1 )
    {
      *(_QWORD *)&v10 = &unk_18013CF50;
      *((_QWORD *)&v10 + 1) = &unk_18013D4B4;
      *(_QWORD *)&v12 = 0x100000005LL;
      v1 = sub_1800A6800();
      v2 = sub_180075CF8(v17, 0LL, (__int64)v1, 0);
      v3 = sub_18001C928((__int64)v16, (__int64)"Font/ShaderModel40/", v2);
      v4 = sub_18001C87C((__int64)v15, v3, (__int64)"/Pixel");
      v13 = v10;
      v14 = v12;
      sub_180075D94(v4, (__int64)&v13);
      sub_1800129D0((__int64)v16);
      sub_1800129D0((__int64)v17);
      sub_18000D4CC(&dword_1801CE028);
    }
  }
  if ( dword_1801CE02C > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CE02C);
    if ( dword_1801CE02C == -1 )
    {
      *(_QWORD *)&v11 = &unk_18013D4C0;
      *((_QWORD *)&v11 + 1) = &unk_18013D764;
      *(_QWORD *)&v12 = 0x100000001LL;
      v5 = sub_1800A6800();
      v6 = sub_180075CF8(v15, 0LL, (__int64)v5, 0);
      v7 = sub_18001C928((__int64)v16, (__int64)"Font/ShaderModel40/", v6);
      v8 = sub_18001C87C((__int64)v17, v7, (__int64)"/Vertex");
      v13 = v11;
      v14 = v12;
      sub_180075D94(v8, (__int64)&v13);
      sub_1800129D0((__int64)v16);
      sub_1800129D0((__int64)v15);
      sub_18000D4CC(&dword_1801CE02C);
    }
  }
  return 0LL;
}
