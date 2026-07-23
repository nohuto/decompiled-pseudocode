/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x140473DB0
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x1403F42E0 (KiUpdateStibpPairing.c)
 *     KiFlushCurrentRsb @ 0x140741D80 (KiFlushCurrentRsb.c)
 */

void __fastcall KePrepareToDispatchVirtualProcessor(
        _KPROCESS *Process,
        _BYTE *a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5,
        _QWORD *a6)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _BYTE *v7; // r10
  __int64 v8; // xmm0_8
  unsigned __int64 v9; // rdi
  __int16 v10; // cx
  unsigned __int16 BpbRetpolineExitSpecCtrl; // dx
  _KPRCB_BPB_STATE v12; // ax
  unsigned __int16 BpbKernelSpecCtrl; // cx

  CurrentPrcb = KeGetCurrentPrcb();
  v7 = a2;
  v8 = KiSpeculationFeatures;
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0LL;
  _disable();
  if ( !(_BYTE)Process )
    goto LABEL_2;
  if ( (v8 & 0x1000000000LL) == 0 )
  {
    *a3 = 1;
    return;
  }
  Process = CurrentPrcb->CurrentThread->Process;
  v9 = *(_QWORD *)&Process[4].ProcessLock;
  if ( v9 )
  {
    if ( (CurrentPrcb->BpbState.AllFlags & 8) != 0
      || (LOWORD(Process) = 4,
          (CurrentPrcb->BpbRetpolineState.AllFlags & ((CurrentPrcb->BpbState.AllFlags & 0x10) != 0)) != 0)
      || (v8 & 0x10) != 0 && (v8 & 0x1000) == 0 )
    {
LABEL_2:
      if ( (CurrentPrcb->PrcbPad12a[1] & 4) != 0 )
      {
        LODWORD(a2) = 0;
        LOWORD(Process) = 73;
        __writemsr(0x49u, 1uLL);
        CurrentPrcb->BpbState.AllFlags &= ~4u;
        *v7 = 1;
      }
      if ( (CurrentPrcb->PrcbPad12a[1] & 0x20) != 0 )
      {
        KiFlushCurrentRsb((_WORD)Process, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4);
        CurrentPrcb->BpbState.AllFlags &= ~4u;
      }
      return;
    }
    *a4 = 1;
  }
  else
  {
    *a3 = 1;
  }
  v10 = (__int16)CurrentPrcb;
  if ( (CurrentPrcb->PairRegister & 2) != 0 )
  {
    KiUpdateStibpPairing(0LL, (int)a2, (int)a3);
  }
  else
  {
    if ( (CurrentPrcb->PrcbPad12a[1] & 4) != 0 )
    {
      LODWORD(a2) = 0;
      v10 = 73;
      __writemsr(0x49u, 1uLL);
      CurrentPrcb->BpbState.AllFlags &= ~4u;
      *v7 = 1;
    }
    if ( (CurrentPrcb->PrcbPad12a[1] & 0x20) != 0 )
    {
      KiFlushCurrentRsb(v10, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4);
      CurrentPrcb->BpbState.AllFlags &= ~0x20u;
    }
    CurrentPrcb->TrappedSecurityDomain = v9;
  }
  BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
  v12.0 = ($D0BDAFF3B03FD62472FDEF8CE1200EC8)CurrentPrcb->BpbState;
  BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
  CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl;
  CurrentPrcb->BpbTrappedBpbState = v12;
  if ( (v8 & 0x20000000000LL) != 0 && (CurrentPrcb->BpbRetpolineState.AllFlags & 1) != 0 )
    BpbKernelSpecCtrl = BpbRetpolineExitSpecCtrl;
  if ( CurrentPrcb->BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
  {
    *a6 = BpbKernelSpecCtrl;
    *a5 = 1;
    CurrentPrcb->BpbCurrentSpecCtrl = BpbKernelSpecCtrl;
  }
}
