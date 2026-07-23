/*
 * XREFs of ExpLegacyWorkerInitialization @ 0x1406D4AE4
 * Callers:
 *     ExpWorkerInitialization @ 0x140CECB08 (ExpWorkerInitialization.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 */

__int64 ExpLegacyWorkerInitialization()
{
  int v0; // ecx
  ULONG SpareLong0; // edx
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // rax
  __int64 v6; // rdx
  struct _LIST_ENTRY *v7; // r8
  __int64 result; // rax

  v0 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[88];
  if ( *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[88] > 0x64u )
  {
    v0 = 100;
    *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[88] = 100;
  }
  SpareLong0 = ExSaPageGroupDescriptorArrayLock.SchedulerApc.SpareLong0;
  if ( ExSaPageGroupDescriptorArrayLock.SchedulerApc.SpareLong0 > 0x64 )
  {
    SpareLong0 = 100;
    ExSaPageGroupDescriptorArrayLock.SchedulerApc.SpareLong0 = 100;
  }
  v2 = 5;
  if ( (_BYTE)dword_140FBF22C )
    v2 = 10;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[48] = v0 + v2;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SchedulerApc.Type = SpareLong0 + 7;
  v3 = 8
     * *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72]
     * (unsigned int)*(unsigned __int16 *)(KeNodeBlock[0] & -(__int64)KeIsNodeInitialized(0));
  v5 = v4;
  if ( (*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8 * v3) & 1) == 0 )
    v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8 * v3);
  *(_QWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64] = v5;
  v6 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72]
     * (8 * (unsigned int)*(unsigned __int16 *)(KeNodeBlock[0] & -(__int64)KeIsNodeInitialized(0)) + 1);
  result = *(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL);
  if ( (*(_QWORD *)(result + 8 * v6) & 1) == 0 )
    v7 = *(struct _LIST_ENTRY **)(result + 8 * v6);
  ExSaPageGroupDescriptorArrayLock.WaitBlock[1].WaitListEntry.Blink = v7;
  return result;
}
