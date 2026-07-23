/*
 * XREFs of MmAddPrivateDataToCrashDump @ 0x1406FB3EC
 * Callers:
 *     IopLiveDumpAddPfnDatabase @ 0x1405CEDC0 (IopLiveDumpAddPfnDatabase.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405D2F88 (IopLiveDumpMarkRequiredDumpData.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiAddPartitionDataToCrashDump @ 0x1406FA9A4 (MiAddPartitionDataToCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall MmAddPrivateDataToCrashDump(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 *v6; // r14
  __int64 v7; // rbp
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v2 = 0;
  if ( (a2 & 1) != 0 )
  {
    v5 = MiAddRangeToCrashDump(a1, MmPfnDatabase, 48 * (qword_140E2D920 + 1), 0);
    if ( v5 < 0 )
      v2 = v5;
  }
  if ( (a2 & 2) != 0 && (_DWORD)KeNumberProcessors_0 )
  {
    v6 = KiProcessorBlock;
    v7 = (unsigned int)KeNumberProcessors_0;
    do
    {
      v8 = guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v6++ + 8) + 184LL) + 40LL) >> 12);
      if ( v8 < 0 )
        v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  if ( (a2 & 4) != 0 )
  {
    v9 = MiAddRangeToCrashDump(a1, (unsigned __int64)PsNtosImageBase, PsNtosImageEnd - (_QWORD)PsNtosImageBase, 0);
    if ( v9 < 0 )
      v2 = v9;
  }
  if ( (a2 & 8) != 0 )
  {
    v10 = MiAddRangeToCrashDump(a1, (unsigned __int64)PsHalImageBase, PsHalImageEnd - (_QWORD)PsHalImageBase, 0);
    if ( v10 < 0 )
      v2 = v10;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v11 = MiAddPartitionDataToCrashDump(a1);
    if ( v11 < 0 )
      return (unsigned int)v11;
  }
  return v2;
}
