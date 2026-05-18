/*
 * XREFs of sub_180021600 @ 0x180021600
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_1800209F4 @ 0x1800209F4 (sub_1800209F4.c)
 */

void __fastcall sub_180021600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, int a7)
{
  void *v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp-30h] BYREF
  void *v12; // [rsp+58h] [rbp-28h] BYREF
  void *v13; // [rsp+60h] [rbp-20h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h] BYREF
  void *v16; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801BD188 > 5 )
  {
    v11 = a7;
    v12 = a6;
    v13 = a5;
    v14 = a4;
    v15 = sub_1800209F4(a3);
    v16 = v7;
    sub_180001010(v8, (__int64)&unk_1801A0913, v9, v10, &v16, (__int64)&v15, (__int64)&v14, &v13, &v12, (__int64)&v11);
  }
}
