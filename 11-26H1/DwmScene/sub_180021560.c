/*
 * XREFs of sub_180021560 @ 0x180021560
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_1800209F4 @ 0x1800209F4 (sub_1800209F4.c)
 */

void __fastcall sub_180021560(__int64 a1, __int64 a2, __int64 a3, double a4, void *a5, void *a6, int a7)
{
  void *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+50h] [rbp-30h] BYREF
  void *v11; // [rsp+58h] [rbp-28h] BYREF
  void *v12; // [rsp+60h] [rbp-20h] BYREF
  double v13; // [rsp+68h] [rbp-18h] BYREF
  __int64 v14; // [rsp+70h] [rbp-10h] BYREF
  void *v15; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801BD188 > 5 )
  {
    v10 = a7;
    v11 = a6;
    v12 = a5;
    v13 = a4;
    v14 = sub_1800209F4(a3);
    v15 = v7;
    sub_180001010(
      v8,
      (__int64)&unk_1801A0A47,
      v9,
      (__int64)v7,
      &v15,
      (__int64)&v14,
      (__int64)&v13,
      &v12,
      &v11,
      (__int64)&v10);
  }
}
