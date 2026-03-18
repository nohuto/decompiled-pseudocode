/*
 * XREFs of xxxKELocaleProcs @ 0x14010EC0C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FBA0C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x14010ECA8 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x1401505AC (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 */

char __fastcall xxxKELocaleProcs(struct tagKE *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 14064);
  if ( (*(_DWORD *)(v3 + 80) & 1) != 0 || *(_DWORD *)(W32GetUserSessionState(v4, v3) + 14256) )
    xxxAltGr(a1);
  v8 = *(unsigned int *)(W32GetUserSessionState(v6, v5) + 14184);
  if ( (v8 & 2) == 0 && (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v8, v7) + 14064) + 80LL) & 2) == 0
    || (unsigned int)xxxShiftLock(a1) )
  {
    return 1;
  }
  InputTraceLogging::Keyboard::DropInput();
  return 0;
}
