/*
 * XREFs of EtwpDisableTraceProviders @ 0x1409378E0
 * Callers:
 *     EtwpStopLoggerInstance @ 0x140A15968 (EtwpStopLoggerInstance.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1403DD0F0 (KeReleaseMutex.c)
 *     EtwpDisablePerProcessTracing @ 0x140828458 (EtwpDisablePerProcessTracing.c)
 *     EtwpGetNextGuidEntry @ 0x1409366D0 (EtwpGetNextGuidEntry.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x14093737C (EtwpClearSessionAndUnreferenceEntry.c)
 */

LONG __fastcall EtwpDisableTraceProviders(__int64 a1, int a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  _WORD *v6; // rbx
  _QWORD *i; // rax
  struct _KLOCK_ENTRIES *v8; // r9
  struct _KLOCK_ENTRIES *v9; // r9
  _DWORD *v10; // rsi
  _DWORD *j; // rdx
  _QWORD *NextGuidEntry; // rax
  struct _KLOCK_ENTRIES *v13; // r9
  _DWORD *v14; // rsi
  unsigned int k; // edi

  if ( a1 == EtwpHostSiloState )
    v6 = (_WORD *)(MmWriteableSharedUserData + 896);
  else
    v6 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 1288LL) + 550LL);
  for ( i = EtwpGetNextGuidEntry(a1, 0LL, 0, a4); ; i = EtwpGetNextGuidEntry(a1, v10, 0, v9) )
  {
    v10 = i;
    if ( !i )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, (__int64)i, 0, v8);
  }
  for ( j = 0LL; ; j = v14 )
  {
    NextGuidEntry = EtwpGetNextGuidEntry(a1, j, 2u, v8);
    v14 = NextGuidEntry;
    if ( !NextGuidEntry )
      break;
    EtwpClearSessionAndUnreferenceEntry(a2, (__int64)NextGuidEntry, 2, v13);
  }
  KeWaitForSingleObject(ExpSysDbgLock.Padding, Executive, 0, 0, 0LL);
  for ( k = 0; k < 9; ++k )
  {
    if ( *(_BYTE *)v6 == (_BYTE)a2 )
    {
      if ( k <= 1 )
        EtwpDisablePerProcessTracing(k);
      *v6 = 0;
    }
    ++v6;
  }
  return KeReleaseMutex((PRKMUTEX)ExpSysDbgLock.Padding, 0);
}
