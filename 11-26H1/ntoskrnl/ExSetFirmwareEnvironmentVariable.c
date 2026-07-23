/*
 * XREFs of ExSetFirmwareEnvironmentVariable @ 0x1408410B0
 * Callers:
 *     NtSetSystemEnvironmentValueEx @ 0x140844CE0 (NtSetSystemEnvironmentValueEx.c)
 *     PopClearSystemSleepCheckpoint @ 0x140B417F0 (PopClearSystemSleepCheckpoint.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x140C041C8 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     ExpSetFirmwareEnvironmentVariable @ 0x140842D5C (ExpSetFirmwareEnvironmentVariable.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x140A2FA1C (ExpUnicodeStringToNonpagedWStr.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExSetFirmwareEnvironmentVariable(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  void *v9; // rdi
  unsigned int v10; // ebx

  if ( LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) != 2 )
    return 3221225474LL;
  v9 = (void *)ExpUnicodeStringToNonpagedWStr();
  if ( !v9 )
    return 3221225626LL;
  v10 = ExpSetFirmwareEnvironmentVariable((_DWORD)v9, a2, a3, a4 & (unsigned int)-(a3 != 0), a5, 0);
  ExFreePoolWithTag(v9, 0);
  return v10;
}
