/*
 * XREFs of _memicmp @ 0x140559840
 * Callers:
 *     RamdiskInitialize @ 0x140D03DE4 (RamdiskInitialize.c)
 * Callees:
 *     __ascii_memicmp @ 0x1405597D8 (__ascii_memicmp.c)
 */

int __cdecl memicmp(const void *Buf1, const void *Buf2, size_t Size)
{
  return _ascii_memicmp((__int64)Buf1, (unsigned __int8 *)Buf2, Size);
}
