/*
 * XREFs of HalpInterruptResetThisProcessor @ 0x14057F100
 * Callers:
 *     HalpInterruptRebootService @ 0x140596BB0 (HalpInterruptRebootService.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     HalpPowerWriteResetCommand @ 0x140581D44 (HalpPowerWriteResetCommand.c)
 *     HalpInterruptInitializeController @ 0x140592950 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x140592A68 (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __noreturn HalpInterruptResetThisProcessor()
{
  unsigned int Number; // esi
  __int64 v1; // rdx
  __int64 v2; // rcx
  ULONG_PTR *v3; // rdi
  ULONG_PTR v4; // rbx
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax

  Number = KeGetPcr()->Prcb.Number;
  HalpDisableInterrupts();
  HalpInterruptInitializeLocalUnit(HalpInterruptController);
  HalpInterruptSetProblemEx(0LL, 12, 0, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\start.c", 0x3EDu);
  if ( !Number )
  {
    _InterlockedDecrement(&HalpInterruptProcessorsStarted);
    while ( _InterlockedExchangeAdd(&HalpInterruptProcessorsStarted, 0) )
      _mm_pause();
    KeStallExecutionProcessor(0x64u);
    v3 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    while ( v3 != &HalpRegisteredInterruptControllers )
    {
      v4 = (ULONG_PTR)v3;
      v3 = (ULONG_PTR *)*v3;
      v5 = *(_DWORD *)(v4 + 248);
      if ( (v5 & 1) != 0 )
      {
        *(_DWORD *)(v4 + 248) = v5 & 0xFFFFFFFE;
        HalpInterruptInitializeController(v4);
        if ( *(_QWORD *)(v4 + 176) && (v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 16), v6), v7 < 0) )
          HalpInterruptSetProblemEx(v4, 35, v7, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xC1Cu);
        else
          *(_DWORD *)(v4 + 248) &= ~1u;
      }
    }
    KeStallExecutionProcessor(0x64u);
  }
  guard_dispatch_icall_no_overrides(v2, v1);
  v9 = HalpInterruptController;
  if ( *(_QWORD *)(HalpInterruptController + 168) )
  {
    v10 = guard_dispatch_icall_no_overrides(*(_QWORD *)(HalpInterruptController + 16), v8);
    if ( v10 < 0 )
      HalpInterruptSetProblemEx(v9, 34, v10, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xC4Du);
  }
  HalpPowerWriteResetCommand(Number, (unsigned __int64)&HalpInterruptProcessorsStarted & -(__int64)(Number != 0));
  JUMPOUT(0x14057F258LL);
}
