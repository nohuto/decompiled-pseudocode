/*
 * XREFs of NtCompareSigningLevels @ 0x140ABBA10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  int v2; // eax

  v2 = 0;
  if ( *(_QWORD *)&SepRmCapTableLock.ThreadTimerDelay )
    v2 = guard_dispatch_icall_no_overrides(FirstSigningLevel, SecondSigningLevel);
  return v2 == 0 ? 0xC0000428 : 0;
}
