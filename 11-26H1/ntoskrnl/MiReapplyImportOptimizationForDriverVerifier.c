/*
 * XREFs of MiReapplyImportOptimizationForDriverVerifier @ 0x1406FB178
 * Callers:
 *     MmApplyVerifierToRunningImage @ 0x140C43750 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211EA0 (KeQueryActiveProcessorCountEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MiSectionControlArea @ 0x14038A9B0 (MiSectionControlArea.c)
 *     ExAllocatePoolMm @ 0x1403985B0 (ExAllocatePoolMm.c)
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     KeIpiGenericCall @ 0x1404AAD60 (KeIpiGenericCall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     RtlDeleteBarrier @ 0x140622DC0 (RtlDeleteBarrier.c)
 *     MiUnlockAndFreeDvPatchImage @ 0x1406FBA88 (MiUnlockAndFreeDvPatchImage.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140792F08 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     MiLockAndMapEntireDriver @ 0x14086D784 (MiLockAndMapEntireDriver.c)
 *     MiUnlockEntireDriver @ 0x14086D940 (MiUnlockEntireDriver.c)
 *     MiCheckVerifierFunctionsCfgState @ 0x14087BAA8 (MiCheckVerifierFunctionsCfgState.c)
 *     MmHasImageBeenImportOptimized @ 0x140AC7E30 (MmHasImageBeenImportOptimized.c)
 *     MiInitializeDriverPatchState @ 0x140B3E6F8 (MiInitializeDriverPatchState.c)
 *     MiEnumerateBasePatches @ 0x140C016F8 (MiEnumerateBasePatches.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReapplyImportOptimizationForDriverVerifier(__int64 a1, int *a2, unsigned int a3)
{
  __int64 v4; // r14
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r12
  char *MappedSystemVa; // r13
  char *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // r14d
  unsigned __int16 **v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rbx
  _OWORD *PoolMm; // rax
  unsigned __int16 *v23; // rdx
  unsigned int v24; // r14d
  unsigned int v25; // ebx
  void *v26; // rcx
  __int64 v27; // r8
  __int64 *v28; // rsi
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int8 CurrentIrql; // di
  PVOID v33; // rcx
  __int64 v34; // rax
  ULONG Context; // [rsp+30h] [rbp-A9h] BYREF
  ULONG Context_4; // [rsp+34h] [rbp-A5h]
  int v38; // [rsp+38h] [rbp-A1h]
  __int64 v39; // [rsp+40h] [rbp-99h]
  PMDL MemoryDescriptorList; // [rsp+48h] [rbp-91h] BYREF
  PVOID P; // [rsp+50h] [rbp-89h]
  int *v42; // [rsp+58h] [rbp-81h]
  int v43; // [rsp+60h] [rbp-79h]
  PVOID v44[2]; // [rsp+68h] [rbp-71h] BYREF
  int v45; // [rsp+78h] [rbp-61h]
  __int64 v46; // [rsp+80h] [rbp-59h]
  _BYTE v47[160]; // [rsp+90h] [rbp-49h] BYREF
  int v48; // [rsp+140h] [rbp+67h]
  __int64 v50; // [rsp+158h] [rbp+7Fh] BYREF

  v4 = a3;
  memset_0(v47, 0, 0x68uLL);
  v48 = 0;
  memset_0(&Context, 0, 0x50uLL);
  v44[1] = v44;
  v44[0] = v44;
  MiInitializeDriverPatchState(a1, v47);
  v39 = a1;
  if ( (unsigned int)MmHasImageBeenImportOptimized(a1) )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
      goto LABEL_4;
    if ( *(_QWORD *)(a1 + 256) != a1 + 256 )
    {
      MiEnumerateBasePatches(v6, MiLockPatchIatForDV, &Context);
      v7 = v45;
      if ( v45 < 0 )
        goto LABEL_58;
    }
    v8 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), 1, 0xCu, &v50);
    v9 = *(_QWORD *)(a1 + 112);
    v10 = 0LL;
    v46 = v8;
    if ( v9 )
    {
      v11 = *(_QWORD *)((*(_QWORD *)(MiSectionControlArea(v9) + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
      if ( v11 )
        v10 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 280);
    }
    v12 = *(_DWORD *)(a1 + 64) >> 12;
    if ( v10 )
    {
      v7 = MiLockAndMapEntireDriver(a1, v47, &MemoryDescriptorList);
      if ( v7 >= 0 )
      {
        if ( (MemoryDescriptorList->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)MemoryDescriptorList->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 1u, 0x20u);
        v14 = &MappedSystemVa[v46 - *(_QWORD *)(a1 + 48)];
        if ( (MiFlags & 0x20000) != 0 )
        {
          v7 = MiCheckVerifierFunctionsCfgState(a2, (unsigned int)v4);
          if ( v7 >= 0 )
          {
            v7 = VslReapplyImportOptimizationForDriverVerifier(a1, a2, (unsigned int)v4);
            if ( v7 >= 0 )
            {
              if ( (_DWORD)v4 )
              {
                v15 = v4;
                do
                {
                  v16 = *a2;
                  v17 = *((_QWORD *)a2 + 1);
                  a2 += 6;
                  *(_QWORD *)&v14[8 * v16] = v17;
                  --v15;
                }
                while ( v15 );
              }
            }
          }
        }
        else
        {
          v38 = 8 * v12 + 64;
          if ( (_DWORD)v12 )
          {
            v18 = 0;
            v19 = (unsigned __int16 **)(v10 + 64);
            v20 = (unsigned int)v12;
            do
            {
              if ( *v19 )
                v18 += ((*v19)[1] >> 1) + ((*v19)[2] >> 1) + (**v19 >> 2);
              ++v19;
              --v20;
            }
            while ( v20 );
            v48 = v18;
            LODWORD(v4) = a3;
          }
          v21 = 64LL;
          v50 = 64LL;
          PoolMm = (_OWORD *)ExAllocatePoolMm(
                               64LL,
                               (unsigned int)(8 * v12 + 64 + 4 * (v12 + v48 + 2 * v12)),
                               1719037261,
                               KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
          P = PoolMm;
          if ( PoolMm )
          {
            *PoolMm = *(_OWORD *)v10;
            PoolMm[1] = *(_OWORD *)(v10 + 16);
            PoolMm[2] = *(_OWORD *)(v10 + 32);
            *((_QWORD *)PoolMm + 6) = *(_QWORD *)(v10 + 48);
            *((_QWORD *)P + 7) = (char *)P + (unsigned int)(8 * v12 + 64);
            if ( (_DWORD)v12 )
            {
              v24 = 0;
              do
              {
                v23 = *(unsigned __int16 **)(v10 + v21);
                if ( v23 )
                {
                  v25 = v23[1] + 12 + v23[2] + *v23;
                  v26 = (void *)(*((_QWORD *)P + 7) + v24);
                  *(_QWORD *)((char *)P + v50) = v26;
                  memmove(v26, v23, v25);
                  v24 += v25;
                  v21 = v50;
                }
                v21 += 8LL;
                v50 = v21;
                --v12;
              }
              while ( v12 );
              LODWORD(v4) = a3;
            }
            *((_DWORD *)P + 1) = v46 - *(_DWORD *)(a1 + 48);
            *((_QWORD *)P + 3) = v14;
            *((_QWORD *)P + 2) = 0LL;
            *((_QWORD *)P + 4) = *(_QWORD *)(a1 + 48);
            if ( (KiSpeculationFeatures & 0x20000000000LL) != 0 )
              *((_QWORD *)P + 5) = MiIsTargetFullyRetpolined;
            v42 = a2;
            v43 = 24 * v4;
            v27 = *(_QWORD *)(v10 + 16);
            if ( (_DWORD)v4 )
            {
              v28 = (__int64 *)(a2 + 2);
              v29 = (unsigned int)v4;
              do
              {
                if ( v27 )
                {
                  v30 = *v28;
                  v23 = *(unsigned __int16 **)(a1 + 48);
                  if ( *v28 <= (unsigned __int64)v23 )
                    v31 = (unsigned __int64)v23 + *(unsigned int *)(a1 + 64) - v30;
                  else
                    v31 = v30 - (_QWORD)v23;
                  if ( v31 > 0x80000000 )
                    LODWORD(v31) = 0;
                  *(_DWORD *)(v27 + 4LL * *((int *)v28 - 2)) = v31;
                  if ( (KiSpeculationFeatures & 0x20000000000LL) != 0
                    && !_bittest64(
                          *(const signed __int64 **)&stru_140E2D150.WaitBlockFill11[112],
                          (unsigned __int64)(*v28 + 0x800000000000LL) >> 16) )
                  {
                    *(_DWORD *)(v27 + 4LL * *((int *)v28 - 2)) = 0;
                  }
                }
                v28 += 3;
                --v29;
              }
              while ( v29 );
            }
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 12 )
              __writecr8(0xCuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v23) = 12;
              KiRaiseIrqlProcessIrqlFlags(CurrentIrql, (int)v23);
            }
            Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
            Context = Context_4;
            v7 = KeIpiGenericCall(MiReapplyImportOptimizationIsr, (ULONG_PTR)&Context);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            RtlDeleteBarrier(&Context);
          }
          else
          {
            v7 = -1073741670;
          }
        }
      }
    }
    else
    {
LABEL_4:
      v7 = -1073741637;
    }
  }
  else
  {
    v7 = -1073741436;
  }
LABEL_58:
  MiUnlockEntireDriver(v47, MemoryDescriptorList);
  while ( 1 )
  {
    v33 = v44[0];
    if ( v44[0] == v44 )
      break;
    v34 = *(_QWORD *)v44[0];
    if ( *((PVOID **)v44[0] + 1) != v44 || *(PVOID *)(v34 + 8) != v44[0] )
      __fastfail(3u);
    v44[0] = *(PVOID *)v44[0];
    *(_QWORD *)(v34 + 8) = v44;
    MiUnlockAndFreeDvPatchImage(v33);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v7;
}
