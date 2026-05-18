/*
 * XREFs of sub_1800216A0 @ 0x1800216A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001010 @ 0x180001010 (sub_180001010.c)
 *     sub_1800209F4 @ 0x1800209F4 (sub_1800209F4.c)
 */

void __fastcall sub_1800216A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *a5, void *a6, int a7)
{
  __int64 v7; // r8
  void *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // [rsp+50h] [rbp-30h] BYREF
  void *v13; // [rsp+58h] [rbp-28h] BYREF
  void *v14; // [rsp+60h] [rbp-20h] BYREF
  __int64 v15; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  void *v17; // [rsp+78h] [rbp-8h] BYREF

  if ( (unsigned int)dword_1801BD188 > 5 )
  {
    v12 = a7;
    v13 = a6;
    v14 = a5;
    v15 = sub_1800209F4(a4);
    v16 = sub_1800209F4(v7);
    v17 = v8;
    sub_180001010(v9, (__int64)&unk_1801A08A9, v10, v11, &v17, (__int64)&v16, (__int64)&v15, &v14, &v13, (__int64)&v12);
  }
}
