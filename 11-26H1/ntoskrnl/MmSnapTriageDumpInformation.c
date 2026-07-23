/*
 * XREFs of MmSnapTriageDumpInformation @ 0x140442788
 * Callers:
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x1405CB244 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405CCAF4 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     MiAddTriageDumpPtes @ 0x1404428D4 (MiAddTriageDumpPtes.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  IoAddTriageDumpDataBlock((ULONG)&MiState, (PVOID)0xB740);
  IoAddTriageDumpDataBlock((ULONG)&MiSystemPartition, (PVOID)0x6C40);
  *(_QWORD *)&MiTriageDumpData = qword_140E39B50;
  dword_140EF8F88 = *(_DWORD *)&stru_140E2ED08.SchedulerApc.Type;
  dword_140EF8F8C = *(_DWORD *)&stru_140E2ED08.SuspendCount;
  qword_140EF8F90 = (__int64)stru_140E2ED08.SchedulerApc.Reserved[1];
  qword_140EF8FA0 = KeFeatureBits;
  qword_140EF8FA8 = 0LL;
  dword_140EF8F9C = 0;
  qword_140EF8FB8 = 0LL;
  dword_140EF8F98 = *(_DWORD *)&stru_140E2ED08.SavedApcStateFill[12]
                  + *(_DWORD *)&stru_140E2ED08.SavedApcStateFill[16]
                  + *(_DWORD *)&stru_140E2ED08.SavedApcStateFill[20];
  LODWORD(qword_140EF8FA8) = MEMORY[0xFFFFF78000000240];
  qword_140EF8FB0 = MiFlags;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
    qword_140EF8FB8 = *(_QWORD *)&HvlpVsmVtlCallVa;
  v4 = 4LL;
  do
  {
    MiAddTriageDumpPtes(*a2++);
    --v4;
  }
  while ( v4 );
  v5 = &IopRunTimeContextOffsets;
  v6 = 15LL;
  do
  {
    MiAddTriageDumpPtes(*(_QWORD *)(*(unsigned __int16 *)v5 + a1));
    v5 += 2;
    --v6;
  }
  while ( v6 );
  return IoAddTriageDumpDataBlock((ULONG)&MiTriageDumpData, (PVOID)0x40);
}
