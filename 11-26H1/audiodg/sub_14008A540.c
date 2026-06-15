/*
 * XREFs of sub_14008A540 @ 0x14008A540
 * Callers:
 *     sub_14008A224 @ 0x14008A224 (sub_14008A224.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_14008A044 @ 0x14008A044 (sub_14008A044.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14008A540(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  int v9; // ebx
  int v10; // edx
  __int64 v12; // rcx
  __int128 v13; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h]
  int v15; // [rsp+48h] [rbp-C0h]
  int v16; // [rsp+4Ch] [rbp-BCh]
  __int64 v17; // [rsp+50h] [rbp-B8h]
  _BYTE v18[128]; // [rsp+58h] [rbp-B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+108h] [rbp+0h]

  v13 = 0LL;
  v14 = 0LL;
  v16 = 0;
  memset(v18, 0, sizeof(v18));
  v15 = 3;
  v17 = a6;
  v9 = sub_14008A044(a1, a2, a4, a5, &v13);
  if ( v9 < 0 )
  {
    v10 = 65;
LABEL_3:
    sub_14000C2A8(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspdevicegraphconnectionproperty.cpp",
      v9);
    return (unsigned int)v9;
  }
  v12 = a1[8];
  a1[8] = 0LL;
  if ( v12 )
    sub_1400B6010(v12);
  v9 = sub_1400B6010(a4);
  if ( v9 < 0 )
  {
    v10 = 66;
    goto LABEL_3;
  }
  return 0LL;
}
