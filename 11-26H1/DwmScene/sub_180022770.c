/*
 * XREFs of sub_180022770 @ 0x180022770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001530 @ 0x180001530 (sub_180001530.c)
 *     sub_180002C84 @ 0x180002C84 (sub_180002C84.c)
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_180021DD4 @ 0x180021DD4 (sub_180021DD4.c)
 *     sub_180023298 @ 0x180023298 (sub_180023298.c)
 *     sub_180023FFC @ 0x180023FFC (sub_180023FFC.c)
 *     sub_18002470C @ 0x18002470C (sub_18002470C.c)
 */

__int64 __fastcall sub_180022770(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        char a4,
        void *a5,
        int a6,
        void *a7,
        void *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        int a15,
        int a16,
        int a17,
        int a18,
        void *a19)
{
  volatile signed __int64 **v20; // rdi
  volatile signed __int64 *v24; // rdx
  const char *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  int v31; // [rsp+D8h] [rbp-80h] BYREF
  int v32; // [rsp+DCh] [rbp-7Ch] BYREF
  int v33; // [rsp+E0h] [rbp-78h] BYREF
  int v34; // [rsp+E4h] [rbp-74h] BYREF
  int v35; // [rsp+E8h] [rbp-70h] BYREF
  int v36; // [rsp+ECh] [rbp-6Ch] BYREF
  void *v37; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+100h] [rbp-58h] BYREF
  __int64 v40; // [rsp+108h] [rbp-50h] BYREF
  __int64 v41; // [rsp+110h] [rbp-48h] BYREF
  __int64 v42; // [rsp+118h] [rbp-40h] BYREF
  __int64 v43; // [rsp+120h] [rbp-38h] BYREF
  void *v44; // [rsp+128h] [rbp-30h] BYREF
  void *v45; // [rsp+130h] [rbp-28h] BYREF
  void *v46; // [rsp+138h] [rbp-20h] BYREF
  const char *v47; // [rsp+140h] [rbp-18h] BYREF
  __int64 v48; // [rsp+148h] [rbp-10h] BYREF
  __int64 v49; // [rsp+150h] [rbp-8h] BYREF
  __int64 v50; // [rsp+158h] [rbp+0h] BYREF
  _BYTE *v51; // [rsp+160h] [rbp+8h] BYREF
  _BYTE v52[144]; // [rsp+168h] [rbp+10h] BYREF

  v20 = (volatile signed __int64 **)(a1 + 112);
  sub_180023298(*(_QWORD *)(a1 + 112), a1 + 249);
  if ( (unsigned int)dword_1801BD1C0 > 5 && sub_180001530((__int64)&dword_1801BD1C0, 0x400000000000LL) )
  {
    v24 = *v20;
    v37 = a19;
    v31 = a18;
    v32 = a17;
    v33 = a16;
    v34 = a15;
    v38 = a14;
    v39 = a13;
    v40 = a12;
    v41 = a11;
    v42 = a10;
    v43 = a9;
    v44 = a8;
    v45 = a7;
    v35 = a6;
    v46 = a5;
    v25 = "fail";
    if ( a4 )
      v25 = "success";
    v36 = 1;
    v47 = v25;
    v48 = *a3;
    v49 = *a2;
    v50 = *(_QWORD *)(a1 + 16);
    v51 = sub_180021DD4(v52, v24);
    sub_180002C84(
      v26,
      byte_1801A0AB0,
      v27,
      v28,
      (void **)&v51,
      (__int64)&v36,
      &v50,
      &v49,
      &v48,
      (void **)&v47,
      &v46,
      (__int64)&v35,
      &v45,
      &v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      &v37);
  }
  v29 = sub_180023FFC((char *)(a1 + 120));
  return sub_18002470C(v20, v29);
}
