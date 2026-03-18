/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x14052769C
 * Callers:
 *     RtlpHpFreeHeap @ 0x140347010 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhContextFree @ 0x140353D70 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14035402C (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpAllocateHeap @ 0x140397A80 (RtlpHpAllocateHeap.c)
 *     ExFreeHeapPool @ 0x1403A7BB0 (ExFreeHeapPool.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x140402C90 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x14051C628 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpAllocateHeapInternal @ 0x140520DB8 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x140639B24 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x140346E80 (RtlpHpEnvTlsSetValue.c)
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
