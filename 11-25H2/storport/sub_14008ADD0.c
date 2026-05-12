/*
 * XREFs of sub_14008ADD0 @ 0x14008ADD0
 * Callers:
 *     sub_1400E9790 @ 0x1400E9790 (sub_1400E9790.c)
 *     sub_1400E9D5C @ 0x1400E9D5C (sub_1400E9D5C.c)
 *     sub_1400EDB9C @ 0x1400EDB9C (sub_1400EDB9C.c)
 *     sub_1400EE010 @ 0x1400EE010 (sub_1400EE010.c)
 *     sub_1400F2CA8 @ 0x1400F2CA8 (sub_1400F2CA8.c)
 *     sub_1400FA240 @ 0x1400FA240 (sub_1400FA240.c)
 *     sub_1401146B0 @ 0x1401146B0 (sub_1401146B0.c)
 *     sub_140114720 @ 0x140114720 (sub_140114720.c)
 *     sub_140114E3C @ 0x140114E3C (sub_140114E3C.c)
 *     sub_140128644 @ 0x140128644 (sub_140128644.c)
 *     sub_14012CDB4 @ 0x14012CDB4 (sub_14012CDB4.c)
 * Callees:
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 */

__int64 __fastcall sub_14008ADD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int v6; // esi
  int v7; // ebp
  int v8; // r14d
  __int64 v9; // rdi
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+3Ch] [rbp-1Ch]

  v13 = 0;
  v11 = 3LL;
  v6 = a3;
  v7 = a2;
  v12 = a5 | 0x80000000;
  v8 = a1;
  v9 = ExAllocatePool3(a1, a2, a3, &v11, 1);
  if ( !v9 && a4 )
    sub_14008D9B8(a4, v8, v7, v6, a5);
  return v9;
}
