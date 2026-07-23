/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x140C26C50
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x140648F30 (XdvIopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(__int64 a1, __int64 a2)
{
  return XdvIopBuildAsynchronousFsdRequest(a1, a2);
}
