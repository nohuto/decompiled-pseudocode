/*
 * XREFs of MiRelocateImagePfn @ 0x14099FA2C
 * Callers:
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 *     MiWalkImageApplyRelocationToPage @ 0x14099F950 (MiWalkImageApplyRelocationToPage.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiFlushSingleTbEntry @ 0x1402845B0 (MiFlushSingleTbEntry.c)
 *     MiMakeValidPte @ 0x1402BBDE0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 *     MiPerformFixups @ 0x14099FD30 (MiPerformFixups.c)
 *     RtlDoesRequireFunctionOverrideFixups @ 0x1409A0274 (RtlDoesRequireFunctionOverrideFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(
        ULONG_PTR a1,
        ULONG_PTR a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v8; // r12d
  __int64 *v10; // r14
  __int64 v11; // rdi
  unsigned int v13; // ebx
  struct _KTHREAD *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONG_PTR v17; // r13
  unsigned __int64 v18; // rbx
  int ProtectionPfnCompatible; // eax
  struct _KTHREAD *CurrentThread; // rdi
  volatile signed __int64 *v21; // rsi
  char DoesRequireFunctionOverrideFixups; // al
  void *v23; // rdx
  LegacyAutoBoost *v24; // r15
  __int64 v25; // rdx
  bool v26; // zf

  v8 = a3;
  v10 = *(__int64 **)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  v11 = *v10;
  if ( (a7 & 1) != 0 && (unsigned int)a3 < *((_DWORD *)v10 + 14) )
  {
    v13 = a3;
    v14 = 0LL;
    while ( v13 == v8 )
    {
      if ( *(struct _KTHREAD **)(v11 + 8LL * v13) != v14
        || (v15 = v10[11]) != 0 && *(struct _KTHREAD **)(v15 + 8LL * v13 + 64) != v14
        || (v16 = v10[12]) != 0
        && (DoesRequireFunctionOverrideFixups = RtlDoesRequireFunctionOverrideFixups(v16, v13),
            v14 = 0LL,
            DoesRequireFunctionOverrideFixups)
        || (a7 & 2) != 0 && (unsigned int)HalSystemVectorDispatchEntry() )
      {
        if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v18 = (unsigned __int64)v14;
          v17 = (ULONG_PTR)v14;
        }
        else
        {
          v17 = a2;
          v18 = MiReservePtes((__int64)&stru_140E366D8.WaitBlockList, 1u, a3, a4);
          if ( !v18 )
          {
            if ( !a2 )
              return 3221225626LL;
            v18 = a2;
          }
          a2 = (__int64)(v18 << 25) >> 16;
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a4 - 0x220000000000LL);
          *(_QWORD *)v18 = MiMakeValidPte(v18, a4, ProtectionPfnCompatible | 0xA0000000);
          v14 = 0LL;
        }
        CurrentThread = KeGetCurrentThread();
        v21 = v10 + 3;
        if ( (struct _KTHREAD *)v10[1] == CurrentThread )
        {
          CurrentThread = v14;
        }
        else
        {
          --CurrentThread->SpecialApcDisable;
          v24 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v10 + 3), 0LL, 0LL, (struct _KLOCK_ENTRIES *)a4);
          if ( _InterlockedCompareExchange64(v21, 17LL, 0LL) )
            ExfAcquirePushLockSharedEx(v10 + 3, 0, v24, (struct _KTHREAD *)(v10 + 3));
          if ( v24 )
          {
            if ( (KiAbpGlobalState & 1) != 0 )
              AutoBoost::KiAbpPostAcquire(v24, v23);
            else
              *((_BYTE *)v24 + 10) = 1;
          }
        }
        MiPerformFixups(a2, a1, v10[5] & -(__int64)((a7 & 4) != 0), a7);
        if ( CurrentThread )
        {
          if ( _InterlockedCompareExchange64(v21, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)v21);
          KeAbPostRelease((unsigned __int64)v21);
          v26 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v26
            && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(1LL, v25);
          }
        }
        if ( v18 )
        {
          if ( v18 == v17 )
          {
            *(_QWORD *)v18 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
            MiFlushSingleTbEntry(a2, 2LL);
          }
          else
          {
            MiReleasePtes((__int64)&stru_140E366D8.WaitBlockList, (unsigned __int64 *)v18, 1u);
          }
        }
        return 0LL;
      }
      ++v13;
    }
  }
  return 1LL;
}
