/*
 * XREFs of MiInitializeThreadGroup @ 0x1404FA804
 * Callers:
 *     MiUseThreads @ 0x1403CD544 (MiUseThreads.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiComputeSoloZeroingTime @ 0x1404FAAFC (MiComputeSoloZeroingTime.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

char __fastcall MiInitializeThreadGroup(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // ecx
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  _DWORD *v7; // rax
  unsigned int v8; // r9d
  unsigned int v9; // r12d
  unsigned int *v10; // r8
  unsigned int v11; // edx
  unsigned int v12; // edx
  int v13; // edx
  __int64 v14; // rdx
  ULONG *v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rax
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int8 ArchitecturalEfficiencyClass; // dl
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // r11
  unsigned int v26; // r15d
  __int64 v27; // rbp
  __int64 v28; // r14
  unsigned __int64 CoreProcessorSet; // rax
  __int64 v30; // rax

  *(_QWORD *)(a1 + 512) = KeGetCurrentThread();
  v2 = 3LL;
  if ( (unsigned __int64)MiComputeSoloZeroingTime() <= 0x1388 )
  {
    v3 = 0;
    v4 = (_DWORD *)(a1 + 400);
    v5 = 3LL;
    do
    {
      if ( v3 )
      {
        *v4 = 0;
      }
      else if ( *v4 )
      {
        *v4 = 1;
        v3 = 1;
      }
      v4 += 8;
      --v5;
    }
    while ( v5 );
  }
  v6 = a1 + 120;
  memset_0((void *)(a1 + 136), 0, 0x108uLL);
  *(_BYTE *)(a1 + 129) = 1;
  v7 = (_DWORD *)(a1 + 400);
  v8 = 0;
  v9 = *(_DWORD *)((-(__int64)(*(_QWORD *)(a1 + 520) != 0LL) & 0xFFFFFFFFFFFFFFF0uLL) + a1 + 40);
  do
  {
    v8 += *v7;
    v7 += 8;
    --v2;
  }
  while ( v2 );
  v10 = (unsigned int *)(a1 + 16);
  if ( v8 > v9 )
    v8 = *(_DWORD *)((-(__int64)(*(_QWORD *)(a1 + 520) != 0LL) & 0xFFFFFFFFFFFFFFF0uLL) + a1 + 40);
  if ( (*(_DWORD *)(a1 + 16) & 0xA) != 0
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    || KeGetCurrentIrql() == 2
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || (MiFlags & 0x30) == 0 )
  {
    *v10 |= 0x20u;
    v8 = 1;
    v12 = *v10;
  }
  else
  {
    v11 = *v10;
    if ( KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] == *(_DWORD *)(a1 + 84) )
    {
      v12 = v11 | 0x20;
    }
    else
    {
      if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 )
      {
        v13 = v11 | 0x20;
        *v10 = v13;
        v14 = v13 | 0x40u;
        goto LABEL_25;
      }
      v12 = v11 & 0xFFFFFFDF;
    }
    *v10 = v12;
  }
  v14 = v12 & 0xFFFFFFBF;
LABEL_25:
  *v10 = v14;
  *(_DWORD *)(a1 + 28) = v8;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 92), v8);
  v15 = &MiSystemPartition;
  v16 = v8 - 1;
  if ( (*(_DWORD *)(a1 + 16) & 0x20) == 0 )
    v16 = v8;
  *(_DWORD *)(a1 + 32) = v16;
  if ( *(ULONG **)a1 == &MiSystemPartition )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(*(_QWORD *)a1 + 256LL);
  *(_QWORD *)(a1 + 8) = v17;
  LOBYTE(v17) = a1 + 104;
  *(_WORD *)(a1 + 96) = 263;
  *(_BYTE *)(a1 + 98) = 6;
  *(_DWORD *)(a1 + 100) = 0;
  *(_QWORD *)(a1 + 112) = a1 + 104;
  *(_QWORD *)(a1 + 104) = a1 + 104;
  if ( *(_DWORD *)(a1 + 32) )
  {
    LOBYTE(v17) = *(_DWORD *)(a1 + 16) & 0x60;
    if ( (_BYTE)v17 == 32 )
    {
      LODWORD(v17) = *(_DWORD *)(a1 + 400);
      if ( *(_DWORD *)(a1 + 28) != (_DWORD)v17 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v14) = 2;
          LOBYTE(v15) = CurrentIrql;
          KiRaiseIrqlProcessIrqlFlags(v15, v14);
        }
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = 316LL;
        v21 = 316LL;
        ArchitecturalEfficiencyClass = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass;
        if ( ArchitecturalEfficiencyClass != 1 )
          v21 = 348LL;
        if ( *(_DWORD *)(v21 + v6) )
        {
          v23 = 0;
          v24 = 324LL;
          v25 = 328LL;
          if ( ArchitecturalEfficiencyClass != 1 )
            v24 = 356LL;
          v26 = *(_DWORD *)(v24 + v6);
          if ( ArchitecturalEfficiencyClass != 1 )
            v25 = 360LL;
          while ( v23 < v26 )
          {
            v27 = *(_QWORD *)(v25 + v6);
            if ( CurrentPrcb->Group == *(_WORD *)(v27 + 16LL * v23 + 8) )
            {
              v28 = *(_QWORD *)(v27 + 16LL * v23);
              CoreProcessorSet = CurrentPrcb->CoreProcessorSet;
              if ( (CoreProcessorSet & v28) != 0 )
              {
                *(_QWORD *)(v27 + 16LL * v23) = v28 & ~CoreProcessorSet;
                v30 = 316LL;
                if ( ArchitecturalEfficiencyClass != 1 )
                {
                  v30 = 348LL;
                  v20 = 348LL;
                }
                *(_DWORD *)(v20 + v6) = *(_DWORD *)(v30 + v6) - 1;
                *(_DWORD *)(a1 + 16) |= 0x80u;
                break;
              }
            }
            ++v23;
          }
        }
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
        LOBYTE(v17) = CurrentIrql;
        __writecr8(CurrentIrql);
      }
    }
  }
  *(_DWORD *)(a1 + 88) = v9;
  return v17;
}
