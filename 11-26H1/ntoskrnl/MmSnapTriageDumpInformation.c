/*
 * XREFs of MmSnapTriageDumpInformation @ 0x14044A658
 * Callers:
 *     IoWriteCrashDump @ 0x1405C7FAC (IoWriteCrashDump.c)
 *     IopCollectTriageDumpData @ 0x1405C8974 (IopCollectTriageDumpData.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405CA224 (IopWriteCapsuleTriageDumpToFirmware.c)
 * Callees:
 *     MiAddTriageDumpPtes @ 0x14044A7A4 (MiAddTriageDumpPtes.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 */

__int64 __fastcall MmSnapTriageDumpInformation(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  char *v5; // rbx
  __int64 v6; // rdi

  IoAddTriageDumpDataBlock((ULONG)&MiState, (PVOID)0xB740);
  IoAddTriageDumpDataBlock((ULONG)&MiSystemPartition, (PVOID)0x6C40);
  *(_QWORD *)&MiTriageDumpData = qword_140E399D0;
  dword_140EF8C28 = *(_DWORD *)&stru_140E2EB88.SchedulerApc.Type;
  dword_140EF8C2C = *(_DWORD *)&stru_140E2EB88.SuspendCount;
  qword_140EF8C30 = (__int64)stru_140E2EB88.SchedulerApc.Reserved[1];
  qword_140EF8C40 = KeFeatureBits;
  qword_140EF8C48 = 0LL;
  dword_140EF8C3C = 0;
  qword_140EF8C58 = 0LL;
  dword_140EF8C38 = *(_DWORD *)&stru_140E2EB88.SavedApcStateFill[12]
                  + *(_DWORD *)&stru_140E2EB88.SavedApcStateFill[16]
                  + *(_DWORD *)&stru_140E2EB88.SavedApcStateFill[20];
  LODWORD(qword_140EF8C48) = MEMORY[0xFFFFF78000000240];
  qword_140EF8C50 = MiFlags;
  if ( *(_QWORD *)&HvlpVsmVtlCallVa )
    qword_140EF8C58 = *(_QWORD *)&HvlpVsmVtlCallVa;
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
