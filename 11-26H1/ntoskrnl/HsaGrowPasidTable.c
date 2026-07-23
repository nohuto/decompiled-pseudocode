/*
 * XREFs of HsaGrowPasidTable @ 0x1405AC680
 * Callers:
 *     <none>
 * Callees:
 *     HsaAllocatePasidTables @ 0x1405AB238 (HsaAllocatePasidTables.c)
 */

__int64 __fastcall HsaGrowPasidTable(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, int a6)
{
  int v6; // r8d
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a3 + 48);
  v8 = 0LL;
  return HsaAllocatePasidTables(a1, a2, v6, a4, a5, a6, &v8);
}
