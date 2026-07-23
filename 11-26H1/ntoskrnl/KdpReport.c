/*
 * XREFs of KdpReport @ 0x14050255C
 * Callers:
 *     KdpTrap @ 0x140C1DA90 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x14072BD10 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14072BDE0 (KiSaveProcessorControlState.c)
 *     KdExitDebugger @ 0x140C18008 (KdExitDebugger.c)
 *     KdpReportExceptionStateChange @ 0x140C1CF4C (KdpReportExceptionStateChange.c)
 *     KdEnterDebugger @ 0x140C1D858 (KdEnterDebugger.c)
 *     KdpCopyContext @ 0x140C1D9C0 (KdpCopyContext.c)
 */

char __fastcall KdpReport(__int64 a1, __int64 a2, int *a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // r10d
  char v9; // al
  struct _KPRCB *CurrentPrcb; // rbx
  char v11; // r15
  char v12; // al
  int v13; // esi
  char v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  char result; // al

  v6 = *a3;
  if ( *a3 == -2147483645
    || v6 == -1073740768
    || v6 == -2147483644
    || (unsigned int)(v6 - 1073741854) <= 1
    || (NtGlobalFlag & 1) != 0 )
  {
    if ( a6 || (unsigned int)v6 > 0x4000001D && v6 != -1073741769 && v6 < 1073741856 )
      goto LABEL_7;
    return 0;
  }
  if ( !a6 )
    return 0;
LABEL_7:
  v9 = KdEnterDebugger(a1, a2);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = v9;
  KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a4 + 48), a4);
  KiSaveProcessorControlState(&CurrentPrcb->ProcessorState);
  v12 = KdpReportExceptionStateChange(a3);
  v13 = *(_DWORD *)(a4 + 48);
  v14 = v12;
  KdpCopyContext(a4, v13 & CurrentPrcb->ContextFlagsInit, CurrentPrcb->Context);
  *(_DWORD *)(a4 + 48) = v13;
  if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 && (v13 & 0x100080) == 0x100080 )
  {
    v15 = *(int *)(a4 + 1256);
    v16 = *(_QWORD *)(a4 + 248);
    if ( *(_QWORD *)(v15 + a4 + 1240) != v16 )
    {
      *(_WORD *)(v15 + a4 + 1250) |= 1u;
      *(_QWORD *)(v15 + a4 + 1240) = v16;
    }
  }
  KiRestoreProcessorControlState(&CurrentPrcb->ProcessorState);
  LOBYTE(v17) = v11;
  KdExitDebugger(v17);
  result = v14;
  KdpControlCPressed = 0;
  return result;
}
