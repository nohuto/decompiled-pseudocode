/*
 * XREFs of PopWatchdogDumpControlRoutine @ 0x1406137A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTriageDumpDataArray @ 0x1404F12A0 (KeInitializeTriageDumpDataArray.c)
 *     KeAddTriageDumpDataBlock @ 0x1405E5DF0 (KeAddTriageDumpDataBlock.c)
 *     strcmp @ 0x14073DC40 (strcmp.c)
 */

void __fastcall PopWatchdogDumpControlRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  _KEVENT *v5; // rcx
  _KEVENT *v6; // rdi
  SIZE_T v7; // r9

  if ( a2 )
  {
    if ( !strcmp(*(const char **)(a2 + 24), "POP_WATCHDOG_TRIAGE_DUMP_COMPONENT") )
    {
      if ( *(_BYTE *)(a2 - 24) )
      {
        v5 = *(_KEVENT **)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock;
        v6 = 0LL;
        if ( *(struct _KTHREAD **)&PopModernStandbyStateNotify.SuspendEvent.Header.Lock != (struct _KTHREAD *)&PopModernStandbyStateNotify.SuspendEvent )
        {
          do
          {
            if ( v5
              && BYTE1(v5[8].Header.WaitListHead.Blink)
              && LODWORD(v5[9].Header.WaitListHead.Flink) == *(_DWORD *)(a3 + 16) )
            {
              if ( v6 )
              {
                if ( v5[12].Header.WaitListHead.Blink < v6[12].Header.WaitListHead.Blink )
                  v6 = v5;
              }
              else
              {
                v6 = v5;
              }
              BYTE1(v5[8].Header.WaitListHead.Blink) = 0;
            }
            v5 = *(_KEVENT **)&v5->Header.Lock;
          }
          while ( v5 != &PopModernStandbyStateNotify.SuspendEvent );
          if ( v6 )
          {
            KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)(a2 + 48), 0x40u);
            KeAddTriageDumpDataBlock((PKTRIAGE_DUMP_DATA_ARRAY)(a2 + 48), (ULONG)v6, (PVOID)0x190, v7);
            ++*(_DWORD *)(a2 - 20);
            *(_QWORD *)a3 = a2 + 48;
          }
        }
      }
    }
  }
}
