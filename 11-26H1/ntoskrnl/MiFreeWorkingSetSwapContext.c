/*
 * XREFs of MiFreeWorkingSetSwapContext @ 0x140AC1D44
 * Callers:
 *     MiBeginProcessClean @ 0x140313D2C (MiBeginProcessClean.c)
 *     MmOutSwapWorkingSet @ 0x1404C28B4 (MmOutSwapWorkingSet.c)
 *     MmInSwapWorkingSet @ 0x1404D58CC (MmInSwapWorkingSet.c)
 *     MiInSwapSharedWorkingSetWorker @ 0x14087A710 (MiInSwapSharedWorkingSetWorker.c)
 * Callees:
 *     MiFreeReservationRun @ 0x140AC1DFC (MiFreeReservationRun.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeWorkingSetSwapContext(__int64 a1, __int64 a2)
{
  void *v4; // rcx
  void *v5; // rcx

  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  v4 = *(void **)(a2 + 8);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a2 + 56);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  MiFreeReservationRun(a1, a2 + 64);
  ExFreePoolWithTag((PVOID)a2, 0);
}
