/*
 * XREFs of ?CompareEntry@QDC_CACHE@@AEAA_NPEAUQDC_CACHE_ENTRY@1@IIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@@Z @ 0x14031BF80
 * Callers:
 *     ?AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x14031BC9C (-AddToCache@QDC_CACHE@@QEAAJIIIIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOG.c)
 * Callees:
 *     <none>
 */

char __fastcall QDC_CACHE::CompareEntry(
        QDC_CACHE *this,
        struct QDC_CACHE::QDC_CACHE_ENTRY *a2,
        __int64 a3,
        unsigned int a4,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *Source2)
{
  if ( *((_DWORD *)a2 + 2) != a4 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 622;
    return 0;
  }
  if ( RtlCompareMemory(*((const void **)a2 + 2), Source2, 216LL * a4) != 216LL * a4 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 631;
    return 0;
  }
  return 1;
}
