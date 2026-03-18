/*
 * XREFs of ?xxxEnableNonClientDpiScaling@@YA_NPEAUtagWND@@@Z @ 0x1401E6A50
 * Callers:
 *     NtUserEnableNonClientDpiScaling @ 0x1401E69C0 (NtUserEnableNonClientDpiScaling.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     UpdateWindowSpriteMonitor @ 0x140090008 (UpdateWindowSpriteMonitor.c)
 */

char __fastcall xxxEnableNonClientDpiScaling(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // rax

  if ( (*(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL) & 0xF) != 2 || !IsTopLevelWindow((__int64)a1) || *(int *)(v3 + 20) < 0 )
    return 0;
  v4 = *((_DWORD *)a1 + 95);
  if ( (v4 & 0x80000) == 0 )
  {
    *((_DWORD *)a1 + 95) = v4 | 0x80000;
    *(_DWORD *)(v3 + 232) |= 0x400u;
    v5 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)a1 + 5) + 256LL), v2);
    UpdateWindowSpriteMonitor((__int64 *)a1, v5);
    xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
  }
  return 1;
}
