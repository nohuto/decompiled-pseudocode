/*
 * XREFs of sub_14002F5B8 @ 0x14002F5B8
 * Callers:
 *     sub_140065450 @ 0x140065450 (sub_140065450.c)
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14002F5B8(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  _DWORD v12[2]; // [rsp+38h] [rbp-69h] BYREF
  __int64 v13; // [rsp+40h] [rbp-61h]
  unsigned __int16 *v14; // [rsp+50h] [rbp-51h] BYREF
  int v15; // [rsp+58h] [rbp-49h]
  int v16; // [rsp+5Ch] [rbp-45h]
  unsigned __int8 *v17; // [rsp+60h] [rbp-41h]
  int v18; // [rsp+68h] [rbp-39h]
  int v19; // [rsp+6Ch] [rbp-35h]
  __int64 v20; // [rsp+70h] [rbp-31h]
  __int64 v21; // [rsp+78h] [rbp-29h]
  __int64 v22; // [rsp+80h] [rbp-21h]
  __int64 v23; // [rsp+88h] [rbp-19h]
  __int64 v24; // [rsp+90h] [rbp-11h]
  __int64 v25; // [rsp+98h] [rbp-9h]
  __int64 v26; // [rsp+A0h] [rbp-1h]
  __int64 v27; // [rsp+A8h] [rbp+7h]
  __int64 v28; // [rsp+B0h] [rbp+Fh]
  __int64 v29; // [rsp+B8h] [rbp+17h]

  v28 = a9;
  v26 = a8;
  v24 = a7;
  v22 = a6;
  v27 = 1LL;
  v25 = 1LL;
  v29 = 4LL;
  v10 = *a5;
  v12[0] = *a2 << 24;
  v12[1] = *(unsigned __int16 *)(a2 + 1);
  v13 = *(_QWORD *)(a2 + 3);
  v14 = *(unsigned __int16 **)(a1 + 8);
  v20 = v10;
  v23 = 8LL;
  v21 = 16LL;
  v15 = *v14;
  v18 = *(unsigned __int16 *)(a2 + 11);
  v17 = a2 + 11;
  v19 = 1;
  v16 = 2;
  return ((__int64 (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int))EtwEventWriteTransfer)(
           *(_QWORD *)(a1 + 32),
           v12,
           0LL,
           0LL,
           7,
           &v14,
           (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550);
}
