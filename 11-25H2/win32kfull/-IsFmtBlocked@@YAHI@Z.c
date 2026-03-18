/*
 * XREFs of ?IsFmtBlocked@@YAHI@Z @ 0x14011169C
 * Callers:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x140112E94 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1401137C0 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x140181818 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     _GetPriorityClipboardFormat @ 0x1402037C0 (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x14020A960 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsFmtBlocked(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = a1;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(W32GetUserSessionState(a1, a2) + 21864); i = (unsigned int)(i + 1) )
  {
    a2 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 21856);
    if ( v2 == *(_DWORD *)(a2 + 4 * i) )
      return 0LL;
  }
  return 1LL;
}
