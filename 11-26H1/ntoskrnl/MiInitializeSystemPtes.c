/*
 * XREFs of MiInitializeSystemPtes @ 0x140D053C0
 * Callers:
 *     MiInitNucleus @ 0x140CF903C (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x140200C10 (ExGenRandom.c)
 *     MiObtainSystemVa @ 0x1402A428C (MiObtainSystemVa.c)
 *     MiGetAnyMultiplexedVm @ 0x14044F0E0 (MiGetAnyMultiplexedVm.c)
 *     MiInitializeSystemWorkingSetList @ 0x14086DAB4 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicRegion @ 0x140CFFB44 (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x140D05208 (MiInitializePteInfo.c)
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

  v0 = qword_140E37D40;
  v1 = qword_140E37D48;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(4);
  v3 = (__int64)AnyMultiplexedVm;
  if ( (*((_DWORD *)AnyMultiplexedVm + 46) & 0xF) == 1 )
    v4 = &qword_140E37980;
  else
    v4 = (__int64 *)(AnyMultiplexedVm + 192);
  *v4 = (__int64)&stru_140E34D88.StackBase;
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, v3, 5, 0LL) < 0 )
    return 0LL;
  v5 = MiGetAnyMultiplexedVm(5);
  if ( (int)MiInitializeSystemWorkingSetList((__int64)&MiSystemPartition, (__int64)v5, 6, 0LL) < 0 )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v7 = ((((v1 >> 15) + 4095) & 0xFFFFFFFFFFFFF000uLL) * (dword_140FBF20C & 2 | 1LL) + (v1 >> 24) + 0x1FFFFF) >> 21;
  stru_140E2DAB0.RelativeTimerBias = v0
                                   - ((unsigned __int64)((unsigned int)v7 + (ExGenRandom(1, v6) & 0x3FFF)) << 21)
                                   + v1;
  if ( !(unsigned int)MiInitializePteInfo(
                        (__int64)&stru_140E366D8.WaitBlockList,
                        8,
                        stru_140E2DAB0.RelativeTimerBias + (v1 >> 24),
                        4uLL,
                        v0,
                        v1,
                        1u,
                        qword_140E34B58) )
    return 0LL;
  *(_BYTE *)(v3 + 184) = *(_DWORD *)(v3 + 184) & 0xF0 | 5;
  if ( !(unsigned int)MiInitializeDynamicRegion(8) )
    return 0LL;
  MiObtainSystemVa((unsigned int)v7, 0xCu);
  qword_140E34CF0 = 0LL;
  MiFlags |= 0x100000000uLL;
  return 1LL;
}
