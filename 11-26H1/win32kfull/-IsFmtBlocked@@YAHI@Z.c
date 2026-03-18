/*
 * XREFs of ?IsFmtBlocked@@YAHI@Z @ 0x1401AF77C
 * Callers:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140057518 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     _GetPriorityClipboardFormat @ 0x1401AF280 (_GetPriorityClipboardFormat.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401AF6D0 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1402B4F40 (NtUserGetUpdatedClipboardFormats.c)
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
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(W32GetUserSessionState(a1, a2) + 21896); i = (unsigned int)(i + 1) )
  {
    if ( v2 == *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 21888) + 4 * i) )
      return 0LL;
  }
  return 1LL;
}
