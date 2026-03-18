/*
 * XREFs of ?VidMmiTickCountTo100ns@@YA_KT_LARGE_INTEGER@@0@Z @ 0x1400451F8
 * Callers:
 *     DefragmentSegment @ 0x1400B1AB8 (DefragmentSegment.c)
 * Callees:
 *     ?VidMmiTickCountTo100ns@@YA_K_K@Z @ 0x14009BCE0 (-VidMmiTickCountTo100ns@@YA_K_K@Z.c)
 */

unsigned __int64 __fastcall VidMmiTickCountTo100ns(union _LARGE_INTEGER a1, union _LARGE_INTEGER a2)
{
  return VidMmiTickCountTo100ns(a2.QuadPart - a1.QuadPart);
}
