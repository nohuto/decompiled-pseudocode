/*
 * XREFs of ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x14025124C
 * Callers:
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x1402518E4 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     ?DpiKsrComplete@@YAXPEAX@Z @ 0x1402519AC (-DpiKsrComplete@@YAXPEAX@Z.c)
 *     DpiKsrDoKsrSave @ 0x140252278 (DpiKsrDoKsrSave.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x14004CDE4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?ReleaseMiniportListMutex@@YAXXZ @ 0x14004CE28 (-ReleaseMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DpIterateFdoContexts(int (__fastcall *a1)(__int64 *, void *), void *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi

  AcquireMiniportListMutex();
  v4 = qword_140168E08;
  if ( *(_QWORD *)v4 != v4 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v4 + 72), Executive, 0, 0, 0LL);
      v5 = *(__int64 **)(v4 + 56);
      if ( (__int64 *)*v5 != v5 )
      {
        do
        {
          if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 && a1(v5, a2) < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 542;
          }
          v5 = (__int64 *)*v5;
        }
        while ( *v5 != *(_QWORD *)(v4 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v4 + 72), 0);
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != qword_140168E08 );
  }
  ReleaseMiniportListMutex();
}
