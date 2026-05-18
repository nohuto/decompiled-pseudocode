/*
 * XREFs of sub_1800A6608 @ 0x1800A6608
 * Callers:
 *     sub_180002FE0 @ 0x180002FE0 (sub_180002FE0.c)
 *     sub_180003160 @ 0x180003160 (sub_180003160.c)
 *     sub_1800031D0 @ 0x1800031D0 (sub_1800031D0.c)
 *     sub_180003240 @ 0x180003240 (sub_180003240.c)
 *     sub_1800032B0 @ 0x1800032B0 (sub_1800032B0.c)
 *     sub_180003320 @ 0x180003320 (sub_180003320.c)
 *     sub_180003390 @ 0x180003390 (sub_180003390.c)
 *     sub_180003400 @ 0x180003400 (sub_180003400.c)
 *     sub_180003470 @ 0x180003470 (sub_180003470.c)
 *     sub_1800034E0 @ 0x1800034E0 (sub_1800034E0.c)
 *     sub_180003550 @ 0x180003550 (sub_180003550.c)
 *     sub_1800035C0 @ 0x1800035C0 (sub_1800035C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000D4CC @ 0x18000D4CC (sub_18000D4CC.c)
 *     sub_18000D534 @ 0x18000D534 (sub_18000D534.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C928 @ 0x18001C928 (sub_18001C928.c)
 *     sub_180075CF8 @ 0x180075CF8 (sub_180075CF8.c)
 *     sub_180075D94 @ 0x180075D94 (sub_180075D94.c)
 *     sub_18009EBD8 @ 0x18009EBD8 (sub_18009EBD8.c)
 */

// Hidden C++ exception states: #wind=6
__int64 sub_1800A6608()
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
  if ( dword_1801CDD30 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDD30);
    if ( dword_1801CDD30 == -1 )
    {
      *(_QWORD *)&v10 = &unk_180139AA0;
      *((_QWORD *)&v10 + 1) = &unk_180139D20;
      *(_QWORD *)&v12 = 0x100000005LL;
      v1 = sub_18009EBD8();
      v2 = sub_180075CF8(v17, 0LL, (__int64)v1, 0);
      v3 = sub_18001C928((__int64)v16, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v2);
      v4 = sub_18001C87C((__int64)v15, v3, (__int64)"/Pixel");
      v13 = v10;
      v14 = v12;
      sub_180075D94(v4, (__int64)&v13);
      sub_1800129D0((__int64)v16);
      sub_1800129D0((__int64)v17);
      sub_18000D4CC(&dword_1801CDD30);
    }
  }
  if ( dword_1801CDD34 > *(_DWORD *)(v0 + 16) )
  {
    sub_18000D534(&dword_1801CDD34);
    if ( dword_1801CDD34 == -1 )
    {
      *(_QWORD *)&v11 = &unk_180139D20;
      *((_QWORD *)&v11 + 1) = &unk_18013A30C;
      *(_QWORD *)&v12 = 0x100000001LL;
      v5 = sub_18009EBD8();
      v6 = sub_180075CF8(v15, 0LL, (__int64)v5, 0);
      v7 = sub_18001C928((__int64)v16, (__int64)"ImageProcessingFullscreen/ShaderModel40/", v6);
      v8 = sub_18001C87C((__int64)v17, v7, (__int64)"/Vertex");
      v13 = v11;
      v14 = v12;
      sub_180075D94(v8, (__int64)&v13);
      sub_1800129D0((__int64)v16);
      sub_1800129D0((__int64)v15);
      sub_18000D4CC(&dword_1801CDD34);
    }
  }
  return 0LL;
}
