/*
 * XREFs of HalpInterruptUpdateLocalUnitIdentifier @ 0x140BF4A8C
 * Callers:
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140BF47C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14021AC70 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptUpdateLocalUnitIdentifier(int a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int i; // eax
  unsigned __int64 v9; // r9
  char v10; // al
  unsigned __int64 v11; // rdx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // r8d
  unsigned int v16; // r8d
  __int64 v18; // rcx
  unsigned int j; // eax
  unsigned __int64 v20; // rcx
  int v21; // r11d
  int v22; // r10d
  unsigned __int64 k; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 m; // r8
  __int64 v27; // rax
  int v28; // [rsp+58h] [rbp+10h] BYREF

  v28 = a2;
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned int)HalpInterruptProcessorCount )
    {
      HalpInterruptSetProblemEx(0LL, 21, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x3F1u);
      return 3221226021LL;
    }
    v9 = (unsigned __int64)i << 6;
    if ( *(_DWORD *)(v9 + HalpInterruptProcessorState) == a1 )
      break;
  }
  v10 = *(_BYTE *)(v9 + HalpInterruptProcessorState + 13);
  v11 = v9 + HalpInterruptProcessorState + 16;
  *(_DWORD *)(v9 + HalpInterruptProcessorState) = a2;
  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v11 & -(__int64)(v10 != 0)));
  v13 = HalpInterruptTargets;
  v14 = ProcessorIndexFromNumber;
  *(_DWORD *)(HalpInterruptLocalIds + 4LL * ProcessorIndexFromNumber) = a2;
  *(_OWORD *)a3 = *(_OWORD *)(v13 + 24LL * ProcessorIndexFromNumber);
  *(_QWORD *)(a3 + 16) = *(_QWORD *)(v13 + 24LL * ProcessorIndexFromNumber + 16);
  if ( *(_DWORD *)(v13 + 24LL * ProcessorIndexFromNumber) == 4 )
    *(_DWORD *)(v13 + 24LL * ProcessorIndexFromNumber + 8) = v28;
  if ( *(_QWORD *)(HalpInterruptController + 144) )
  {
    v15 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), (__int64)&v28);
    if ( v15 < 0 )
    {
      HalpInterruptSetProblemEx(
        HalpInterruptController,
        9,
        v15,
        (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
        0x415u);
      return v16;
    }
    v18 = HalpInterruptTargets;
    *(_OWORD *)(HalpInterruptTargets + 24 * v14) = *(_OWORD *)a4;
    *(_QWORD *)(v18 + 24 * v14 + 16) = *(_QWORD *)(a4 + 16);
  }
  for ( j = 0; j < HalpInterruptDynamicProcessorCount; ++j )
  {
    v20 = (unsigned __int64)j << 6;
    if ( *(_DWORD *)(v20 + HalpInterruptDynamicProcessorState) == a1 )
    {
      *(_DWORD *)(v20 + HalpInterruptDynamicProcessorState) = v28;
      break;
    }
  }
  v21 = -1;
  v22 = 29;
  if ( *(_DWORD *)a3 == 6 )
  {
    for ( k = HalpInterruptClusterData; ; k += 24LL )
    {
      if ( k >= HalpInterruptClusterDataEnd )
      {
        HalpInterruptSetProblemEx(0LL, 29, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x44Cu);
        goto LABEL_24;
      }
      if ( *(_DWORD *)k == *(_DWORD *)(a3 + 8) )
        break;
    }
    v24 = *(_QWORD *)(k + 8) & ~(1LL << (*(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Type + 4 * v14) & 0x3F));
    *(_QWORD *)(k + 8) = v24;
    if ( !v24 )
      *(_DWORD *)k = -1;
  }
LABEL_24:
  v25 = HalpInterruptTargets;
  *(_OWORD *)a4 = *(_OWORD *)(HalpInterruptTargets + 24 * v14);
  *(_QWORD *)(a4 + 16) = *(_QWORD *)(v25 + 24 * v14 + 16);
  if ( *(_DWORD *)a4 == 6 )
  {
    for ( m = HalpInterruptClusterData; m < HalpInterruptClusterDataEnd; m += 24LL )
    {
      if ( *(_DWORD *)m == v21 || *(_DWORD *)m == *(_DWORD *)(a4 + 8) )
      {
        *(_DWORD *)m = *(_DWORD *)(a4 + 8);
        v27 = *(_QWORD *)(m + 8);
        _bittestandset64(&v27, *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + v14) & 0x3F);
        *(_QWORD *)(m + 8) = v27;
        return 0LL;
      }
    }
    HalpInterruptSetProblemEx(0LL, v22, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c", 0x46Fu);
  }
  return 0LL;
}
