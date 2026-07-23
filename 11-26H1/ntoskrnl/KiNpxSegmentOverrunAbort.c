/*
 * XREFs of KiNpxSegmentOverrunAbort @ 0x14073A980
 * Callers:
 *     KiNpxSegmentOverrunAbortShadow @ 0x140C5F5C0 (KiNpxSegmentOverrunAbortShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiNpxSegmentOverrunAbort @ 0x14073A980 (KiNpxSegmentOverrunAbort.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiNpxSegmentOverrunAbort(__int64 a1, __int64 _RDX)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r8
  char v8; // [rsp+170h] [rbp+F0h]
  _BYTE v9[3]; // [rsp+178h] [rbp+F8h]

  if ( (v8 & 1) != 0 )
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
      JUMPOUT(0x14073ABE5LL);
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
      v5 = __readmsr(0x6A7u);
      _RDX = HIDWORD(v5);
      if ( HIDWORD(v5) )
      {
        a1 = HIDWORD(v5);
        _RDX = (unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v5);
        if ( (_DWORD)_RDX != HIDWORD(v5) )
        {
          a1 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__(_RDX, v5));
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
  if ( (v8 & 1) != 0 && (KeGetCurrentThread()->Header.Reserved1 & 0x80u) != 0 )
    KiSynchronizeUserIsolationDomainExit(a1, _RDX);
  if ( (KiTrapFeatures & 8) != 0 && ((v8 & 1) != 0 || (KiTrapFeatures & 2) != 0 && (*(_DWORD *)v9 & 0x40000) != 0) )
    __asm { stac }
  if ( (*(_WORD *)v9 & 0x200) != 0 )
    _enable();
  v6 = __readcr4();
  v7 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v7, v6);
}
