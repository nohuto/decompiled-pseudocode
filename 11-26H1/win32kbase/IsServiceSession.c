/*
 * XREFs of IsServiceSession @ 0x140165EF4
 * Callers:
 *     IsCurrentSessionServiceSession @ 0x140165ED8 (IsCurrentSessionServiceSession.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401D3C30 (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsServiceSession(int a1)
{
  return a1 == (unsigned int)RtlGetCurrentServiceSessionId();
}
