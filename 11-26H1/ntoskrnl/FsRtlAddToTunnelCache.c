/*
 * XREFs of FsRtlAddToTunnelCache @ 0x1409DDFE0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlAddToTunnelCacheEx @ 0x1409DE220 (FsRtlAddToTunnelCacheEx.c)
 */

void __stdcall FsRtlAddToTunnelCache(
        TUNNEL *Cache,
        ULONGLONG DirectoryKey,
        UNICODE_STRING *ShortName,
        UNICODE_STRING *LongName,
        BOOLEAN KeyByShortName,
        ULONG DataLength,
        void *Data)
{
  size_t Size; // [rsp+28h] [rbp-20h]

  LODWORD(Size) = DataLength;
  FsRtlAddToTunnelCacheEx(&Cache->Mutex, KeyByShortName != 0 ? 2 : 0, Size, Data);
}
