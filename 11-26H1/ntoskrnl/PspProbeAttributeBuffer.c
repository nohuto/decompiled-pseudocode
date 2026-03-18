/*
 * XREFs of PspProbeAttributeBuffer @ 0x140B20298
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140A00BC4 (PspBuildCreateProcessContext.c)
 * Callees:
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

__int64 __fastcall PspProbeAttributeBuffer(volatile void *a1, SIZE_T a2, ULONG a3, char a4)
{
  if ( a4 )
    ProbeForRead(a1, a2, a3);
  return 0LL;
}
