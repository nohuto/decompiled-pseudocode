/*
 * XREFs of IovBuildAsynchronousFsdRequest @ 0x140C20C40
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     XdvIopBuildAsynchronousFsdRequest @ 0x140645350 (XdvIopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildAsynchronousFsdRequest(__int64 a1, __int64 a2)
{
  return XdvIopBuildAsynchronousFsdRequest(a1, a2);
}
