/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14018D620
 * Callers:
 *     DestroyThreadsHotKeys @ 0x14018D150 (DestroyThreadsHotKeys.c)
 *     DestroyWindowsHotKeys @ 0x14018D328 (DestroyWindowsHotKeys.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018D468 (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 * Callees:
 *     ?SetWindow@tagHOTKEY@@QEAAXPEAUtagWND@@@Z @ 0x14018D708 (-SetWindow@tagHOTKEY@@QEAAXPEAUtagWND@@@Z.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14018D720 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?RemoveSasKey@@YA_NII@Z @ 0x1402A78C8 (-RemoveSasKey@@YA_NII@Z.c)
 */

char __fastcall HKRemoveHotkeyOrMakePlaceholder(struct tagHOTKEY **a1)
{
  tagHOTKEY *v1; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rdi
  __int64 v6; // rax

  v1 = *a1;
  if ( (*((_WORD *)*a1 + 17) & 0x100) == 0 )
  {
    tagHOTKEY::SetWindow(*a1, 0LL);
    v4 = (_QWORD *)((char *)v1 + 56);
    if ( *((__int16 *)v1 + 17) < 0 )
    {
      if ( (_QWORD *)*v4 != v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 463LL);
      RemoveSasKey(*((_DWORD *)v1 + 9), *((unsigned __int16 *)v1 + 16));
    }
    if ( (_QWORD *)*v4 == v4 )
    {
      *a1 = (struct tagHOTKEY *)*((_QWORD *)v1 + 6);
      FreeHotKey<tagHOTKEY *>(v1, v3);
      return 1;
    }
    if ( !_bittest16((const signed __int16 *)v1 + 17, 9u) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 469LL);
    v6 = *(_QWORD *)v1;
    *((_WORD *)v1 + 17) |= 0x100u;
    --*(_DWORD *)(v6 + 944);
    *(_QWORD *)v1 = 0LL;
    *((_DWORD *)v1 + 10) = 0;
  }
  return 0;
}
