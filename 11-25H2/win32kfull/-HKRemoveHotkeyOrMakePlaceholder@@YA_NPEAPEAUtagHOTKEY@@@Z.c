/*
 * XREFs of ?HKRemoveHotkeyOrMakePlaceholder@@YA_NPEAPEAUtagHOTKEY@@@Z @ 0x14028A758
 * Callers:
 *     ?HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z @ 0x14015DFF0 (-HKRemoveMatchingHotkeys@@YA_NPEAUtagTHREADINFO@@PEAUtagWND@@HW4HotkeyQueryType@@@Z.c)
 *     ?_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z @ 0x14018163C (-_UnregisterHotKey@@YA_NPEAUtagWND@@H@Z.c)
 *     DestroyWindowsHotKeys @ 0x1401951F8 (DestroyWindowsHotKeys.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z @ 0x14028A6D0 (--$FreeHotKey@PEAUtagHOTKEY@@@@YAXPEAUtagHOTKEY@@@Z.c)
 *     ?RemoveSasKey@@YA_NII@Z @ 0x14028A894 (-RemoveSasKey@@YA_NII@Z.c)
 */

char __fastcall HKRemoveHotkeyOrMakePlaceholder(struct tagHOTKEY **a1)
{
  _WORD *v1; // rbx
  __int16 v3; // ax
  _QWORD *v4; // rdi
  __int64 v5; // rax

  v1 = *a1;
  v3 = *((_WORD *)*a1 + 17);
  if ( (v3 & 0x100) != 0 )
    return 0;
  v4 = v1 + 28;
  *((_QWORD *)v1 + 2) = 0LL;
  if ( v3 < 0 )
  {
    if ( (_QWORD *)*v4 != v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 567);
    RemoveSasKey(*((_DWORD *)v1 + 9), (unsigned __int16)v1[16]);
  }
  if ( (_QWORD *)*v4 != v4 )
  {
    if ( !_bittest16(v1 + 17, 9u) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 573);
    v5 = *(_QWORD *)v1;
    v1[17] |= 0x100u;
    --*(_DWORD *)(v5 + 956);
    *(_QWORD *)v1 = 0LL;
    *((_DWORD *)v1 + 10) = 0;
    return 0;
  }
  *a1 = (struct tagHOTKEY *)*((_QWORD *)v1 + 6);
  FreeHotKey<tagHOTKEY *>(v1);
  return 1;
}
