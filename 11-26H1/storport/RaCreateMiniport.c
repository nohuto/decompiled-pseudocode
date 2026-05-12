/*
 * XREFs of RaCreateMiniport @ 0x1401887B8
 * Callers:
 *     RaidCreateAdapter @ 0x14006C434 (RaidCreateAdapter.c)
 *     CreateNvmeAdapter @ 0x1400D162C (CreateNvmeAdapter.c)
 * Callees:
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaCreateMiniport(__int64 a1)
{
  __int64 result; // rax

  memset_0((void *)(a1 + 8), 0, 0xE0uLL);
  result = 0LL;
  *(_DWORD *)(a1 + 248) &= 0xFFFFFFF9;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
