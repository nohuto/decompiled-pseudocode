/*
 * XREFs of NvmeAdapterPassiveCoolingCallback @ 0x140123E40
 * Callers:
 *     <none>
 * Callees:
 *     NvmeAdapterSetMaxOperationalPower @ 0x1401264A8 (NvmeAdapterSetMaxOperationalPower.c)
 */

__int64 __fastcall NvmeAdapterPassiveCoolingCallback(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  LOBYTE(a3) = 1;
  return NvmeAdapterSetMaxOperationalPower(a1, &v4, a3, 2LL);
}
