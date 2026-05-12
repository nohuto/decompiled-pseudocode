/*
 * XREFs of sub_1400CBA00 @ 0x1400CBA00
 * Callers:
 *     sub_1400E4240 @ 0x1400E4240 (sub_1400E4240.c)
 *     sub_140189ED8 @ 0x140189ED8 (sub_140189ED8.c)
 * Callees:
 *     sub_1400D16C4 @ 0x1400D16C4 (sub_1400D16C4.c)
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 *     sub_140194600 @ 0x140194600 (sub_140194600.c)
 *     sub_140194D2C @ 0x140194D2C (sub_140194D2C.c)
 */

__int64 __fastcall sub_1400CBA00(__int64 a1, __int16 a2, unsigned __int8 a3, int a4, __int64 *a5)
{
  __int64 v6; // r14
  int v8; // ebx
  __int64 v9; // rbp
  int v10; // ebx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
  v12 = sub_1400D16C4(a1);
  if ( v12 )
  {
    return (unsigned int)-1073741771;
  }
  else
  {
    v10 = sub_140194600(v9, v8, 0, a4, (__int64)&v12);
    if ( v10 >= 0 )
    {
      *(_WORD *)(v12 + 4) = a2;
      *(_QWORD *)(v12 + 136) = v6 ^ (*(_QWORD *)(v12 + 136) ^ v6) & 0xFFFFFFFFFFFFFFFEuLL;
      v10 = sub_140194D2C(v12);
      if ( v10 >= 0 )
        *a5 = v12;
      else
        sub_1400DEFC4(&v12);
    }
  }
  return (unsigned int)v10;
}
