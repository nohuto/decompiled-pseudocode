/*
 * XREFs of RtlpCopyMappedMemoryEx @ 0x1800F8DF0
 * Callers:
 *     RtlCopyMappedMemory @ 0x1800F8DD0 (RtlCopyMappedMemory.c)
 * Callees:
 *     RtlpCopyMappedMemoryEx_ExceptionFilter @ 0x180146520 (RtlpCopyMappedMemoryEx_ExceptionFilter.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlpCopyMappedMemoryEx(__int64 a1, void *a2, const void *a3, size_t a4)
{
  memmove(a2, a3, a4);
  return 0LL;
}
