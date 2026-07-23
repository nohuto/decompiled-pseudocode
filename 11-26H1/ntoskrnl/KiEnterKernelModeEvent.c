/*
 * XREFs of KiEnterKernelModeEvent @ 0x140C63100
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 */

__int64 __fastcall KiEnterKernelModeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // r10

  _mm_getcsr();
  v6 = BYTE4(a5);
  v5 = 1LL << SBYTE4(a5);
  LOBYTE(v6) = BYTE6(a5) & 0xF;
  if ( (BYTE6(a5) & 0xF) == 7 )
    LODWORD(v5) = 0;
  CurrentThread = KeGetCurrentThread();
  if ( (v5 & 0x40004) != 0 && KeGetPcr()->Prcb.BpbNmiSpecCtrl )
  {
    __readmsr(0x48u);
    v6 = 72LL;
    __writemsr(0x48u, KeGetPcr()->Prcb.BpbNmiSpecCtrl);
  }
  else
  {
    _mm_lfence();
  }
  __asm { rdsspq  rdx }
  if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
    KiSaveDebugRegisterState(v6);
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  return KiDispatchKernelModeEvent(v6);
}
