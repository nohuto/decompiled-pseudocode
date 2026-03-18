/*
 * XREFs of ?TraceLoggingWriteUnsupportedGdiUsage@@YAXAEAIW4UnsupportedReason@@_K222@Z @ 0x14032C1E4
 * Callers:
 *     ?bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x14032C248 (-bCheckSurfacePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x14032C35C (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x14028F4C4 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

void __fastcall TraceLoggingWriteUnsupportedGdiUsage(
        _DWORD *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  if ( *a1 < 0xAu )
  {
    ++*a1;
    TraceLoggingWriteUnsupportedGdiUsage(a2, a3, a4, a5, a6);
  }
}
