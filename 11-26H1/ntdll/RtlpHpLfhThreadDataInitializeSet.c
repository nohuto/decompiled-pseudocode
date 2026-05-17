/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x1800933DC
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180016B50 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpLfhContextFree @ 0x180019DA0 (RtlpHpLfhContextFree.c)
 *     RtlpHpAllocateHeap @ 0x180071440 (RtlpHpAllocateHeap.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180092C30 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpAllocateHeapSlow @ 0x180097E10 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReallocMove @ 0x1800B1D30 (RtlpHpReallocMove.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800B2AA0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800C0E1C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DF844 (RtlpHpAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x18009345C (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x1800938F0 (RtlpHpGetCurrentProcessorNumber.c)
 */

__int64 __fastcall RtlpHpLfhThreadDataInitializeSet(__int64 a1)
{
  char CurrentProcessorNumber; // dl
  __int64 v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // edx
  __int64 v7; // [rsp+30h] [rbp+8h]

  CurrentProcessorNumber = RtlpHpGetCurrentProcessorNumber();
  v4 = *(unsigned __int8 *)(a1 + 72);
  v5 = CurrentProcessorNumber & 0x3F;
  if ( v5 >= v4 )
  {
    if ( v5 == v4 || (_BYTE)v4 == 1 )
      v5 = 0;
    else
      v5 = *(unsigned __int8 *)(v5 - v4 - 1 + *(_QWORD *)(a1 + 64));
  }
  v7 = (unsigned __int16)((((unsigned __int64)v5 << 8) + 1472) >> 6);
  WORD1(v7) = 3;
  BYTE4(v7) = v5;
  RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), v7, v3);
  return v7;
}
