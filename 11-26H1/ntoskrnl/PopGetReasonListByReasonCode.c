/*
 * XREFs of PopGetReasonListByReasonCode @ 0x1409450F4
 * Callers:
 *     PopCheckDisabledReason @ 0x140943504 (PopCheckDisabledReason.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1409450A8 (PopRemoveReasonRecordByReasonCode.c)
 *     PopLogSleepDisabled @ 0x140945880 (PopLogSleepDisabled.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetReasonListByReasonCode(int a1)
{
  struct _SINGLE_LIST_ENTRY *Next; // rax
  struct _SINGLE_LIST_ENTRY *v2; // r8
  char v3; // dl

  Next = stru_140F10070.SystemAffinityTokenListHead.Next;
  v2 = 0LL;
  v3 = 0;
  while ( Next != &stru_140F10070.SystemAffinityTokenListHead )
  {
    v2 = Next;
    if ( LODWORD(Next[3].Next) == a1 )
    {
      v3 = 1;
      return (unsigned __int64)v2 & -(__int64)(v3 != 0);
    }
    Next = Next->Next;
  }
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
