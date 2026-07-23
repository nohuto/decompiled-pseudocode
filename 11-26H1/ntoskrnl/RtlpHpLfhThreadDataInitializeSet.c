/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C
 * Callers:
 *     RtlpHpFreeHeap @ 0x140349090 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x140355DF0 (RtlpHpLfhContextFree.c)
 *     RtlpHpAllocateHeap @ 0x140399800 (RtlpHpAllocateHeap.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403FBD90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140519218 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1405194B4 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpAllocateHeapInternal @ 0x14052345C (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x14063CB34 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x140348F00 (RtlpHpEnvTlsSetValue.c)
 */

__int64 __fastcall RtlpHpLfhThreadDataInitializeSet(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // edx
  __int64 v4; // [rsp+30h] [rbp+8h]

  v1 = *(unsigned __int8 *)(a1 + 72);
  v2 = KeGetCurrentPrcb()->Number & 0x3F;
  if ( v2 >= v1 )
  {
    if ( v2 == v1 || (_BYTE)v1 == 1 )
      v2 = 0;
    else
      v2 = *(unsigned __int8 *)(v2 - v1 - 1 + *(_QWORD *)(a1 + 64));
  }
  v4 = (unsigned __int16)((((unsigned __int64)v2 << 8) + 1472) >> 6);
  WORD1(v4) = 3;
  BYTE4(v4) = v2;
  RtlpHpEnvTlsSetValue(*(_DWORD *)(a1 + 84));
  return v4;
}
