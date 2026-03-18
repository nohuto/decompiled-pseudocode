/*
 * XREFs of RtlpHpLfhSlotInitialize @ 0x140346430
 * Callers:
 *     RtlpHpLfhBucketActivate @ 0x140345DF4 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x140346D68 (RtlpHpLfhContextSlotAllocate.c)
 * Callees:
 *     RtlpHpLfhOwnerInitialize @ 0x140346490 (RtlpHpLfhOwnerInitialize.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall RtlpHpLfhSlotInitialize(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 result; // rax

  memset_0((void *)a1, 0, 0x40uLL);
  result = RtlpHpLfhOwnerInitialize(a1, *a2 >> 1, 0LL, a3);
  *(_DWORD *)(a1 + 4) = 196608;
  *(_WORD *)(a1 + 2) = (unsigned __int64)&a2[-a3] >> 6;
  return result;
}
