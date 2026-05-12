/*
 * XREFs of StorCheckForNvmeTimeoutUpdates @ 0x140096B64
 * Callers:
 *     RaidAdapterStartMiniport @ 0x140053D94 (RaidAdapterStartMiniport.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     StorGetNVMePollingInformation @ 0x140097348 (StorGetNVMePollingInformation.c)
 */

__int64 __fastcall StorCheckForNvmeTimeoutUpdates(__int64 a1)
{
  __int64 Pool; // rax
  _WORD *v3; // rdi
  int NVMePollingInformation; // ebx
  int v5; // ecx

  Pool = RaidAllocatePool(64LL, 4096LL, 1447977298LL, *(_QWORD *)(a1 + 8));
  v3 = (_WORD *)Pool;
  if ( Pool )
  {
    NVMePollingInformation = StorGetNVMePollingInformation(a1, Pool);
    if ( NVMePollingInformation >= 0 )
    {
      if ( *v3 >= 0x101u )
      {
        v5 = (unsigned __int16)v3[6];
        *(_WORD *)(a1 + 6296) = v5;
        *(_WORD *)(a1 + 6298) = v3[7];
        if ( (_WORD)v5 )
          *(_DWORD *)(a1 + 4188) = v5;
      }
      else
      {
        NVMePollingInformation = -1073741637;
      }
    }
    ExFreePoolWithTag(v3, 0x564E6152u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)NVMePollingInformation;
}
