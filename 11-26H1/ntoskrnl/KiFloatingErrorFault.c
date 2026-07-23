/*
 * XREFs of KiFloatingErrorFault @ 0x14073C500
 * Callers:
 *     KiFloatingErrorFaultShadow @ 0x140C5F8C0 (KiFloatingErrorFaultShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiFloatingErrorFault @ 0x14073C500 (KiFloatingErrorFault.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiFloatingErrorFault(__int64 a1, __int64 _RDX)
{
  char v2; // fps
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int64 v9; // rax
  char v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  char v14; // [rsp+160h] [rbp+E0h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v16; // [rsp+170h] [rbp+F0h]
  _BYTE v17[3]; // [rsp+178h] [rbp+F8h]

  if ( (v16 & 1) != 0 )
  {
    if ( (KiTrapFeatures & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    if ( KeGetPcr()->Prcb.KernelShadowStackInitial )
    {
      __asm { rdsspq  rdx }
      if ( _RDX == KeGetPcr()->Prcb.TransitionShadowStack + 8 )
      {
        __asm
        {
          rstorssp qword ptr [rcx]
          saveprevssp
        }
      }
    }
    CurrentThread = KeGetCurrentThread();
    a1 = *(_QWORD *)&CurrentThread->Process[4].ProcessLock;
    __writegsqword(0x890u, a1);
    LOWORD(a1) = KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl;
    __writegsword(0x8A4u, a1);
    LOBYTE(a1) = KeGetPcr()->Prcb.PrcbPad12a[1];
    __writegsbyte(0x89Au, a1);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x8A6u, BpbKernelSpecCtrl);
      a1 = 72LL;
      HIDWORD(_RDX) = 0;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    LODWORD(_RDX) = LOBYTE(KeGetPcr()->Prcb.PrcbPad12a[1]);
    if ( (_RDX & 8) != 0 )
    {
      a1 = 73LL;
      __writemsr(0x49u, 1uLL);
      _RDX = LOBYTE(KeGetPcr()->Prcb.PrcbPad12a[1]);
      LODWORD(_RDX) = (unsigned __int8)_RDX;
    }
    if ( (_RDX & 2) != 0 )
      JUMPOUT(0x14073C765LL);
    if ( (_RDX & 0x80) != 0 )
    {
      _mm_lfence();
      KiFlushBhbDuringTrapEntryOrExit(a1);
    }
    _mm_lfence();
    __writegsbyte(0x89Eu, 0);
    if ( KiUserCetPl3SspCanonicalizeUpperMask )
    {
      a1 = 1703LL;
      v9 = __readmsr(0x6A7u);
      _RDX = HIDWORD(v9);
      if ( HIDWORD(v9) )
      {
        a1 = HIDWORD(v9);
        _RDX = (unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v9);
        if ( (_DWORD)_RDX != HIDWORD(v9) )
        {
          a1 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__(_RDX, v9));
        }
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(a1);
  }
  else
  {
    __asm { rdsspq  rdx }
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.PrcbPad12a[1] & 1) != 0 )
    {
      a1 = 72LL;
      _RDX = 0LL;
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    }
    else
    {
      _mm_lfence();
    }
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v16 & 1) != 0 && (KeGetCurrentThread()->Header.Reserved1 & 0x80u) != 0 )
    KiSynchronizeUserIsolationDomainExit(a1, _RDX);
  if ( (KiTrapFeatures & 8) != 0 && ((v16 & 1) != 0 || (KiTrapFeatures & 2) != 0 && (*(_DWORD *)v17 & 0x40000) != 0) )
    __asm { stac }
  if ( (*(_WORD *)v17 & 0x200) != 0 )
    _enable();
  if ( (v16 & 1) != 0 )
  {
    v10 = ~(v14 & 0x3F) & v2;
    v11 = 3221225616LL;
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
        v11 = 3221225618LL;
LABEL_42:
      KiExceptionDispatch(v11, 1LL, retaddr, 0LL);
      goto LABEL_43;
    }
    v11 = 3221225614LL;
    if ( (v10 & 4) != 0 )
      goto LABEL_42;
    v11 = 3221225616LL;
    if ( (v10 & 2) != 0 )
      goto LABEL_42;
    v11 = 3221225617LL;
    if ( (v10 & 8) != 0 )
      goto LABEL_42;
    v11 = 3221225619LL;
    if ( (v10 & 0x10) != 0 )
      goto LABEL_42;
    v11 = 3221225615LL;
    if ( (v10 & 0x20) != 0 )
      goto LABEL_42;
  }
LABEL_43:
  v12 = __readcr4();
  v13 = __readcr0();
  KiBugCheckDispatch(127LL, 16LL, v13, v12);
}
