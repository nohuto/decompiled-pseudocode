/*
 * XREFs of sub_140092BB0 @ 0x140092BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_140092974 @ 0x140092974 (sub_140092974.c)
 */

__int64 __fastcall sub_140092BB0(__int64 a1, const void *a2, size_t a3)
{
  int v6; // ebx
  int v7; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // [rsp+20h] [rbp-818h] BYREF
  __int64 v12; // [rsp+30h] [rbp-808h]
  int v13; // [rsp+38h] [rbp-800h]
  _BYTE v14[2004]; // [rsp+3Ch] [rbp-7FCh] BYREF
  _UNKNOWN *retaddr; // [rsp+838h] [rbp+0h]

  v12 = 0LL;
  v11 = 0LL;
  memset(v14, 0, 0x7D0uLL);
  if ( a3 > 0x7D0 )
  {
    v6 = -2147024774;
    v7 = 37;
LABEL_3:
    sub_14000C2A8(
      (int)retaddr,
      v7,
      (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioprocessor.cpp",
      v6);
    return (unsigned int)v6;
  }
  memcpy(v14, a2, a3);
  v13 = a3;
  v6 = sub_140092974((_QWORD *)(a1 - 48), (__int64)&v11, v9, v10);
  if ( v6 < 0 )
  {
    v7 = 41;
    goto LABEL_3;
  }
  return 0LL;
}
