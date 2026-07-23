/*
 * XREFs of KeConfigureHeteroProcessors @ 0x140452524
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiConfigureCpuSetSchedulingInformation @ 0x140452744 (KiConfigureCpuSetSchedulingInformation.c)
 *     KiGetNumberOfActiveSubNodes @ 0x1404528F0 (KiGetNumberOfActiveSubNodes.c)
 *     KeEnumerateNextNodeInSystem @ 0x140452D80 (KeEnumerateNextNodeInSystem.c)
 *     KiComputeHeteroConfig @ 0x140452E08 (KiComputeHeteroConfig.c)
 *     KiTraceLogHeteroRundown @ 0x140453274 (KiTraceLogHeteroRundown.c)
 *     KiUpdateProcessorClasses @ 0x1404536B0 (KiUpdateProcessorClasses.c)
 *     KiUpdateHgsScores @ 0x140453970 (KiUpdateHgsScores.c)
 *     KiInstallSubNodeHeteroSets @ 0x140453E78 (KiInstallSubNodeHeteroSets.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeConfigureHeteroProcessors(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // r13
  unsigned int v5; // ebx
  unsigned int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  __m128 v9; // xmm0
  unsigned __int64 v10; // rsi
  unsigned int v11; // edi
  int v12; // eax
  __int64 v13; // rax
  int v14; // esi
  int v15; // eax
  unsigned int v16; // edi
  int v17; // r14d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-18h] BYREF
  __int128 v22; // [rsp+30h] [rbp-10h]
  unsigned __int64 v24; // [rsp+98h] [rbp+58h] BYREF

  KiComputeHeteroConfig();
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  v5 = 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 2LL);
  }
  KiUpdateProcessorClasses();
  KiUpdateHgsScores();
  KiGetNumberOfActiveSubNodes();
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( *(_DWORD *)(KiHeteroConfig + 12) )
  {
    v7 = 1;
    v8 = 1;
  }
  else
  {
    if ( !*(_DWORD *)(KiHeteroConfig + 16) )
      goto LABEL_8;
    v8 = *(_DWORD *)(KiHeteroConfig + 8);
  }
  v6 = 1;
LABEL_8:
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v9 = KeEnumerateNextNodeInSystem(&v21, &v24);
  v10 = v24;
  v11 = 0;
  HIDWORD(v22) = v9.m128_i32[3];
  *(_QWORD *)&v22 = v24;
  DWORD2(v22) = 0;
  while ( 1 )
  {
    v24 = 0LL;
    while ( v11 >= *(_DWORD *)(v10 + 48) )
    {
      KeEnumerateNextNodeInSystem(&v21, &v24);
      if ( v12 < 0 )
      {
        v11 = DWORD2(v22);
        v13 = 0LL;
        v10 = v22;
        goto LABEL_13;
      }
      v10 = v24;
      v22 = v24;
      v11 = 0;
    }
    v19 = *(_QWORD *)(v10 + 32);
    v20 = v11++;
    DWORD2(v22) = v11;
    v13 = *(_QWORD *)(v19 + 8 * v20);
LABEL_13:
    if ( !v13 )
      break;
    KiInstallSubNodeHeteroSets(v13, v6, KiHeteroConfig + 32, *(unsigned int *)(KiHeteroConfig + 24));
  }
  v14 = KeHeteroSystem;
  KeHeteroSystem = v6;
  KeHeteroSystemVirtual = v7;
  KeHeteroSystemQos = v8;
  KiEfficiencyClassSystem = *(_DWORD *)(KiHeteroConfig + 20);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  KiTraceLogHeteroRundown(&dword_140E06F58);
  v15 = KeHeteroSystem;
  v16 = 0;
  v17 = KiDefaultHeteroCpuPolicy;
  *a3 = KeHeteroSystem;
  for ( KiDefaultHeteroCpuPolicy = v15 != 0 ? KiDesiredHeteroCpuPolicy : 0; v16 < (unsigned int)KeNumberProcessors_0; ++v16 )
    KiConfigureCpuSetSchedulingInformation(KiProcessorBlock[v16]);
  if ( v17 != KiDefaultHeteroCpuPolicy || v14 != KeHeteroSystem )
    return 1;
  return v5;
}
