/*
 * XREFs of RtlpHpLfhSubsegmentPrefetch @ 0x14034F64C
 * Callers:
 *     RtlpHpLfhSubsegmentAllocateBlockShared @ 0x14034E850 (RtlpHpLfhSubsegmentAllocateBlockShared.c)
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentPrefetch(__int64 a1, unsigned __int64 a2, int a3, int a4)
{
  __int64 result; // rax
  unsigned int v5; // r10d

  result = *(unsigned __int16 *)(a2 + 48);
  v5 = (a4 + a3 + 0xFFFF) & 0xFFFF0000;
  if ( v5 > ((a4 * ((_DWORD)result + 1) + 0xFFFF) & 0xFFFF0000) )
  {
    result = *(unsigned int *)(((unsigned __int64)*(unsigned __int16 *)(a2 + 44) << 6) + a1 + 72);
    *(_WORD *)(a2 + 48) = ((result
                          * (unsigned __int64)(v5
                                             - (*(unsigned __int16 *)&PspTlsContext.WaitBlockFill4[2] ^ *(unsigned __int16 *)(a2 + 42) ^ ((unsigned int)(a2 >> 12) >> 16)))) >> 32)
                        - 1;
  }
  return result;
}
