/*
 * XREFs of PopWatchdogDumpControlRoutine @ 0x140616660
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTriageDumpDataArray @ 0x1404EA880 (KeInitializeTriageDumpDataArray.c)
 *     KeAddTriageDumpDataBlock @ 0x1405E8760 (KeAddTriageDumpDataBlock.c)
 *     strcmp @ 0x140742840 (strcmp.c)
 */

void __fastcall PopWatchdogDumpControlRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  SIZE_T v7; // r9

  if ( a2 )
  {
    if ( !strcmp(*(const char **)(a2 + 24), "POP_WATCHDOG_TRIAGE_DUMP_COMPONENT") )
    {
      if ( *(_BYTE *)(a2 - 24) )
      {
        v5 = PopWatchdogList;
        v6 = 0LL;
        if ( (__int64 *)PopWatchdogList != &PopWatchdogList )
        {
          do
          {
            if ( v5 && *(_BYTE *)(v5 + 209) && *(_DWORD *)(v5 + 224) == *(_DWORD *)(a3 + 16) )
            {
              if ( v6 )
              {
                if ( *(_QWORD *)(v5 + 304) < *(_QWORD *)(v6 + 304) )
                  v6 = v5;
              }
              else
              {
                v6 = v5;
              }
              *(_BYTE *)(v5 + 209) = 0;
            }
            v5 = *(_QWORD *)v5;
          }
          while ( (__int64 *)v5 != &PopWatchdogList );
          if ( v6 )
          {
            KeInitializeTriageDumpDataArray((PKTRIAGE_DUMP_DATA_ARRAY)(a2 + 48), 0x40u);
            KeAddTriageDumpDataBlock((PKTRIAGE_DUMP_DATA_ARRAY)(a2 + 48), v6, (PVOID)0x190, v7);
            ++*(_DWORD *)(a2 - 20);
            *(_QWORD *)a3 = a2 + 48;
          }
        }
      }
    }
  }
}
