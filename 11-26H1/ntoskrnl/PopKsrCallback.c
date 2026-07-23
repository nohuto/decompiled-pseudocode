/*
 * XREFs of PopKsrCallback @ 0x14060AA90
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1404C8890 (PopQueueWorkItem.c)
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
      PopKsrPrepared = 0;
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      LOBYTE(NormalizationListLock.KernelStack) = 0;
      PopQueueWorkItem((__int64)&PopBsdFlushWorkItem, DelayedWorkQueue);
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
  PopKsrPrepared = 1;
}
