/*
 * XREFs of FsRtlFindInTunnelCache @ 0x1409E1020
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFindInTunnelCacheEx @ 0x1409E1060 (FsRtlFindInTunnelCacheEx.c)
 */

BOOLEAN __stdcall FsRtlFindInTunnelCache(
        TUNNEL *Cache,
        ULONGLONG DirectoryKey,
        UNICODE_STRING *Name,
        UNICODE_STRING *ShortName,
        UNICODE_STRING *LongName,
        ULONG *DataLength,
        void *Data)
{
  return FsRtlFindInTunnelCacheEx(&Cache->Mutex, LongName, 0, (__int64)DataLength, Data);
}
