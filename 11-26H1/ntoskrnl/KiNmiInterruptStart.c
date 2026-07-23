/*
 * XREFs of KiNmiInterruptStart @ 0x1407386C0
 * Callers:
 *     KiNmiInterruptShadow @ 0x140C5F240 (KiNmiInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiMcheckFastForward @ 0x1405FFBC0 (KiMcheckFastForward.c)
 *     KiSetSpecCtrlNmi @ 0x14072E370 (KiSetSpecCtrlNmi.c)
 *     KxNmiInterrupt @ 0x140738B80 (KxNmiInterrupt.c)
 *     KiBugCheckDispatch @ 0x1407410C0 (KiBugCheckDispatch.c)
 */

unsigned __int8 __fastcall KiNmiInterruptStart(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r10
  __int64 v11; // r11
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  bool v17; // zf
  unsigned __int32 v18; // eax
  unsigned __int64 v19; // rdx
  int v20; // eax
  int v21; // r8d
  unsigned int v22; // eax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  __int128 v25; // xmm4
  __int128 v26; // xmm5
  __int64 v29; // rcx
  __int64 v30; // r10
  unsigned __int64 v31; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v33; // cf
  unsigned __int8 result; // al
  struct _KTHREAD *CurrentThread; // rcx
  int v39; // r9d
  int v40; // r8d
  int v41; // edx
  int v42; // ecx
  ULONG_PTR BugCheckParameter4[5]; // [rsp+0h] [rbp-80h] BYREF
  unsigned __int8 v44; // [rsp+28h] [rbp-58h]
  unsigned __int8 v45; // [rsp+29h] [rbp-57h]
  char v46; // [rsp+2Bh] [rbp-55h]
  unsigned int v47; // [rsp+2Ch] [rbp-54h]
  __int64 v48; // [rsp+30h] [rbp-50h]
  __int64 v49; // [rsp+38h] [rbp-48h]
  __int64 v50; // [rsp+40h] [rbp-40h]
  __int64 v51; // [rsp+48h] [rbp-38h]
  __int64 v52; // [rsp+50h] [rbp-30h]
  __int64 v53; // [rsp+58h] [rbp-28h]
  __int64 v54; // [rsp+60h] [rbp-20h]
  unsigned __int64 v55; // [rsp+68h] [rbp-18h]
  _OWORD v56[6]; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v57; // [rsp+D0h] [rbp+50h]
  __int64 v58; // [rsp+D8h] [rbp+58h]
  __int16 v59; // [rsp+100h] [rbp+80h]
  unsigned int v60; // [rsp+140h] [rbp+C0h]
  __int64 v61; // [rsp+150h] [rbp+D0h]
  __int64 (__fastcall *retaddr)(); // [rsp+168h] [rbp+E8h]
  char v63; // [rsp+170h] [rbp+F0h]

  v61 = v9;
  v48 = v8;
  v49 = a1;
  v50 = a2;
  v51 = a3;
  v52 = a4;
  v53 = v10;
  v54 = v11;
  if ( (v63 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v58 = _RDX;
    v55 = __readmsr(0xC0000101);
    v18 = __segmentlimit(0x50u);
    if ( v17 )
    {
      v21 = (v18 & 0x3FF) << 6;
      v20 = v18 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v56);
        v19 = *(_QWORD *)(*(_QWORD *)((char *)v56 + 2) - 8000LL);
LABEL_8:
        v22 = v19;
        v23 = HIDWORD(v19);
        __writemsr(0xC0000101, __PAIR64__(v23, v22));
        v24 = __readcr2();
        v57 = v24;
        KiSetSpecCtrlNmi(3221225729LL, v23);
        goto LABEL_20;
      }
      __asm { rdtscp }
      v20 = 1;
      v21 = 805306432;
    }
    v19 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                           + (v21 | (unsigned int)v20))]
        - 384;
    goto LABEL_8;
  }
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
  ((void (*)(void))KiSetSpecCtrlNmi)();
  if ( KiUserCetPl3SspCanonicalizeUpperMask )
  {
    v29 = 1703LL;
    v31 = __readmsr(0x6A7u);
    if ( HIDWORD(v31) )
    {
      v29 = HIDWORD(v31);
      if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v31)) != HIDWORD(v31) )
      {
        v29 = 1703LL;
        __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v31), v31));
      }
    }
  }
  v17 = (*(_BYTE *)(v30 + 3) & 3) == 0;
  v59 = 0;
  if ( !v17 )
    *(double *)&v12 = KiSaveDebugRegisterState(v29);
LABEL_20:
  v47 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v56[0] = v12;
  v56[1] = v13;
  v56[2] = v14;
  v56[3] = v15;
  v56[4] = v25;
  v56[5] = v26;
  if ( (KiTrapFeatures & 2) != 0 )
    v61 = v9;
  v46 = 0;
  if ( KeGetPcr()->Prcb.DeepSleep )
    KeWakeProcessor();
  if ( &ExpInterlockedPopEntrySListResume < (_UNKNOWN *)retaddr
    && &ExpInterlockedPopEntrySListEnd >= (_UNKNOWN *)retaddr )
  {
    KiCheckForSListAddress((__int64)BugCheckParameter4);
  }
  __incgsdword(0x87C0u);
  if ( (KiTrapFeatures & 8) != 0 )
    __asm { clac }
  if ( KiIrqlFlags )
  {
    CurrentIrql = KzSetIrqlUnsafe(0xFu);
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
  }
  v45 = CurrentIrql;
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 1);
  v33 = _bittestandset16(MK_FP(__GS__, 34086LL), 0);
  if ( v33
    || (v63 & 1) == 0
    && (unsigned __int64)KiNmiInterruptStart <= (unsigned __int64)retaddr
    && &KiNmiInterruptEnd > (_UNKNOWN *)retaddr
    || (unsigned __int64)KiNmiInterruptShadow <= (unsigned __int64)retaddr
    && &KiNmiInterruptShadowEnd > (_UNKNOWN *)retaddr )
  {
    KiBugCheckDispatch(273LL, 0LL, 0LL, 0LL);
  }
  result = KxNmiInterrupt();
  __writegsbyte(0x8526u, 0);
  if ( KiIrqlFlags )
    result = KzSetIrqlUnsafe(v45);
  else
    __writecr8(v45);
  if ( (KiTrapFeatures & 2) == 0 )
  {
    if ( (v63 & 1) != 0 )
    {
      if ( (KiTrapFeatures & 8) != 0 )
        __asm { stac }
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
      {
        KiCopyCounters((__int64)CurrentThread);
        CurrentThread = KeGetCurrentThread();
      }
      _mm_setcsr(v47);
      if ( v59 )
        KiRestoreDebugRegisterState(CurrentThread);
      if ( _bittest((const signed __int32 *)&KeGetCurrentThread()->116, 0x16u) )
      {
        __asm { rdsspq  rcx }
        if ( _RCX == KeGetPcr()->Prcb.KernelShadowStackInitial + 8 )
        {
          _RCX = KeGetPcr()->Prcb.TransitionShadowStack;
          __asm
          {
            rstorssp qword ptr [rcx]
            saveprevssp
          }
        }
      }
      __writegsbyte(0x89Eu, v44);
      if ( KeGetPcr()->Prcb.BpbNmiSpecCtrl )
        __writemsr(0x48u, v60);
      v39 = v52;
      v40 = v51;
      v41 = v50;
      v42 = v49;
      if ( (KiTrapFeatures & 1) == 0 )
      {
        if ( (KeGetPcr()->Prcb.BpbState.AllFlags & 0x200) != 0 )
          __asm { verw    [rsp+arg_18] }
        __asm
        {
          swapgs
          iretq
        }
      }
    }
    else
    {
      _mm_setcsr(v47);
      __writegsbyte(0x89Eu, v44);
      if ( KeGetPcr()->Prcb.BpbNmiSpecCtrl )
        __writemsr(0x48u, v60);
      __writemsr(0xC0000101, v55);
      __writecr2(v57);
      v39 = v52;
      v40 = v51;
      v41 = v50;
      v42 = v49;
      if ( (KiTrapFeatures & 1) == 0 )
        __asm { iretq }
    }
    return KiKernelIstExit(v42, v41, v40, v39, a5, a6, a7, a8);
  }
  return result;
}
