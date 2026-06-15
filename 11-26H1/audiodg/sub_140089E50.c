/*
 * XREFs of sub_140089E50 @ 0x140089E50
 * Callers:
 *     sub_1400892B4 @ 0x1400892B4 (sub_1400892B4.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140088F00 @ 0x140088F00 (sub_140088F00.c)
 *     sub_1400890D4 @ 0x1400890D4 (sub_1400890D4.c)
 *     sub_140092F04 @ 0x140092F04 (sub_140092F04.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140089E50(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8)
{
  int v12; // edi
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int128 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  __int64 v18; // [rsp+48h] [rbp-B8h]
  unsigned int v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+54h] [rbp-ACh]
  __int128 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  int v23; // [rsp+70h] [rbp-90h]
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  __int64 v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+98h] [rbp-68h]
  int v27; // [rsp+9Ch] [rbp-64h]
  unsigned int v28; // [rsp+A0h] [rbp-60h]
  int v29; // [rsp+A4h] [rbp-5Ch]
  _BYTE v30[128]; // [rsp+A8h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+178h] [rbp+78h]

  switch ( a8 )
  {
    case 0:
      sub_14000C2A8(
        (int)retaddr,
        76,
        (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspdevicegraphbuffer.cpp",
        -2147024809);
      return 2147942487LL;
    case 1:
      v24 = 0LL;
      v25 = 0LL;
      v27 = 0;
      memset(v30, 0, sizeof(v30));
      v26 = 2;
      v28 = a6;
      v29 = a7;
      v12 = sub_1400890D4((_QWORD *)(a1 + 8), a2, a4, a5, &v24);
      if ( v12 < 0 )
      {
        v13 = 85;
LABEL_6:
        sub_14000C2A8(
          (int)retaddr,
          v13,
          (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspdevicegraphbuffer.cpp",
          v12);
        return (unsigned int)v12;
      }
      v14 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = 0LL;
      if ( v14 )
        sub_1400B6010(v14);
      v12 = sub_1400B6010(a4);
      if ( v12 < 0 )
      {
        v13 = 86;
        goto LABEL_6;
      }
      break;
    case 2:
      v16 = 0LL;
      v17 = 0LL;
      v18 = 2LL;
      v21 = 0LL;
      v22 = 0LL;
      v23 = 0;
      v19 = a6;
      v20 = a7;
      v12 = sub_140088F00((_QWORD *)(a1 + 8), a2, a3, (__int64)&v16);
      if ( v12 < 0 )
      {
        v13 = 95;
        goto LABEL_6;
      }
      v15 = *(_QWORD *)(a1 + 88);
      *(_QWORD *)(a1 + 88) = 0LL;
      if ( v15 )
        sub_1400B6010(v15);
      v12 = sub_140092F04(&v21, a6, a1 + 88);
      if ( v12 < 0 )
      {
        v13 = 96;
        goto LABEL_6;
      }
      break;
  }
  *(_QWORD *)(a1 + 96) = (unsigned int)(a7 - 1);
  *(_DWORD *)(a1 + 104) = a6;
  return 0LL;
}
