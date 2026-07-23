/*
 * XREFs of PspProbeAttributeBuffer @ 0x140A78C58
 * Callers:
 *     PspBuildCreateProcessContext @ 0x140A79424 (PspBuildCreateProcessContext.c)
 * Callees:
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall PspProbeAttributeBuffer(volatile void *a1, SIZE_T a2, ULONG a3, char a4)
{
  if ( a4 )
    ProbeForRead(a1, a2, a3);
  return 0LL;
}
