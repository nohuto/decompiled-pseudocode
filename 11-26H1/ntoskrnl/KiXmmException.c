/*
 * XREFs of KiXmmException @ 0x14073DB40
 * Callers:
 *     KiXmmExceptionShadow @ 0x140C5FAC0 (KiXmmExceptionShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiXmmException @ 0x14073DB40 (KiXmmException.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140741140 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiXmmException(__int64 a1, __int64 _RDX)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int64 v5; // rax
  __int16 v6; // ax
  __int64 v7; // rdx
  void *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // r8
  unsigned __int16 v13; // [rsp+2Ch] [rbp-54h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  __int16 v15; // [rsp+170h] [rbp+F0h]
  _BYTE v16[3]; // [rsp+178h] [rbp+F8h]

  if ( (v15 & 1) != 0 )
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
      JUMPOUT(0x14073DDA5LL);
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
  v13 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (v15 & 1) != 0 && (KeGetCurrentThread()->Header.Reserved1 & 0x80u) != 0 )
    KiSynchronizeUserIsolationDomainExit(a1, _RDX);
  if ( (KiTrapFeatures & 8) != 0 && ((v15 & 1) != 0 || (KiTrapFeatures & 2) != 0 && (*(_DWORD *)v16 & 0x40000) != 0) )
    __asm { stac }
  if ( (*(_WORD *)v16 & 0x200) != 0 )
    _enable();
  v6 = ~((v13 >> 7) & 0x3F) & v13;
  v7 = 2LL;
  v8 = retaddr;
  v9 = 0LL;
  if ( v15 == 35 )
    goto LABEL_41;
  v10 = 3221225616LL;
  if ( (v6 & 1) != 0
    || (v10 = 3221225614LL, (v6 & 4) != 0)
    || (v10 = 3221225616LL, (v6 & 2) != 0)
    || (v10 = 3221225617LL, (v6 & 8) != 0)
    || (v10 = 3221225619LL, (v6 & 0x10) != 0)
    || (v10 = 3221225615LL, (v6 & 0x20) != 0) )
  {
    while ( 1 )
    {
      LOBYTE(v6) = KiExceptionDispatch(v10, v7, v8, v9);
LABEL_41:
      v10 = 3221226165LL;
      if ( (v6 & 1) == 0 && (v6 & 4) == 0 && (v6 & 2) == 0 )
      {
        v10 = 3221226164LL;
        if ( (v6 & 8) == 0 && (v6 & 0x10) == 0 && (v6 & 0x20) == 0 )
          break;
      }
    }
  }
  v11 = __readcr4();
  v12 = __readcr0();
  KiBugCheckDispatch(127LL, 9LL, v12, v11);
}
