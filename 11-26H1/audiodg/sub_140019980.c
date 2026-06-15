/*
 * XREFs of sub_140019980 @ 0x140019980
 * Callers:
 *     sub_1400191A0 @ 0x1400191A0 (sub_1400191A0.c)
 *     sub_140019480 @ 0x140019480 (sub_140019480.c)
 *     sub_1400196D0 @ 0x1400196D0 (sub_1400196D0.c)
 *     sub_140019850 @ 0x140019850 (sub_140019850.c)
 *     sub_140052EBC @ 0x140052EBC (sub_140052EBC.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140019980(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _DWORD v7[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v8; // [rsp+40h] [rbp-19h]
  unsigned __int16 *v9; // [rsp+50h] [rbp-9h] BYREF
  int v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+5Ch] [rbp+3h]
  unsigned __int8 *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  __int64 v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  __int64 v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]

  v17 = a6;
  v15 = a5;
  v7[0] = *a2 << 24;
  v7[1] = *(unsigned __int16 *)(a2 + 1);
  v8 = *(_QWORD *)(a2 + 3);
  v9 = *(unsigned __int16 **)(a1 + 8);
  v18 = 8LL;
  v16 = 8LL;
  v10 = *v9;
  v13 = *(unsigned __int16 *)(a2 + 11);
  v12 = a2 + 11;
  v11 = 2;
  v14 = 1;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
           *(_QWORD *)(a1 + 32),
           v7,
           0LL,
           0LL,
           4,
           &v9,
           (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
}
