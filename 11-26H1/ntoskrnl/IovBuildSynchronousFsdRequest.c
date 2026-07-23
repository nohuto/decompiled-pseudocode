/*
 * XREFs of IovBuildSynchronousFsdRequest @ 0x140C26D80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     XdvIoBuildSynchronousFsdRequest @ 0x140648EE0 (XdvIoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildSynchronousFsdRequest(__int64 a1, __int64 a2)
{
  return XdvIoBuildSynchronousFsdRequest(a1, a2);
}
