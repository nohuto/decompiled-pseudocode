/*
 * XREFs of MiFreeReservationRun @ 0x140AC3E9C
 * Callers:
 *     MiFreeWorkingSetSwapContext @ 0x140AC3DE4 (MiFreeWorkingSetSwapContext.c)
 *     MiFreeReservationRuns @ 0x140AC3E50 (MiFreeReservationRuns.c)
 * Callees:
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x1402BCB10 (MiReleasePageFileInfo.c)
 *     MiGetPageFileHigh @ 0x140428310 (MiGetPageFileHigh.c)
 */

void __fastcall MiFreeReservationRun(struct _KEVENT *a1, __int64 a2)
{
  int PageFileHigh; // edi
  unsigned __int64 updated; // rax
  bool v6; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    PageFileHigh = MiGetPageFileHigh(*(_QWORD *)a2);
    do
    {
      MiReleasePageFileInfo(a1, *(_QWORD *)a2, 0LL);
      updated = MiUpdatePageFileHighInPte(*(_QWORD *)a2, ++PageFileHigh);
      v6 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = updated;
    }
    while ( !v6 );
  }
}
