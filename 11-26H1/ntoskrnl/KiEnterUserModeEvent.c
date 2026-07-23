/*
 * XREFs of KiEnterUserModeEvent @ 0x140C63000
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 */

__int64 __fastcall KiEnterUserModeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v7; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax

  _mm_getcsr();
  if ( KeGetPcr()->Prcb.KernelShadowStackInitial )
  {
    __asm
    {
      rstorssp qword ptr [rcx]
      saveprevssp
    }
  }
  CurrentThread = KeGetCurrentThread();
  v7 = *(_QWORD *)&CurrentThread->Process[4].ProcessLock;
  __writegsqword(0x890u, v7);
  BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
  if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
  {
    __writegsword(0x8A6u, BpbKernelSpecCtrl);
    v7 = 72LL;
    __writemsr(0x48u, BpbKernelSpecCtrl);
  }
  _mm_lfence();
  if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
    KiSaveDebugRegisterState(v7);
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  return KiDispatchUserModeEvent(v7);
}
