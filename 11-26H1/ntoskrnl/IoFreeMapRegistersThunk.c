/*
 * XREFs of IoFreeMapRegistersThunk @ 0x140579C10
 * Callers:
 *     HalpAllocateMapRegisters @ 0x140781460 (HalpAllocateMapRegisters.c)
 * Callees:
 *     IoFreeMapRegistersV2 @ 0x140359AC0 (IoFreeMapRegistersV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14035C9B8 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV3 @ 0x14043EBE0 (IoFreeMapRegistersV3.c)
 */

char __fastcall IoFreeMapRegistersThunk(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // r9
  __int64 v3; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return IoFreeMapRegistersV2(v2, v3, v1);
  else
    return IoFreeMapRegistersV3(v2, v3, v1);
}
