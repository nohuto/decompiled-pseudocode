/*
 * XREFs of sub_1401396CC @ 0x1401396CC
 * Callers:
 *     sub_140138A04 @ 0x140138A04 (sub_140138A04.c)
 * Callees:
 *     sub_1400859FC @ 0x1400859FC (sub_1400859FC.c)
 *     sub_1401352EC @ 0x1401352EC (sub_1401352EC.c)
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_140138200 @ 0x140138200 (sub_140138200.c)
 */

__int64 __fastcall sub_1401396CC(int **a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int *v7; // rcx
  bool v8; // zf
  int v9; // [rsp+50h] [rbp-20h] BYREF
  __int64 v10; // [rsp+54h] [rbp-1Ch]
  int v11; // [rsp+5Ch] [rbp-14h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]
  __int64 v14; // [rsp+B0h] [rbp+40h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  result = sub_140138200((__int64)a1, a2, 0x80200000001LL, 0xAu, (__int64)&v14, 8, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = 0;
    v11 = 0;
    v9 = 3;
    v10 = 3LL;
    v12 = 1;
    sub_1401352EC((char *)&v14, 8u);
    v7 = *a1;
    v8 = (v14 & 0xFFFFFFFF00000000uLL) == 0x80500000000LL;
    v14 &= 0xFFFFFFFF00000000uLL;
    sub_1400859FC(v7, "GetSecretProtection", !v8 + 29, 22, 0LL, 0LL);
    return sub_140137E38(
             (__int64)a1,
             a2,
             (v14 != 0x80500000000LL) + 0x1D0000001DLL,
             0x600000016LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64 *, __int64))sub_140137730,
             (__int64)&v9,
             0LL,
             0LL,
             (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))sub_140139430,
             (__int64)a3);
  }
  return result;
}
