/*
 * XREFs of KiDoubleFaultAbort @ 0x14073A600
 * Callers:
 *     KiDoubleFaultAbortShadow @ 0x140C5F540 (KiDoubleFaultAbortShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14043EB60 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KiDoubleFaultAbort @ 0x14073A600 (KiDoubleFaultAbort.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140741B80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiDoubleFaultAbort(__int64 a1, __int64 _RDX, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int128 v11; // xmm4
  __int128 v12; // xmm5
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int64 v16; // rax
  bool v17; // zf
  _BYTE v18[44]; // [rsp+0h] [rbp-80h] BYREF
  int v19; // [rsp+2Ch] [rbp-54h]
  __int64 v20; // [rsp+30h] [rbp-50h]
  __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int128 v27; // [rsp+70h] [rbp-10h]
  __int128 v28; // [rsp+80h] [rbp+0h]
  __int128 v29; // [rsp+90h] [rbp+10h]
  __int128 v30; // [rsp+A0h] [rbp+20h]
  __int128 v31; // [rsp+B0h] [rbp+30h]
  __int128 v32; // [rsp+C0h] [rbp+40h]
  __int64 v33; // [rsp+D8h] [rbp+58h]
  __int16 v34; // [rsp+100h] [rbp+80h]
  char v35; // [rsp+170h] [rbp+F0h]
  _BYTE v36[3]; // [rsp+178h] [rbp+F8h]
  __int64 v37; // [rsp+180h] [rbp+100h]

  v20 = v4;
  v21 = a1;
  v22 = _RDX;
  v23 = a3;
  v24 = a4;
  v25 = v5;
  v26 = v6;
  if ( (v35 & 1) != 0 )
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
      JUMPOUT(0x14073A861LL);
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
      v16 = __readmsr(0x6A7u);
      _RDX = HIDWORD(v16);
      if ( HIDWORD(v16) )
      {
        a1 = HIDWORD(v16);
        _RDX = (unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v16);
        if ( (_DWORD)_RDX != HIDWORD(v16) )
        {
          a1 = 1703LL;
          __writemsr(0x6A7u, __PAIR64__(_RDX, v16));
        }
      }
    }
    v17 = (CurrentThread->Header.Reserved1 & 3) == 0;
    v34 = 0;
    if ( !v17 )
      *(double *)&v7 = KiSaveDebugRegisterState(a1);
  }
  else
  {
    __asm { rdsspq  rdx }
    v33 = _RDX;
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
  v19 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v27 = v7;
  v28 = v8;
  v29 = v9;
  v30 = v10;
  v31 = v11;
  v32 = v12;
  if ( (v35 & 1) != 0 && (KeGetCurrentThread()->Header.Reserved1 & 0x80u) != 0 )
    KiSynchronizeUserIsolationDomainExit(a1, _RDX);
  v18[43] = 1;
  if ( (KiTrapFeatures & 8) != 0 && ((v35 & 1) != 0 || (KiTrapFeatures & 2) != 0 && (*(_DWORD *)v36 & 0x40000) != 0) )
    __asm { stac }
  KiBugCheckDispatch(127LL, 8LL, v18, v37);
}
