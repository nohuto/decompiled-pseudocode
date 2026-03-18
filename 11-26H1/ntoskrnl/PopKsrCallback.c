/*
 * XREFs of PopKsrCallback @ 0x140607EE0
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 */

void __fastcall PopKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  if ( (_DWORD)Argument1 )
  {
    v3 = (_DWORD)Argument1 - 1;
    if ( !v3 )
    {
LABEL_6:
      byte_140F0F5F0 = 0;
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      LOBYTE(NormalizationListLock.StateSaveArea) = 0;
      PopQueueWorkItem((__int64)&stru_140F12D20.AbCompletedIoQoSBoostCount, DelayedWorkQueue);
      return;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      goto LABEL_6;
    }
  }
  byte_140F0F5F0 = 1;
}
