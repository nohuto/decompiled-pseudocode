/*
 * XREFs of ??0CAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@QEAA@$$QEAU01@@Z @ 0x18009DFD0
 * Callers:
 *     ??$construct_at@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@AEBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@YAPEAU?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@0@QEAU10@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x18009D8D8 (--$construct_at@U-$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@CCaptureManager.c)
 *     ??$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@V?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@std@@@std@@@std@@@std@@_N@1@AEBT_LARGE_INTEGER@@$$QEAUCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@Z @ 0x18009D9A8 (--$emplace@AEBT_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CCaptureManager@@@-$_Hash@V-$_Umap_tra.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCaptureManager::CAPTURE_DISPLAY_MAP_ENTRY::CAPTURE_DISPLAY_MAP_ENTRY(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 *v4; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax

  v2 = *a2;
  v4 = (__int64 *)(a1 + 8);
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = 0LL;
  v6 = a2 + 1;
  if ( v4 != a2 + 1 )
  {
    *v4 = *v6;
    *v6 = 0LL;
  }
  *(_QWORD *)(a1 + 16) = a2[2];
  v7 = a2[5];
  a2[5] = 0LL;
  v8 = a2[4];
  a2[4] = 0LL;
  v9 = a2[3];
  a2[3] = 0LL;
  *(_QWORD *)(a1 + 24) = v9;
  *(_QWORD *)(a1 + 32) = v8;
  *(_QWORD *)(a1 + 40) = v7;
  *(_BYTE *)(a1 + 48) = *((_BYTE *)a2 + 48);
  *(_BYTE *)(a1 + 49) = *((_BYTE *)a2 + 49);
  return a1;
}
