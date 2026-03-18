/*
 * XREFs of MiInitializeSystemPtes @ 0x140CFF020
 * Callers:
 *     MiInitNucleus @ 0x140CF2CBC (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiObtainSystemVa @ 0x1402A4D3C (MiObtainSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x140457870 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x1408676D4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140CF97C4 (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x140CFEE68 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  unsigned __int64 v0; // rbp
  unsigned __int64 v1; // rsi
  char *AnyMultiplexedVm; // rax
  __int64 v3; // rdi
  __int64 *v4; // rax
  char *v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // r14

  v0 = qword_140E37BC0;
  v1 = qword_140E37BC8;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v3 = (__int64)AnyMultiplexedVm;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) == 1 )
    v4 = &qword_140E37800;
  else
    v4 = (__int64 *)(AnyMultiplexedVm + 192);
  *v4 = (__int64)&stru_140E34C08.StackBase;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, v3, 5, 0LL) < 0 )
    return 0LL;
  v5 = MiGetAnyMultiplexedVm(5);
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)v5, 6, 0LL) < 0 )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v7 = ((((v1 >> 15) + 4095) & 0xFFFFFFFFFFFFF000uLL) * (dword_140FBE20C & 2 | 1LL) + (v1 >> 24) + 0x1FFFFF) >> 21;
  stru_140E2D930.RelativeTimerBias = v0
                                   - ((unsigned __int64)((unsigned int)v7 + (ExGenRandom(1, v6) & 0x3FFF)) << 21)
                                   + v1;
  if ( !(unsigned int)MiInitializePteInfo(
                        (__int64)&stru_140E36558.WaitBlockList,
                        8,
                        stru_140E2D930.RelativeTimerBias + (v1 >> 24),
                        4uLL,
                        v0,
                        v1,
                        1u,
                        qword_140E349D8) )
    return 0LL;
  *(_BYTE *)(v3 + 184) = *(_DWORD *)(v3 + 184) & 0xF0 | 5;
  if ( !(unsigned int)MiInitializeDynamicRegion(8) )
    return 0LL;
  MiObtainSystemVa((unsigned int)v7, 0xCu);
  qword_140E34B70 = 0LL;
  MiFlags |= 0x100000000uLL;
  return 1LL;
}
