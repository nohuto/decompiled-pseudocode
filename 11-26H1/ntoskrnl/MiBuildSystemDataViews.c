/*
 * XREFs of MiBuildSystemDataViews @ 0x140CF9F28
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1408676D4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140CF97C4 (MiInitializeDynamicRegion.c)
 */

__int64 MiBuildSystemDataViews()
{
  unsigned __int64 v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rbx
  char *AnyMultiplexedVm; // rdx
  __int64 *v4; // rax

  v0 = qword_140E37C78;
  v1 = 0;
  if ( !(unsigned int)MiInitializeDynamicRegion(17) )
    return 0LL;
  v2 = v0 >> 12;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(2);
  v4 = &qword_140E37800;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) != 1 )
    v4 = (__int64 *)(AnyMultiplexedVm + 192);
  *v4 = (__int64)&stru_140E34C08.Timer.Processor;
  LOBYTE(v1) = (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)AnyMultiplexedVm, 4, v2) >= 0;
  return v1;
}
