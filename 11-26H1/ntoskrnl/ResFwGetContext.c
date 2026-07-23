/*
 * XREFs of ResFwGetContext @ 0x140C56D8C
 * Callers:
 *     BgGetContext @ 0x140C559EC (BgGetContext.c)
 * Callees:
 *     MmAllocatePagesForMdlEx @ 0x14034A280 (MmAllocatePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 */

__int64 __fastcall ResFwGetContext(_QWORD *a1)
{
  char *v1; // rbx
  __int64 result; // rax
  unsigned __int8 v4; // al
  int v5; // ecx
  unsigned int v6; // ebp
  unsigned int v7; // r14d
  PMDL PagesForMdl; // rax
  PMDL v9; // rdi
  char *MappedSystemVa; // rdx
  _QWORD *Object; // r8

  v1 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = gLoadedDiffHivesLock.WaitBlockFill6[80];
  *a1 = 0LL;
  if ( (v4 & 1) == 0 )
    return 3221225473LL;
  v5 = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[108];
  if ( *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[112] >= *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[108] )
    v5 = *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[112];
  v6 = (*(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[124]
      + v5
      + *(_DWORD *)&gLoadedDiffHivesLock.WaitBlockFill11[120]
      + 20479) & 0xFFFFF000;
  v7 = ((v6 >> 3) + 4095) & 0xFFFFF000;
  PagesForMdl = MmAllocatePagesForMdlEx(0LL, (PHYSICAL_ADDRESS)-1LL, 0LL, v7 + v6, MmCached, 5u);
  v9 = PagesForMdl;
  if ( PagesForMdl )
  {
    if ( (PagesForMdl->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)PagesForMdl->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
  }
  else
  {
    MappedSystemVa = 0LL;
  }
  Object = gLoadedDiffHivesLock.WaitBlock[2].Object;
  *((_QWORD *)gLoadedDiffHivesLock.WaitBlock[2].Object + 1) = v9;
  Object[2] = MappedSystemVa;
  if ( MappedSystemVa )
    v1 = &MappedSystemVa[v7];
  *((_DWORD *)Object + 6) = MappedSystemVa != 0LL ? v7 + v6 : 0;
  *((_DWORD *)Object + 62) = MappedSystemVa != 0LL ? v6 : 0;
  Object[30] = v1;
  WheapPfaLock.SchedulerApc.SystemArgument2 = (PVOID)gLoadedDiffHivesLock.NpxState;
  WheapPfaLock.SchedulerApc.SystemArgument1 = gLoadedDiffHivesLock.SavedApcState.ApcListHead[0].Flink;
  result = 0LL;
  *a1 = Object;
  return result;
}
