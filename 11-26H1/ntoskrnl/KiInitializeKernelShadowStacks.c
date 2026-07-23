/*
 * XREFs of KiInitializeKernelShadowStacks @ 0x140BFCB00
 * Callers:
 *     KiSystemStartup @ 0x140BEF640 (KiSystemStartup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInitializeKernelShadowStacks(__int64 a1)
{
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int Number; // r9d
  unsigned __int64 v3; // rax
  __int64 result; // rax
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  if ( !Number && (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x4000) != 0 )
  {
    v3 = __readcr4();
    if ( (v3 & 0x800000) != 0 )
    {
      LOBYTE(KiKernelCetEnabled) = 1;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x40000) == 0 )
        goto LABEL_8;
      LOBYTE(KeKernelCetWrssEnabledScenarios) = KeKernelCetWrssEnabledScenarios | 1;
      LOBYTE(KiKernelCetAuditModeEnabled) = 1;
    }
  }
  if ( !(_BYTE)KiKernelCetEnabled )
    return 0LL;
LABEL_8:
  CurrentPrcb->FeatureBits |= 0x400000000000uLL;
  v5 = *(_QWORD **)(a1 + 240);
  v6 = v5[465];
  v7 = (unsigned __int64 *)v5[466];
  result = v5[464];
  if ( !Number )
    v6 -= 8LL;
  CurrentPrcb->TransitionShadowStack = v6;
  CurrentPrcb->IstShadowStacksTable = v7;
  return result;
}
