/*
 * XREFs of CmpInitializeLightWeightTransactionType @ 0x1408622BC
 * Callers:
 *     CmInitSystem1 @ 0x140CEEC2C (CmInitSystem1.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectTypeEx @ 0x140A67030 (ObCreateObjectTypeEx.c)
 */

__int64 CmpInitializeLightWeightTransactionType()
{
  __int16 Src; // [rsp+30h] [rbp-29h] BYREF
  char v2; // [rsp+32h] [rbp-27h]
  int v3; // [rsp+38h] [rbp-21h]
  int v4; // [rsp+3Ch] [rbp-1Dh]
  int v5; // [rsp+40h] [rbp-19h]
  int v6; // [rsp+44h] [rbp-15h]
  int v7; // [rsp+48h] [rbp-11h]
  int v8; // [rsp+4Ch] [rbp-Dh]
  int v9; // [rsp+54h] [rbp-5h]
  int v10; // [rsp+58h] [rbp-1h]
  __int64 v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  __int64 (__fastcall *v13)(); // [rsp+70h] [rbp+17h]
  __int64 (__fastcall *v14)(); // [rsp+78h] [rbp+1Fh]

  memset_0(&Src, 0, 0x78uLL);
  Src = 120;
  v7 = 2031679;
  v8 = 2031679;
  v3 = 48;
  v4 = 1179649;
  v2 = v2 & 0xE3 | 0xC;
  v13 = CmpCloseLightWeightTransaction;
  v14 = CmpDeleteLightWeightTransaction;
  v5 = 1179710;
  v6 = 1179672;
  v10 = 32;
  v9 = 1;
  v11 = 0LL;
  v12 = 0LL;
  return ObCreateObjectTypeEx(&CmpTransactionTypeNameString, &Src, (__int64)&CmRegistryTransactionType);
}
