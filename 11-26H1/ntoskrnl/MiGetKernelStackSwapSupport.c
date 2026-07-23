/*
 * XREFs of MiGetKernelStackSwapSupport @ 0x1403FEB9C
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1404BC104 (MmOutSwapWorkingSet.c)
 * Callees:
 *     MiMakePageFilePte @ 0x140298330 (MiMakePageFilePte.c)
 *     MiPageFileLargestBitmapsRun @ 0x1403FEA88 (MiPageFileLargestBitmapsRun.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1403FED50 (MiAllocateWorkingSetSwapSupport.c)
 *     MiFindFreePageFileSpace @ 0x1403FEF30 (MiFindFreePageFileSpace.c)
 */

__int64 __fastcall MiGetKernelStackSwapSupport(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 v6; // rbp
  unsigned int v7; // r15d
  __int64 *v8; // r14
  unsigned int v9; // ebx
  __int64 WorkingSetSwapSupport; // rax
  unsigned __int64 PageFilePte; // rax
  __int64 v12; // r8
  unsigned __int64 *v13; // rdx
  unsigned int v15; // ebx

  v2 = -1;
  v3 = 0;
  v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(a2 + 1198));
  v7 = *(_DWORD *)(v6 + 22296);
  if ( !v7 )
    return 3221225799LL;
  v8 = (__int64 *)(v6 + 22304);
  do
  {
    if ( (*(_BYTE *)(*v8 + 172) & 0x50) == 0 )
    {
      if ( v2 == -1
        || (v15 = MiPageFileLargestBitmapsRun(*v8),
            v15 > (unsigned int)MiPageFileLargestBitmapsRun(*(_QWORD *)(v6 + 8LL * v2 + 22304))) )
      {
        v2 = v3;
      }
    }
    ++v3;
    ++v8;
  }
  while ( v3 < v7 );
  if ( v2 == -1 )
    return 3221225799LL;
  v9 = *(_DWORD *)(a2 + 896);
  if ( !v9 )
    return 3221225738LL;
  if ( v9 > 0xFFFFFFFF / ((unsigned int)KeKernelStackSize >> 12) )
    v9 = 0xFFFFFFFF / ((unsigned int)KeKernelStackSize >> 12);
  WorkingSetSwapSupport = MiAllocateWorkingSetSwapSupport(2 * v9);
  *(_QWORD *)(a1 + 56) = WorkingSetSwapSupport;
  if ( !WorkingSetSwapSupport )
    return 3221225626LL;
  PageFilePte = MiMakePageFilePte(0);
  *v13 = v12 ^ (v12 ^ PageFilePte) & 0xFFFFFFFFFFFF0FFFuLL;
  *(_DWORD *)(a1 + 72) = MiFindFreePageFileSpace(v6, v13, v9 * ((unsigned int)KeKernelStackSize >> 12), 33LL);
  return 0LL;
}
