/*
 * XREFs of sub_140138200 @ 0x140138200
 * Callers:
 *     sub_14013477C @ 0x14013477C (sub_14013477C.c)
 *     sub_1401351D4 @ 0x1401351D4 (sub_1401351D4.c)
 *     sub_140135C8C @ 0x140135C8C (sub_140135C8C.c)
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 *     sub_1401396CC @ 0x1401396CC (sub_1401396CC.c)
 * Callees:
 *     sub_140138270 @ 0x140138270 (sub_140138270.c)
 */

__int64 __fastcall sub_140138200(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, int a6, _DWORD *a7)
{
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+34h] [rbp-2Ch]
  __int64 v12; // [rsp+38h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-20h]
  int v14; // [rsp+44h] [rbp-1Ch]
  __int64 v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+50h] [rbp-10h]
  int v17; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v17 = 0;
  v12 = a4;
  v15 = a5;
  v16 = a6;
  v8[0] = a4;
  v8[1] = a4;
  v9 = &v12;
  v13 = 4;
  v14 = 8;
  v10 = 1;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _DWORD *))sub_140138270)(a1, a2, a3, v8);
  if ( a7 )
    *a7 = v16;
  return result;
}
