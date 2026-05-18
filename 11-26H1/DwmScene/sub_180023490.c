/*
 * XREFs of sub_180023490 @ 0x180023490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180002274 @ 0x180002274 (sub_180002274.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

__int64 __fastcall sub_180023490(__int64 a1, __int64 *a2, __int64 a3, void *a4, __int64 a5, int *a6, int *a7)
{
  volatile signed __int64 **v8; // rdi
  char v11; // r14
  volatile signed __int64 *v12; // rdx
  const char *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  int v19; // [rsp+D8h] [rbp-80h] BYREF
  int v20; // [rsp+DCh] [rbp-7Ch] BYREF
  int v21; // [rsp+E0h] [rbp-78h] BYREF
  int v22; // [rsp+E4h] [rbp-74h] BYREF
  int v23; // [rsp+E8h] [rbp-70h] BYREF
  int v24; // [rsp+ECh] [rbp-6Ch] BYREF
  int v25; // [rsp+F0h] [rbp-68h] BYREF
  int v26; // [rsp+F4h] [rbp-64h] BYREF
  int v27; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+100h] [rbp-58h] BYREF
  __int64 v29; // [rsp+108h] [rbp-50h] BYREF
  __int64 v30; // [rsp+110h] [rbp-48h] BYREF
  __int64 v31; // [rsp+118h] [rbp-40h] BYREF
  __int64 v32; // [rsp+120h] [rbp-38h] BYREF
  __int64 v33; // [rsp+128h] [rbp-30h] BYREF
  __int64 v34; // [rsp+130h] [rbp-28h] BYREF
  void *v35; // [rsp+138h] [rbp-20h] BYREF
  const char *v36; // [rsp+140h] [rbp-18h] BYREF
  __int64 v37; // [rsp+148h] [rbp-10h] BYREF
  __int64 v38; // [rsp+150h] [rbp-8h] BYREF
  _BYTE *v39; // [rsp+158h] [rbp+0h] BYREF
  _BYTE v40[144]; // [rsp+168h] [rbp+10h] BYREF

  v8 = (volatile signed __int64 **)(a1 + 112);
  v11 = a3;
  sub_180023298(*(_QWORD *)(a1 + 112), a1 + 249, a3);
  if ( (unsigned int)dword_1801BD1C0 > 5 && sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL) )
  {
    v12 = *v8;
    v35 = a4;
    v27 = 1;
    v19 = a7[7];
    v20 = a7[6];
    v21 = a7[4];
    v22 = *a7;
    v28 = *((_QWORD *)a6 + 7);
    v29 = *((_QWORD *)a6 + 6);
    v30 = *((_QWORD *)a6 + 5);
    v31 = *((_QWORD *)a6 + 4);
    v32 = *((_QWORD *)a6 + 3);
    v33 = *((_QWORD *)a6 + 2);
    v23 = a6[3];
    v24 = a6[2];
    v25 = a6[1];
    v26 = *a6;
    v34 = a5;
    v13 = "success";
    if ( !v11 )
      v13 = "fail";
    v36 = v13;
    v37 = *a2;
    v38 = *(_QWORD *)(a1 + 8);
    v39 = sub_180021DD4(v40, v12);
    sub_180002274(
      v14,
      byte_1801A14EA,
      v15,
      v16,
      (void **)&v39,
      (__int64)&v27,
      &v38,
      &v37,
      (void **)&v36,
      &v35,
      (__int64)&v34,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  v17 = sub_180023FFC((char *)(a1 + 120));
  return sub_18002470C(v8, v17);
}
