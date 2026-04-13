/*
 * XREFs of ?DoesStringPrefixMatch@EdgeTileUtils@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WI@Z @ 0x1800A6924
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800A718C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall EdgeTileUtils::DoesStringPrefixMatch(const WCHAR *a1, const WCHAR *a2, unsigned int a3)
{
  char v3; // r9

  v3 = 0;
  if ( *((_QWORD *)a1 + 2) >= (unsigned __int64)a3 )
  {
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      a1 = *(const WCHAR **)a1;
    return CompareStringOrdinal(a1, a3, a2, a3, 1) == 2;
  }
  return v3;
}
