/*
 * XREFs of MmGetDumpRange @ 0x1406FB5A4
 * Callers:
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 * Callees:
 *     MiRemovePendingBadPagesFromDump @ 0x1406F66E4 (MiRemovePendingBadPagesFromDump.c)
 *     MiAddNonSecuredPagesToDump @ 0x1406FA8D8 (MiAddNonSecuredPagesToDump.c)
 *     MiAddPhysicalPagesToCrashDump @ 0x1406FACC8 (MiAddPhysicalPagesToCrashDump.c)
 *     MiAddRangeToCrashDump @ 0x1406FAE2C (MiAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x1406FB8B8 (MmRemoveSystemCacheFromDump.c)
 *     MiRemoveEnclavePagesFromDump @ 0x140704EE0 (MiRemoveEnclavePagesFromDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall MmGetDumpRange(__int64 a1, int a2, __int64 a3, char a4)
{
  __int64 *v6; // rdi
  __int64 v7; // rbp
  signed __int64 v8; // rax
  char *v9; // rax
  unsigned int i; // edi
  __int64 *v11; // rdx
  unsigned int v12; // esi
  int v13; // edx
  int v14; // r10d
  unsigned int v15; // r9d
  __int64 v16; // r11
  unsigned int v17; // ebp
  unsigned int v18; // eax
  _QWORD *v19; // rdx
  __int64 j; // r8
  unsigned __int64 v21; // rax
  unsigned int v22; // edx
  __int64 v23; // rdi
  __int64 k; // rdi

  if ( a2 )
  {
    v9 = (char *)MmPhysicalMemoryBlock;
    for ( i = 0; i < *(_DWORD *)MmPhysicalMemoryBlock; ++i )
    {
      v11 = (__int64 *)&v9[16 * i + 16];
      if ( (MiFlags & 0x10000) != 0 || qword_140E2D930 )
        MiAddNonSecuredPagesToDump(a1, *v11, v11[1]);
      else
        guard_dispatch_icall_no_overrides(a1, *v11);
      v9 = (char *)MmPhysicalMemoryBlock;
    }
  }
  else
  {
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v6 = KiProcessorBlock;
      v7 = (unsigned int)KeNumberProcessors_0;
      do
      {
        guard_dispatch_icall_no_overrides(a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*v6++ + 8) + 184LL) + 40LL) >> 12);
        --v7;
      }
      while ( v7 );
    }
    MiAddRangeToCrashDump(a1, 0xFFFF800000000000uLL, 0x800000000000LL, 0);
    if ( ((__int64)KiDpcWatchdogConfigurationLock.InitialStack & 3) != 0 )
      MiAddRangeToCrashDump(a1, 0LL, 0x7FFFFFFF0000LL, (a4 & 1) == 0);
    v8 = __readcr3();
    guard_dispatch_icall_no_overrides(a1, v8 / 4096);
    if ( (a4 & 2) != 0 )
    {
      MiAddPhysicalPagesToCrashDump(a1);
      MmRemoveSystemCacheFromDump(a1);
    }
  }
  v12 = 0;
  while ( 2 )
  {
    v13 = *(_DWORD *)stru_140E2ED08.QuantumTarget - 1;
    v14 = (*(_DWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4) != 0LL ? 0x20 : 0;
    v15 = v12 < *(_DWORD *)stru_140E2ED08.QuantumTarget ? v12 : 0;
    v16 = *(_QWORD *)(stru_140E2ED08.QuantumTarget + 8)
        - ((*(_QWORD *)(stru_140E2ED08.QuantumTarget + 8) & 4LL) != 0 ? 4 : 0);
    while ( 1 )
    {
      v17 = v14 + v13;
      if ( v13 - v15 == -1 )
        goto LABEL_18;
      v19 = (_QWORD *)(v16 + 8 * ((unsigned __int64)(v14 + v15) >> 6));
      for ( j = ~*v19 | ((1LL << ((unsigned __int8)v14 + (unsigned __int8)v15)) - 1); j == -1; j = ~*v19 )
      {
        if ( (unsigned __int64)++v19 > v16 + 8 * ((unsigned __int64)v17 >> 6) )
          goto LABEL_18;
      }
      _BitScanForward64(&v21, ~j);
      v18 = ((unsigned int)(((__int64)v19 - v16) >> 3) << 6) + v21;
      if ( v18 > v17 )
      {
LABEL_18:
        v18 = -1;
        goto LABEL_25;
      }
      if ( v18 != -1 )
        break;
LABEL_25:
      if ( !v15 )
        goto LABEL_30;
      v22 = v12 + 1;
      if ( v12 + 1 > *(_DWORD *)stru_140E2ED08.QuantumTarget )
        v22 = *(_DWORD *)stru_140E2ED08.QuantumTarget;
      v13 = v22 - 1;
      v15 = 0;
    }
    v18 -= v14;
LABEL_30:
    if ( v18 >= v12 && v18 != -1 )
    {
      v12 = v18 + 1;
      v23 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * v18);
      if ( (*(_DWORD *)(v23 + 4) & 2) != 0 )
      {
        for ( k = *(_QWORD *)(v23 + 7424); k != 0x3FFFFFFFFFLL; k = *(_QWORD *)(48 * k - 0x220000000000LL) & 0xFFFFFFFFFFLL )
          guard_dispatch_icall_no_overrides(a1, k);
      }
      continue;
    }
    break;
  }
  MiRemovePendingBadPagesFromDump(a1);
  if ( stru_140E366D8.InitialStack )
    MiRemoveEnclavePagesFromDump(a1);
}
