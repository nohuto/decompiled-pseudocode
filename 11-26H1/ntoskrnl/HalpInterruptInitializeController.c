/*
 * XREFs of HalpInterruptInitializeController @ 0x140592950
 * Callers:
 *     HalpInterruptResetThisProcessor @ 0x14057F100 (HalpInterruptResetThisProcessor.c)
 *     HalpInterruptPowerChange @ 0x14059379C (HalpInterruptPowerChange.c)
 *     HalpInterruptSelectController @ 0x1405938A8 (HalpInterruptSelectController.c)
 *     HalpInterruptReinitialize @ 0x140BF0368 (HalpInterruptReinitialize.c)
 *     HalpInitializeInterrupts @ 0x140CB3DD8 (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptInitializeController(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  int v4; // ecx
  int v5; // ecx
  int v6; // r8d
  int v7; // eax
  unsigned int v8; // eax

  if ( (*(_DWORD *)(BugCheckParameter3 + 248) & 1) != 0 )
    return 0LL;
  v4 = *(_DWORD *)(BugCheckParameter3 + 244);
  if ( (v4 & 1) == 0 )
    goto LABEL_14;
  if ( !HalpInterruptMaxClusterSize || (unsigned int)HalpInterruptMaxClusterSize > *(_DWORD *)(BugCheckParameter3 + 304) )
    HalpInterruptMaxClusterSize = *(_DWORD *)(BugCheckParameter3 + 304);
  if ( !(_DWORD)HalpInterruptMaxCluster || (unsigned int)HalpInterruptMaxCluster > *(_DWORD *)(BugCheckParameter3 + 308) )
    LODWORD(HalpInterruptMaxCluster) = *(_DWORD *)(BugCheckParameter3 + 308);
  v5 = v4 & 0x400;
  if ( !HalpInterruptDirectedEoiModeDetermined )
    goto LABEL_13;
  if ( !v5 )
  {
    if ( !HalpInterruptDirectedEoiModeEnabled )
      goto LABEL_13;
LABEL_17:
    HalpInterruptSetProblemEx(
      BugCheckParameter3,
      25,
      -1073741811,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
      0x1E2u);
    goto LABEL_20;
  }
  if ( !HalpInterruptDirectedEoiModeEnabled )
    goto LABEL_17;
LABEL_13:
  v6 = HalpInterruptInitializeLocalUnit(BugCheckParameter3);
  if ( v6 >= 0 )
  {
LABEL_14:
    if ( HalpPrebootMode )
    {
      v6 = 0;
    }
    else
    {
      v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(BugCheckParameter3 + 16), a2);
      if ( v6 < 0 )
        HalpInterruptSetProblemEx(
          BugCheckParameter3,
          5,
          v6,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c",
          0x232u);
    }
  }
LABEL_20:
  v7 = *(_DWORD *)(BugCheckParameter3 + 248);
  if ( v6 < 0 )
    v8 = v7 & 0xFFFFFFFC | 2;
  else
    v8 = v7 & 0xFFFFFFFC | 1;
  *(_DWORD *)(BugCheckParameter3 + 248) = v8;
  return (unsigned int)v6;
}
