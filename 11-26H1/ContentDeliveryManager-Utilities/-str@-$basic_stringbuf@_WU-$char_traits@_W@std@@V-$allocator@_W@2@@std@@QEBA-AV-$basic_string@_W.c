/*
 * XREFs of ?str@?$basic_stringbuf@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x18008A508
 * Callers:
 *     ?SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800890F0 (-SetTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800A718C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800B54D0 (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@PEBG_K@Z @ 0x180060B0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@PEBG_K@Z.c)
 */

_QWORD *__fastcall std::wstringbuf::str(__int64 a1, _QWORD *a2)
{
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 *v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // r9

  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 || (v3 = *(unsigned __int64 **)(a1 + 64), !*v3) )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || (v8 = **(_QWORD **)(a1 + 56)) == 0 )
    {
      a2[3] = 7LL;
      a2[2] = 0LL;
      *(_WORD *)a2 = 0;
      return a2;
    }
    v7 = **(_QWORD **)(a1 + 24);
    v6 = v8 + 2LL * **(int **)(a1 + 80) - v7;
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 104);
    if ( v4 < *v3 )
      v4 = *v3;
    v5 = *(unsigned __int64 **)(a1 + 32);
    v6 = v4 - *v5;
    v7 = *v5;
  }
  std::wstring::wstring(a2, v7, v6 >> 1);
  return a2;
}
