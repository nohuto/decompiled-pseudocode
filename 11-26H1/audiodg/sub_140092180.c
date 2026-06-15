/*
 * XREFs of sub_140092180 @ 0x140092180
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_140091A48 @ 0x140091A48 (sub_140091A48.c)
 */

__int64 __fastcall sub_140092180(__int64 a1, int a2, unsigned int a3, _WORD *a4, __int64 a5, __int64 a6)
{
  int v7; // ebx
  int v8; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // [rsp+20h] [rbp-59h] BYREF
  __int64 v13; // [rsp+30h] [rbp-49h]
  int v14; // [rsp+38h] [rbp-41h]
  __int64 v15; // [rsp+3Ch] [rbp-3Dh]
  __int64 v16; // [rsp+44h] [rbp-35h]
  __int64 v17; // [rsp+4Ch] [rbp-2Dh]
  _OWORD v18[2]; // [rsp+54h] [rbp-25h] BYREF
  __int64 v19; // [rsp+74h] [rbp-5h]
  __int128 v20; // [rsp+7Ch] [rbp+3h]
  __int128 v21; // [rsp+8Ch] [rbp+13h]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+4Fh]

  v14 = a2;
  v13 = 0LL;
  v19 = 0LL;
  v15 = a3;
  v16 = a5;
  v17 = a6;
  v12 = 0LL;
  memset(v18, 0, sizeof(v18));
  v20 = 0LL;
  v21 = 0LL;
  if ( a4[8] > 0x36u )
  {
    v7 = -2147024774;
    v8 = 45;
LABEL_3:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudiopump.cpp", v7);
    return (unsigned int)v7;
  }
  memcpy(v18, a4, (unsigned __int16)a4[8] + 18LL);
  v7 = sub_140091A48((_QWORD *)(a1 - 48), (__int64)&v12, v10, v11);
  if ( v7 < 0 )
  {
    v8 = 48;
    goto LABEL_3;
  }
  return 0LL;
}
