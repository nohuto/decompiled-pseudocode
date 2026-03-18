/*
 * XREFs of ExpLegacyWorkerInitialization @ 0x1406D0AB4
 * Callers:
 *     ExpWorkerInitialization @ 0x140CE6768 (ExpWorkerInitialization.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038227C (KeIsNodeInitialized.c)
 */

__int64 ExpLegacyWorkerInitialization()
{
  int v0; // ecx
  LONG SpareLong; // edx
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  struct _LIST_ENTRY *v5; // rax
  __int64 v6; // rdx
  struct _LIST_ENTRY *v7; // r8
  __int64 result; // rax

  v0 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[160];
  if ( *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[160] > 0x64u )
  {
    v0 = 100;
    *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[160] = 100;
  }
  SpareLong = ExSaPageGroupDescriptorArrayLock.WaitBlock[3].SpareLong;
  if ( ExSaPageGroupDescriptorArrayLock.WaitBlock[3].SpareLong > 0x64u )
  {
    SpareLong = 100;
    ExSaPageGroupDescriptorArrayLock.WaitBlock[3].SpareLong = 100;
  }
  v2 = 5;
  if ( (_BYTE)dword_140FBE22C )
    v2 = 10;
  LODWORD(ExSaPageGroupDescriptorArrayLock.ThreadListEntry.Flink) = v0 + v2;
  *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[88] = SpareLong + 7;
  v3 = 8
     * *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[32]
     * (unsigned int)*(unsigned __int16 *)(KeNodeBlock[0] & -(__int64)KeIsNodeInitialized(0));
  v5 = (struct _LIST_ENTRY *)v4;
  if ( (*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8 * v3) & 1) == 0 )
    v5 = *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL) + 8 * v3);
  ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Blink = v5;
  v6 = *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.SavedApcStateFill[32]
     * (8 * (unsigned int)*(unsigned __int16 *)(KeNodeBlock[0] & -(__int64)KeIsNodeInitialized(0)) + 1);
  result = *(_QWORD *)(*((_QWORD *)PspSystemPartition + 2) + 8LL);
  if ( (*(_QWORD *)(result + 8 * v6) & 1) == 0 )
    v7 = *(struct _LIST_ENTRY **)(result + 8 * v6);
  ExSaPageGroupDescriptorArrayLock.SuspendEvent.Header.WaitListHead.Flink = v7;
  return result;
}
