/*
 * XREFs of IsHostServiceSession @ 0x1401014F4
 * Callers:
 *     IsCurrentSessionHostServiceSession @ 0x1401014D8 (IsCurrentSessionHostServiceSession.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsHostServiceSession(int a1)
{
  int CurrentServiceSessionId; // ecx
  _BOOL8 result; // rax

  CurrentServiceSessionId = RtlGetCurrentServiceSessionId();
  result = 0LL;
  if ( a1 == CurrentServiceSessionId )
    return CurrentServiceSessionId == 0;
  return result;
}
