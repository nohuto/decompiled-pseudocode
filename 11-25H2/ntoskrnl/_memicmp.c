/*
 * XREFs of _memicmp @ 0x14051E850
 * Callers:
 *     RamdiskInitialize @ 0x140C4D2A8 (RamdiskInitialize.c)
 * Callees:
 *     __ascii_memicmp @ 0x14051E7E8 (__ascii_memicmp.c)
 */

int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _ascii_memicmp((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
