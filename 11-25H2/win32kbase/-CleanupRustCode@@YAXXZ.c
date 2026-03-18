/*
 * XREFs of ?CleanupRustCode@@YAXXZ @ 0x1401A1DA0
 * Callers:
 *     MultiUserNtGreCleanup @ 0x14006DBA4 (MultiUserNtGreCleanup.c)
 * Callees:
 *     <none>
 */

void CleanupRustCode(void)
{
  if ( !(unsigned int)PsGetCurrentProcessSessionId() )
  {
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    qword_1402A10B0 = 0LL;
  }
}
