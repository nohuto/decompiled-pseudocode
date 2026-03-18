/*
 * XREFs of HalInitializeDmaTransferContext @ 0x1404B1340
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall HalInitializeDmaTransferContext(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  memset_0(a2 + 1, 0, 0x7CuLL);
  a2[9] |= 2u;
  result = 0LL;
  *a2 = 1;
  return result;
}
