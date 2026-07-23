/*
 * XREFs of MiBuildPagedPool @ 0x140CFFE1C
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildPagedPool()
{
  unsigned __int64 v0; // rbx
  unsigned __int64 v1; // rbx
  char *AnyMultiplexedVm; // rdx
  __int64 *v3; // rax
  unsigned __int64 v4; // rbx

  v0 = qword_140E37D28;
  if ( !(unsigned int)MiInitializeDynamicRegion(5) )
    return 0LL;
  MmSizeOfPagedPoolInBytes = v0;
  v1 = v0 >> 12;
  stru_140E366D8.WaitStatus = v1;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  v3 = &qword_140E37980;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v3 = (__int64 *)(AnyMultiplexedVm + 192);
  *v3 = (__int64)&unk_140E2C7C0;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 2, v1) < 0 )
    return 0LL;
  stru_140E366D8.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)stru_140E366D8.WaitStatus;
  stru_140E366D8.ApcState.ApcListHead[1].Flink = 0LL;
  qword_140E2C720 = 7680LL;
  if ( v1 < 0x9600 )
    qword_140E2C720 = v1 / 5;
  v4 = 2 * v1;
  qword_140E2C728 = 15360LL;
  if ( v4 < 0x12C00 )
    qword_140E2C728 = v4 / 5;
  return 1LL;
}
