/*
 * XREFs of RtlpHpLfhThreadDataInitializeSet @ 0x180072340
 * Callers:
 *     RtlpHpLfhContextFree @ 0x180004E80 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180062280 (RtlpHpLfhPrivateSlotListCompact.c)
 *     RtlpHpReallocMove @ 0x1800818A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x180091890 (RtlpHpAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x180096F60 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x1800AFFC0 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800BE5AC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800DC7B4 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117744 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 * Callees:
 *     RtlpHpEnvTlsSetValue @ 0x1800723C0 (RtlpHpEnvTlsSetValue.c)
 *     RtlpHpGetCurrentProcessorNumber @ 0x180072438 (RtlpHpGetCurrentProcessorNumber.c)
 */

__int64 __fastcall RtlpHpLfhThreadDataInitializeSet(__int64 a1)
{
  char CurrentProcessorNumber; // dl
  unsigned int v3; // eax
  unsigned int v4; // edx
  __int64 v6; // [rsp+30h] [rbp+8h]

  CurrentProcessorNumber = RtlpHpGetCurrentProcessorNumber();
  v3 = *(unsigned __int8 *)(a1 + 72);
  v4 = CurrentProcessorNumber & 0x3F;
  if ( v4 >= v3 )
  {
    if ( v4 == v3 || (_BYTE)v3 == 1 )
      v4 = 0;
    else
      v4 = *(unsigned __int8 *)(v4 - v3 - 1 + *(_QWORD *)(a1 + 64));
  }
  v6 = (unsigned __int16)((((unsigned __int64)v4 << 8) + 1472) >> 6);
  WORD1(v6) = 3;
  BYTE4(v6) = v4;
  RtlpHpEnvTlsSetValue(*(unsigned int *)(a1 + 84), v6);
  return v6;
}
