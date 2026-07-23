/*
 * XREFs of SleepstudyHelperCreateLibrary @ 0x140B47F20
 * Callers:
 *     PopUserShutdownInitializeSleepstudyDiagnostics @ 0x140CD77C0 (PopUserShutdownInitializeSleepstudyDiagnostics.c)
 * Callees:
 *     SleepstudyHelperCreateLibraryEx @ 0x1404E6CF0 (SleepstudyHelperCreateLibraryEx.c)
 */

__int64 __fastcall SleepstudyHelperCreateLibrary(int a1, _QWORD *a2)
{
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a1;
  v3[2] = 0;
  v3[0] = 1;
  return SleepstudyHelperCreateLibraryEx(v3, a2);
}
