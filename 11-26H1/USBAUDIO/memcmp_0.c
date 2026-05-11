/*
 * XREFs of memcmp_0 @ 0x14001A987
 * Callers:
 *     USBHwGetMicArrayDescriptor @ 0x1400355D8 (USBHwGetMicArrayDescriptor.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
