/*
 * XREFs of sub_180080F34 @ 0x180080F34
 * Callers:
 *     sub_18005D540 @ 0x18005D540 (sub_18005D540.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_180080E98 @ 0x180080E98 (sub_180080E98.c)
 *     sub_180081260 @ 0x180081260 (sub_180081260.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001874C @ 0x18001874C (sub_18001874C.c)
 *     sub_18001C87C @ 0x18001C87C (sub_18001C87C.c)
 *     sub_18001C8C0 @ 0x18001C8C0 (sub_18001C8C0.c)
 *     sub_18001EA08 @ 0x18001EA08 (sub_18001EA08.c)
 *     sub_18004C0E0 @ 0x18004C0E0 (sub_18004C0E0.c)
 *     sub_18004E364 @ 0x18004E364 (sub_18004E364.c)
 *     sub_18004EE08 @ 0x18004EE08 (sub_18004EE08.c)
 *     sub_18005DD64 @ 0x18005DD64 (sub_18005DD64.c)
 *     sub_180080E34 @ 0x180080E34 (sub_180080E34.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180080F34(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  char *v8; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  void *v18[4]; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v19[4]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h] BYREF
  __int64 v21; // [rsp+70h] [rbp-90h]
  _BYTE v22[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v23[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v24[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v25[4]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v26[4]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v27[4]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v28[4]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE v29[32]; // [rsp+168h] [rbp+68h] BYREF
  _BYTE v30[32]; // [rsp+188h] [rbp+88h] BYREF

  v18[2] = a2;
  v18[3] = a4;
  if ( !a2[2] )
  {
    sub_1800181BC(&v20, a1[2] + 496LL);
    sub_18001874C((__int64)a2, (__int64)&v20);
    sub_1800129D0((__int64)&v20);
  }
  if ( !a4[2] )
  {
    switch ( *(_DWORD *)(a1[2] + 552LL) )
    {
      case 1:
        v8 = "ShaderModel50";
        break;
      case 2:
        v8 = "ShaderModel41";
        break;
      case 3:
        v8 = "ShaderModel40";
        break;
      case 4:
        v8 = "ShaderModel40_Level93";
        break;
      case 5:
        v8 = "ShaderModel40_Level91";
        break;
      default:
        v8 = "<invalid>";
        break;
    }
    sub_180011CC4(&v20, v8);
    sub_18001874C((__int64)a4, (__int64)&v20);
    sub_1800129D0((__int64)&v20);
  }
  sub_18005DD64(a1[2], &v20);
  sub_18004E364(v20, (__int64 *)v18, a3);
  sub_18004EE08(v28, (__int64 **)v18);
  v9 = sub_18001C8C0(v19, (__int64)a2, (__int64)"/");
  v10 = sub_18001EA08((__int64)v30, (__int64)v9, (__int64)a4);
  v11 = sub_18001C87C((__int64)v29, v10, (__int64)"/");
  sub_18001EA08((__int64)v22, v11, (__int64)v28);
  sub_1800129D0((__int64)v29);
  sub_1800129D0((__int64)v30);
  sub_1800129D0((__int64)v19);
  sub_18001C8C0(v27, (__int64)v22, (__int64)"/Vertex");
  sub_18001C8C0(v26, (__int64)v22, (__int64)"/Pixel");
  sub_18001C8C0(v25, (__int64)v22, (__int64)"/Geometry");
  sub_18001C8C0(v24, (__int64)v22, (__int64)"/Domain");
  sub_18001C8C0(v23, (__int64)v22, (__int64)"/Hull");
  v12 = sub_1800181BC(v19, (__int64)v27);
  sub_180080E34(a1, 1, (__int64)v12);
  v13 = sub_1800181BC(v19, (__int64)v26);
  sub_180080E34(a1, 5, (__int64)v13);
  v14 = sub_1800181BC(v19, (__int64)v25);
  sub_180080E34(a1, 4, (__int64)v14);
  v15 = sub_1800181BC(v19, (__int64)v24);
  sub_180080E34(a1, 3, (__int64)v15);
  v16 = sub_1800181BC(v19, (__int64)v23);
  sub_180080E34(a1, 2, (__int64)v16);
  sub_1800129D0((__int64)v23);
  sub_1800129D0((__int64)v24);
  sub_1800129D0((__int64)v25);
  sub_1800129D0((__int64)v26);
  sub_1800129D0((__int64)v27);
  sub_1800129D0((__int64)v22);
  sub_1800129D0((__int64)v28);
  sub_18004C0E0(v18, (__int64)v18);
  if ( v21 )
    sub_180010EC8(v21);
  sub_1800129D0((__int64)a2);
  return sub_1800129D0((__int64)a4);
}
