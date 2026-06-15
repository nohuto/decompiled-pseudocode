/*
 * XREFs of sub_1400345A8 @ 0x1400345A8
 * Callers:
 *     sub_14003454C @ 0x14003454C (sub_14003454C.c)
 *     sub_14006B7BC @ 0x14006B7BC (sub_14006B7BC.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_140006B48 @ 0x140006B48 (sub_140006B48.c)
 *     sub_1400346B4 @ 0x1400346B4 (sub_1400346B4.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

void __fastcall sub_1400345A8(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v4[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v5; // [rsp+48h] [rbp+Fh]
  unsigned __int16 *v6; // [rsp+50h] [rbp+17h] BYREF
  int v7; // [rsp+58h] [rbp+1Fh]
  int v8; // [rsp+5Ch] [rbp+23h]
  void *v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  __int64 *v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]

  v2 = sub_140006470(a1);
  if ( *(_DWORD *)v2 > 4u )
  {
    v12 = &v3;
    v6 = *(unsigned __int16 **)(v2 + 8);
    v4[1] = 4;
    v3 = a1;
    v13 = 8LL;
    v4[0] = 184549376;
    v5 = 0LL;
    v7 = *v6;
    v9 = &unk_1400D24E4;
    v8 = 2;
    v10 = 50;
    v11 = 1;
    ((void (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int, __int64))EtwEventWriteTransfer)(
      *(_QWORD *)(v2 + 32),
      v4,
      0LL,
      0LL,
      3,
      &v6,
      (unsigned int)&unk_1400D4619 - (unsigned int)&unk_1400D1550,
      a1);
  }
  sub_1400346B4(a1 + 16);
  sub_140006B48(a1 + 344);
}
