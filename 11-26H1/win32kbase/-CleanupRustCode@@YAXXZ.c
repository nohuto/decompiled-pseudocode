/*
 * XREFs of ?CleanupRustCode@@YAXXZ @ 0x1401F3D44
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1401C0C3C (MultiUserNtGreCleanup.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 */

void CleanupRustCode(void)
{
  PSLIST_ENTRY v0; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9

  if ( !(unsigned int)PsGetCurrentProcessSessionId() )
  {
    while ( 1 )
    {
      v0 = ExpInterlockedPopEntrySList((PSLIST_HEADER)&WPP_MAIN_CB.Dpc.DpcData);
      if ( !v0 )
        break;
      GreDeleteFastMutex((char *)&v0[-52], v1, v2, v3);
    }
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      GreDeleteFastMutex((char *)WPP_MAIN_CB.Dpc.SystemArgument1, v1, v2, v3);
      WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
    }
    WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
  }
}
