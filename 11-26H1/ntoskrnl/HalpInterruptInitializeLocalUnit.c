/*
 * XREFs of HalpInterruptInitializeLocalUnit @ 0x140592A68
 * Callers:
 *     HalpInterruptReinitializeThisProcessor @ 0x14050CBD4 (HalpInterruptReinitializeThisProcessor.c)
 *     HalpInterruptResetThisProcessor @ 0x14057F100 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptInitializeController @ 0x140592950 (HalpInterruptInitializeController.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptRestoreController @ 0x1404D792C (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInterruptMarkProcessorStarted @ 0x14057EE64 (HalpInterruptMarkProcessorStarted.c)
 *     HalpInitializeCmciVector @ 0x140592534 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x1405925F0 (HalpInitializeDeferredErrorVector.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeLocalUnit(ULONG_PTR BugCheckParameter3)
{
  __int64 v1; // r15
  bool v3; // r12
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  _DWORD *v8; // rdx
  int v9; // eax
  char v10; // bl
  int v11; // eax
  int v12; // edx
  unsigned int v13; // ecx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // r8d
  ULONG_PTR v18; // r8
  int v19; // eax
  int v20; // eax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-40h]
  __int128 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+50h] [rbp-10h]
  int v24; // [rsp+80h] [rbp+20h] BYREF

  v24 = 0;
  LODWORD(v23) = 0;
  v22 = 0LL;
  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = HalpDisableInterrupts();
  v4 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), (unsigned int)v1);
  v5 = v4;
  if ( v4 < 0 )
  {
    BugCheckParameter4 = 628;
    v6 = 4;
LABEL_3:
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      v6,
      v4,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      BugCheckParameter4);
    goto LABEL_4;
  }
  *(_DWORD *)(HalpInterruptLocalIds + 4 * v1) = v24;
  HalpInterruptMarkProcessorStarted(v24);
  v8 = (_DWORD *)(HalpInterruptTargets + 24 * v1);
  if ( !*v8 )
  {
    if ( !HalpInterruptPhysicalModeOnly )
    {
      if ( !HalpInterruptClusterModeForced
        && HalpInterruptClusterModeEnabled == HalpInterruptPhysicalModeOnly
        && (!HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptProcessorCount <= HalpInterruptLogicalFlatLimit) )
      {
        LODWORD(v22) = 5;
        v9 = 1 << v1;
        goto LABEL_18;
      }
      if ( HalpInterruptNextCluster < (unsigned int)HalpInterruptMaxCluster
        && (*(_DWORD *)(BugCheckParameter3 + 244) & 8) != 0 )
      {
        v10 = 1;
        DWORD2(v22) = HalpInterruptNextCluster;
        HIDWORD(v22) = 1 << HalpInterruptNextClusterIndex;
        LODWORD(v22) = 6;
        goto LABEL_19;
      }
    }
    v9 = v24;
    LODWORD(v22) = 4;
LABEL_18:
    v10 = 0;
    DWORD2(v22) = v9;
    if ( HalpInterruptPhysicalModeOnly )
      goto LABEL_36;
LABEL_19:
    if ( *(_QWORD *)(BugCheckParameter3 + 80) )
    {
      v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), &v22);
      v12 = v22;
    }
    else
    {
      if ( !*(_QWORD *)(BugCheckParameter3 + 144) )
        goto LABEL_36;
      v10 = 0;
      v11 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), &v24);
      v12 = v22;
      if ( (_DWORD)v22 == 6 )
      {
        v13 = DWORD2(v22);
        if ( DWORD2(v22) >= (unsigned int)HalpInterruptMaxCluster )
        {
          DWORD2(v22) = v24;
          LODWORD(v22) = 4;
          goto LABEL_36;
        }
        goto LABEL_22;
      }
    }
    v13 = DWORD2(v22);
LABEL_22:
    if ( v11 >= 0 )
    {
      HalpInterruptLogicalMode = 1;
      if ( v12 == 6 )
      {
        HalpInterruptClusterModeEnabled = 1;
        if ( v13 > HalpInterruptNextCluster )
          HalpInterruptNextCluster = v13;
      }
      if ( v10 )
      {
        if ( ++HalpInterruptNextClusterIndex >= (unsigned int)HalpInterruptMaxClusterSize )
        {
          ++HalpInterruptNextCluster;
          HalpInterruptNextClusterIndex = 0;
        }
      }
      v14 = HalpInterruptTargets;
      *(_OWORD *)(HalpInterruptTargets + 24 * v1) = v22;
      *(_QWORD *)(v14 + 24 * v1 + 16) = v23;
      if ( (_DWORD)v22 != 4 )
        goto LABEL_30;
LABEL_37:
      KeAddProcessorAffinityEx((unsigned __int16 *)&HalpInterruptPhysicalTargets, v1);
      goto LABEL_30;
    }
LABEL_36:
    v16 = HalpInterruptTargets;
    *(_DWORD *)(HalpInterruptTargets + 24 * v1) = 4;
    *(_DWORD *)(v16 + 24 * v1 + 8) = v24;
    goto LABEL_37;
  }
  if ( !HalpInterruptPhysicalModeOnly )
  {
    if ( *(_QWORD *)(BugCheckParameter3 + 80) )
    {
      v17 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), v8);
      if ( v17 < 0 )
      {
        HalpInterruptSetProblemEx(
          BugCheckParameter3,
          6,
          v17,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
          0x344u);
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, BugCheckParameter3, v18);
      }
    }
  }
LABEL_30:
  v15 = HalpInitializeCmciVector(BugCheckParameter3);
  v5 = v15;
  if ( v15 >= 0 )
  {
    v4 = HalpInitializeDeferredErrorVector(BugCheckParameter3);
    v5 = v4;
    if ( v4 < 0 )
    {
      BugCheckParameter4 = 870;
      v6 = 38;
      goto LABEL_3;
    }
    if ( (*(_DWORD *)(BugCheckParameter3 + 244) & 2) != 0 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), 0LL);
    v19 = *(_DWORD *)(BugCheckParameter3 + 240);
    if ( (v19 == 3 || v19 == 4) && (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    {
      v20 = HalpInterruptRestoreController(BugCheckParameter3, 1);
      v5 = v20;
      if ( v20 < 0 )
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 4uLL, v20);
    }
  }
  else
  {
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      10,
      v15,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      0x359u);
  }
LABEL_4:
  if ( v3 )
    _enable();
  return v5;
}
