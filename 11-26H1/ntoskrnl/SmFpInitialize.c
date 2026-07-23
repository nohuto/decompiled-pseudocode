/*
 * XREFs of SmFpInitialize @ 0x1404DC7CC
 * Callers:
 *     SmPartitionInitialize @ 0x14081F244 (SmPartitionInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall SmFpInitialize(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x78uLL);
  *(_BYTE *)(a1 + 8) = 1;
  result = a1 + 16;
  *(_BYTE *)(a1 + 10) = 6;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
