/*
 * XREFs of ExGetFirmwareEnvironmentVariable @ 0x140A2F990
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x140A2F580 (NtQuerySystemEnvironmentValueEx.c)
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 * Callees:
 *     ExpUnicodeStringToNonpagedWStr @ 0x140A2FA1C (ExpUnicodeStringToNonpagedWStr.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140A2FEC4 (ExpGetFirmwareEnvironmentVariable.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExGetFirmwareEnvironmentVariable(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  void *v8; // rdi
  unsigned int FirmwareEnvironmentVariable; // ebx

  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return 3221225474LL;
  v8 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v8 )
    return 3221225626LL;
  FirmwareEnvironmentVariable = ExpGetFirmwareEnvironmentVariable((_DWORD)v8, a2, a3, a4, a5, 0);
  ExFreePoolWithTag(v8, 0);
  return FirmwareEnvironmentVariable;
}
