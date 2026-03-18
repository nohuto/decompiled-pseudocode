/*
 * XREFs of IovBuildSynchronousFsdRequest @ 0x140C20D70
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     XdvIoBuildSynchronousFsdRequest @ 0x140645300 (XdvIoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall IovBuildSynchronousFsdRequest(__int64 a1, __int64 a2)
{
  return XdvIoBuildSynchronousFsdRequest(a1, a2);
}
