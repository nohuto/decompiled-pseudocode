/*
 * XREFs of IoFreeMapRegistersThunk @ 0x14057C140
 * Callers:
 *     HalpAllocateMapRegisters @ 0x140783F60 (HalpAllocateMapRegisters.c)
 * Callees:
 *     IoFreeMapRegistersV2 @ 0x14035B860 (IoFreeMapRegistersV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     IoFreeMapRegistersV3 @ 0x1404376F0 (IoFreeMapRegistersV3.c)
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
