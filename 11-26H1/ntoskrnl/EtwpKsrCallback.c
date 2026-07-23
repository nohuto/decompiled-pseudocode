/*
 * XREFs of EtwpKsrCallback @ 0x1408345B0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     EtwpCancelMemoryPreservation @ 0x14083437C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1408346EC (EtwpPreserveLogger.c)
 *     EtwpSavePersistedLoggers @ 0x1408350C8 (EtwpSavePersistedLoggers.c)
 *     EtwpReleaseLoggerContext @ 0x1409194B8 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140979A20 (EtwpAcquireLoggerContextByLoggerId.c)
 */

void __fastcall EtwpKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // ebx
  bool v4; // al
  unsigned int v5; // esi
  __int64 i; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  ULONG_PTR v9; // rdi
  __int64 v10; // rbp
  char v11; // r14

  v3 = (int)Argument1;
  if ( !(_DWORD)Argument1 )
  {
LABEL_8:
    EtwpSavePersistedLoggers(CallbackContext, Argument1, Argument2);
    goto LABEL_9;
  }
  if ( (_DWORD)Argument1 != 1 )
  {
    if ( (_DWORD)Argument1 == 2 )
    {
      EtwpSavePersistedLoggers(CallbackContext, Argument1, Argument2);
      return;
    }
    if ( (_DWORD)Argument1 != 3 )
    {
      if ( (_DWORD)Argument1 != 4 )
        return;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
LABEL_9:
  v4 = !v3 || v3 == 3;
  EtwpKsrPrepared = v4;
  v5 = 0;
  for ( i = EtwpHostSiloState; v5 < *(_DWORD *)(EtwpHostSiloState + 16); ++v5 )
  {
    v7 = EtwpAcquireLoggerContextByLoggerId(i, v5, 0LL);
    v9 = v7;
    if ( v7 )
    {
      v10 = *(_QWORD *)(v7 + 1352);
      v11 = 0;
      if ( v10 )
      {
        v11 = 1;
        KeWaitForSingleObject((PVOID)(v7 + 632), Executive, 0, 0, 0LL);
        if ( !v3 || v3 == 3 )
        {
          if ( *(_BYTE *)(v10 + 32) )
            EtwpPreserveLogger(v9);
        }
        else
        {
          EtwpCancelMemoryPreservation(v9);
        }
      }
      LOBYTE(v8) = v11;
      EtwpReleaseLoggerContext(v9, v8);
    }
    i = EtwpHostSiloState;
  }
}
