/*
 * XREFs of sub_140006898 @ 0x140006898
 * Callers:
 *     sub_140005D50 @ 0x140005D50 (sub_140005D50.c)
 *     sub_14000F170 @ 0x14000F170 (sub_14000F170.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140006898(__int64 a1, unsigned __int8 *a2, __int64 a3, __int64 a4, __int64 *a5, __int64 a6)
{
  __int64 v7; // rcx
  _DWORD v9[2]; // [rsp+38h] [rbp-21h] BYREF
  __int64 v10; // [rsp+40h] [rbp-19h]
  unsigned __int16 *v11; // [rsp+50h] [rbp-9h] BYREF
  int v12; // [rsp+58h] [rbp-1h]
  int v13; // [rsp+5Ch] [rbp+3h]
  unsigned __int8 *v14; // [rsp+60h] [rbp+7h]
  int v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+6Ch] [rbp+13h]
  __int64 v17; // [rsp+70h] [rbp+17h]
  __int64 v18; // [rsp+78h] [rbp+1Fh]
  __int64 v19; // [rsp+80h] [rbp+27h]
  __int64 v20; // [rsp+88h] [rbp+2Fh]

  v19 = a6;
  v20 = 8LL;
  v18 = 16LL;
  v7 = *a5;
  v9[0] = *a2 << 24;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v10 = *(_QWORD *)(a2 + 3);
  v11 = *(unsigned __int16 **)(a1 + 8);
  v17 = v7;
  v12 = *v11;
  v15 = *(unsigned __int16 *)(a2 + 11);
  v14 = a2 + 11;
  v13 = 2;
  v16 = 1;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
           *(_QWORD *)(a1 + 32),
           v9,
           0LL,
           0LL,
           4,
           &v11,
           (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
}
