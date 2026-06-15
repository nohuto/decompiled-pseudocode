/*
 * XREFs of sub_14008ED14 @ 0x14008ED14
 * Callers:
 *     sub_14008D61C @ 0x14008D61C (sub_14008D61C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14008D1FC @ 0x14008D1FC (sub_14008D1FC.c)
 */

__int64 __fastcall sub_14008ED14(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int128 *a6,
        _WORD *Src,
        __int64 a8)
{
  int v11; // ebx
  int v12; // edx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  int v20; // [rsp+48h] [rbp-B8h]
  int v21; // [rsp+4Ch] [rbp-B4h]
  _BYTE v22[128]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-30h]
  __int128 v24; // [rsp+D8h] [rbp-28h]
  _OWORD v25[4]; // [rsp+E8h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+168h] [rbp+68h]

  v19 = 0LL;
  v21 = 0;
  v24 = 0uLL;
  v18 = 0LL;
  memset(v25, 0, sizeof(v25));
  v20 = 4;
  if ( Src[8] > 0x6Eu )
  {
    v11 = -2147024774;
    v12 = 460;
LABEL_3:
    sub_14000C2A8(
      (int)retaddr,
      v12,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
      v11);
    return (unsigned int)v11;
  }
  memcpy(v22, Src, (unsigned __int16)Src[8] + 18LL);
  v14 = a6[1];
  v24 = *a6;
  v23 = a8;
  v15 = a6[2];
  v25[0] = v14;
  v16 = a6[3];
  v25[1] = v15;
  v17 = a6[4];
  v25[2] = v16;
  v25[3] = v17;
  v11 = sub_14008D1FC(a1, a2, a4, a5, &v18);
  if ( v11 < 0 )
  {
    v12 = 464;
    goto LABEL_3;
  }
  return 0LL;
}
