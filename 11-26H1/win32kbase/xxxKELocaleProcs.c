/*
 * XREFs of xxxKELocaleProcs @ 0x140122908
 * Callers:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?xxxAltGr@@YAXPEAUtagKE@@@Z @ 0x1401229A4 (-xxxAltGr@@YAXPEAUtagKE@@@Z.c)
 *     ?xxxShiftLock@@YAHPEAUtagKE@@@Z @ 0x140122ACC (-xxxShiftLock@@YAHPEAUtagKE@@@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 */

char __fastcall xxxKELocaleProcs(struct tagKE *a1, int a2, int a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 14056);
  if ( (*(_DWORD *)(v4 + 80) & 1) != 0 || *(_DWORD *)(W32GetUserSessionState(v5, v4, v6) + 14248) )
    xxxAltGr(a1);
  v11 = *(_DWORD *)(W32GetUserSessionState(v8, v7, v9) + 14176);
  if ( (v11 & 2) == 0 && (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v11, v10, v12) + 14056) + 80LL) & 2) == 0
    || (unsigned int)xxxShiftLock(a1) )
  {
    return 1;
  }
  InputTraceLogging::Keyboard::DropInput(13LL);
  return 0;
}
