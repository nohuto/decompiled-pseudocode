/*
 * XREFs of PopCoalescingCallbackWorker @ 0x140B14140
 * Callers:
 *     <none>
 * Callees:
 *     PoIssueCoalescingNotification @ 0x140435CBC (PoIssueCoalescingNotification.c)
 *     PopCoalescingSetActiveState @ 0x1404C32B4 (PopCoalescingSetActiveState.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopCoalescingCallbackWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-8h]

  while ( 1 )
  {
    PopAcquirePolicyLock(a1, a2);
    if ( (stru_140F11D08.AbWaitEntryCount & 2) == 0 )
      break;
    if ( (stru_140F11D08.AbWaitEntryCount & 1) != 0 )
    {
      if ( (stru_140F11D08.AbWaitEntryCount & 4) == 0 )
        goto LABEL_6;
      stru_140F11D08.AbWaitEntryCount &= ~4u;
      PopReleasePolicyLock(v3, v2, v4, v5, v16);
      v6 = 3;
    }
    else
    {
      stru_140F11D08.AbWaitEntryCount &= ~4u;
      PopCoalescingSetActiveState(1);
      PopReleasePolicyLock(v13, v12, v14, v15, v16);
      v6 = 1;
    }
LABEL_8:
    PoIssueCoalescingNotification(*(__int64 *)&stru_140F11D08.AffinityPrimaryGroup, v6);
  }
  if ( (stru_140F11D08.AbWaitEntryCount & 1) != 0 )
  {
    PopCoalescingSetActiveState(0);
    PopReleasePolicyLock(v9, v8, v10, v11, v16);
    v6 = 2;
    goto LABEL_8;
  }
LABEL_6:
  stru_140F11D08.AbWaitEntryCount &= ~8u;
  return PopReleasePolicyLock(v3, v2, v4, v5, v16);
}
