/*
 * XREFs of IsServiceSession @ 0x140083934
 * Callers:
 *     IsCurrentSessionServiceSession @ 0x140083918 (IsCurrentSessionServiceSession.c)
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsServiceSession(int a1)
{
  return a1 == (unsigned int)RtlGetCurrentServiceSessionId();
}
