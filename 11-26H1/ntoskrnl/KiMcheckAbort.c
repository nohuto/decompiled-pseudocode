/*
 * XREFs of KiMcheckAbort @ 0x14073CC80
 * Callers:
 *     KiMcheckAbortShadow @ 0x140C5F9C0 (KiMcheckAbortShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140419940 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x1405360B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x140536130 (KiSaveDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405EE560 (KzSetIrqlUnsafe.c)
 *     KeWakeProcessor @ 0x1405F3900 (KeWakeProcessor.c)
 *     KiCopyCounters @ 0x1405F5DD0 (KiCopyCounters.c)
 *     KiKernelShadowStackAssistMceAlternateReturn @ 0x1405FD690 (KiKernelShadowStackAssistMceAlternateReturn.c)
 *     KiMcheckFastForward @ 0x1405FFBC0 (KiMcheckFastForward.c)
 *     KiSetSpecCtrlNmi @ 0x14072E370 (KiSetSpecCtrlNmi.c)
 *     KxMcheckAbort @ 0x14073D300 (KxMcheckAbort.c)
 */

void __fastcall KiMcheckAbort(
        __int64 a1,
        __int64 _RDX,
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
  unsigned __int32 v17; // eax
  unsigned __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  unsigned int v21; // eax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int128 v24; // xmm4
  __int128 v25; // xmm5
  __int64 v27; // rcx
  __int64 v28; // r10
  unsigned __int64 v29; // rax
  unsigned __int8 CurrentIrql; // al
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 InitialStack; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 (__fastcall **v39)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // rcx
  __int64 (__fastcall *v40)(); // rax
  bool v41; // zf
  _KIDTENTRY64 *IdtBase; // rax
  int v43; // r9d
  int v44; // r8d
  int v45; // edx
  int v46; // ecx
  __m128i v47; // [rsp+0h] [rbp-90h] BYREF
  ULONG_PTR BugCheckParameter4[4]; // [rsp+10h] [rbp-80h] BYREF
  unsigned __int64 v49; // [rsp+30h] [rbp-60h]
  unsigned __int8 v50; // [rsp+38h] [rbp-58h]
  unsigned __int8 v51; // [rsp+39h] [rbp-57h]
  char v52; // [rsp+3Bh] [rbp-55h]
  unsigned int v53; // [rsp+3Ch] [rbp-54h]
  __int64 v54; // [rsp+40h] [rbp-50h]
  __int64 v55; // [rsp+48h] [rbp-48h]
  __int64 v56; // [rsp+50h] [rbp-40h]
  __int64 v57; // [rsp+58h] [rbp-38h]
  __int64 v58; // [rsp+60h] [rbp-30h]
  __int64 v59; // [rsp+68h] [rbp-28h]
  __int64 v60; // [rsp+70h] [rbp-20h]
  unsigned __int64 v61; // [rsp+78h] [rbp-18h]
  _OWORD v62[6]; // [rsp+80h] [rbp-10h] BYREF
  unsigned __int64 v63; // [rsp+E0h] [rbp+50h]
  __int64 v64; // [rsp+E8h] [rbp+58h]
  __int16 v65; // [rsp+110h] [rbp+80h]
  unsigned int v66; // [rsp+150h] [rbp+C0h]
  __int64 v67; // [rsp+160h] [rbp+D0h]
  __int64 (__fastcall *retaddr)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16); // [rsp+178h] [rbp+E8h]
  unsigned __int16 v69; // [rsp+180h] [rbp+F0h]
  unsigned int v70; // [rsp+188h] [rbp+F8h]
  unsigned __int64 v71; // [rsp+190h] [rbp+100h]
  unsigned __int16 v72; // [rsp+198h] [rbp+108h]

  v67 = v9;
  v54 = v8;
  v55 = a1;
  v56 = _RDX;
  v57 = a3;
  v58 = a4;
  v59 = v10;
  v60 = v11;
  if ( (v69 & 1) == 0 )
  {
    __asm { rdsspq  rdx }
    v64 = _RDX;
    v61 = __readmsr(0xC0000101);
    v17 = __segmentlimit(0x50u);
    if ( v41 )
    {
      v20 = (v17 & 0x3FF) << 6;
      v19 = v17 >> 14;
    }
    else
    {
      if ( (KeFeatureBits & 0x400000000LL) == 0 )
      {
        __sgdt(v62);
        v18 = *(_QWORD *)(*(_QWORD *)((char *)v62 + 2) - 8000LL);
LABEL_8:
        v21 = v18;
        v22 = HIDWORD(v18);
        __writemsr(0xC0000101, __PAIR64__(v22, v21));
        v23 = __readcr2();
        v63 = v23;
        KiSetSpecCtrlNmi(3221225729LL, v22);
        goto LABEL_20;
      }
      __asm { rdtscp }
      v19 = 1;
      v20 = 805306432;
    }
    v18 = KiProcessorBlock[*((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink->Flink
                           + (v20 | (unsigned int)v19))]
        - 384;
    goto LABEL_8;
  }
  if ( (KiTrapFeatures & 1) == 0 )
    __asm { swapgs }
  _mm_lfence();
  _RCX = KeGetPcr()->Prcb.KernelShadowStackInitial;
  if ( _RCX )
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
  KiSetSpecCtrlNmi(_RCX, _RDX);
  if ( KiUserCetPl3SspCanonicalizeUpperMask )
  {
    v27 = 1703LL;
    v29 = __readmsr(0x6A7u);
    if ( HIDWORD(v29) )
    {
      v27 = HIDWORD(v29);
      if ( (KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v29)) != HIDWORD(v29) )
      {
        v27 = 1703LL;
        __writemsr(0x6A7u, __PAIR64__((unsigned int)KiUserCetPl3SspCanonicalizeUpperMask & HIDWORD(v29), v29));
      }
    }
  }
  v41 = (*(_BYTE *)(v28 + 3) & 3) == 0;
  v65 = 0;
  if ( !v41 )
    *(double *)&v12 = KiSaveDebugRegisterState(v27);
LABEL_20:
  v53 = _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  v62[0] = v12;
  v62[1] = v13;
  v62[2] = v14;
  v62[3] = v15;
  v62[4] = v24;
  v62[5] = v25;
  if ( (KiTrapFeatures & 2) != 0 )
    v67 = v9;
  v52 = 0;
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
  v51 = CurrentIrql;
  _enable();
  KiMcheckFastForward((ULONG_PTR)BugCheckParameter4, 0);
  __incgsbyte(0x8527u);
  if ( (v69 & 1) == 0 )
  {
    v32 = *(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52);
    if ( v71 <= v32 )
    {
      v31 = (unsigned int)KeIstStackSize;
      if ( (KiTrapFeatures & 1) != 0 )
        v31 = 464LL;
      if ( v71 > v32 - v31 )
        goto LABEL_40;
    }
    if ( (KiTrapFeatures & 1) != 0 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)((char *)KeGetPcr()->NtTib.StackBase + 52) + 8LL);
      if ( v71 <= v33 && v71 > v33 - (unsigned int)KeIstStackSize + 32 )
      {
LABEL_40:
        v72 |= 4u;
        _InterlockedIncrement64((volatile signed __int64 *)&KsepShimDbLock.WaitListEntry.Blink);
      }
    }
    if ( *(_BYTE *)retaddr == 0xF4 && *(_WORD *)((char *)retaddr - 1) == 0xF4FB )
    {
      v70 &= ~0x200u;
      retaddr = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))((char *)retaddr - 1);
      _InterlockedIncrement64((volatile signed __int64 *)&KsepShimDbLock.WaitListEntry.Flink);
    }
  }
  KxMcheckAbort(BugCheckParameter4, v31, &v47);
  if ( (v47.m128i_i8[0] & 1) != 0 )
  {
    MEMORY[0x8B10] = _mm_load_si128(&v47);
    v52 = 1;
  }
  __writegsbyte(0x8527u, KeGetPcr()->Prcb.MceActive - 1);
  _disable();
  if ( KiIrqlFlags )
    KzSetIrqlUnsafe(v51);
  else
    __writecr8(v51);
  _disable();
  if ( (KiTrapFeatures & 2) == 0 )
  {
    if ( (v69 & 1) != 0 )
    {
      if ( (KiTrapFeatures & 8) != 0 )
        __asm { stac }
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.LockNV & 0x10000) != 0 && (CurrentThread->Header.Size & 1) != 0 )
      {
        KiCopyCounters((__int64)CurrentThread);
        CurrentThread = KeGetCurrentThread();
      }
      _mm_setcsr(v53);
      if ( v65 )
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
      if ( !v52 )
        goto LABEL_72;
      InitialStack = (unsigned __int64)KeGetCurrentThread()->InitialStack;
    }
    else
    {
      if ( !v52 )
        goto LABEL_78;
      InitialStack = v71 & 0xFFFFFFFFFFFFFFF0uLL;
    }
    __asm { rdsspq  rdx }
    if ( _RDX )
    {
      v49 = InitialStack;
      KiKernelShadowStackAssistMceAlternateReturn((__int64)BugCheckParameter4);
      InitialStack = v49;
    }
    v39 = (__int64 (__fastcall **)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))(InitialStack - 40);
    *v39 = retaddr;
    v39[1] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v69;
    v39[2] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v70;
    v39[3] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v71;
    v39[4] = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v72;
    if ( (v69 & 1) == 0 )
    {
      retaddr = KxMcheckAlternateReturn;
LABEL_78:
      _mm_setcsr(v53);
      __writegsbyte(0x89Eu, v50);
      if ( KeGetPcr()->Prcb.BpbNmiSpecCtrl )
        __writemsr(0x48u, v66);
      __writemsr(0xC0000101, v61);
      __writecr2(v63);
      v43 = v58;
      v44 = v57;
      v45 = v56;
      v46 = v55;
      if ( (KiTrapFeatures & 1) == 0 )
        goto LABEL_77;
      goto LABEL_75;
    }
    v40 = (__int64 (__fastcall *)())KxMcheckAlternateReturn;
    v41 = (KiTrapFeatures & 1) == 0;
    if ( (KiTrapFeatures & 1) != 0 )
    {
      IdtBase = KeGetPcr()->IdtBase;
      *(&IdtBase[1118].Alignment + 1) = KeGetPcr()->Prcb.KernelDirectoryTableBase & 0x7FFFFFFFFFFFFFFFLL;
      IdtBase[1118].Alignment = (unsigned __int64)KeGetPcr();
      IdtBase = (_KIDTENTRY64 *)((char *)IdtBase + 16856);
      IdtBase->Alignment = (unsigned __int64)*v39;
      *(_KIDTENTRY64 *)((char *)IdtBase + 8) = *(_KIDTENTRY64 *)(v39 + 1);
      *(&IdtBase[1].Alignment + 1) = (unsigned __int64)v39[3];
      IdtBase[2].Alignment = (unsigned __int64)v39;
      v40 = KxMcheckAlternateReturnShadow;
    }
    retaddr = (__int64 (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, __int16))v40;
    if ( !v41 )
    {
LABEL_74:
      v43 = v58;
      v44 = v57;
      v45 = v56;
      v46 = v55;
      if ( (KiTrapFeatures & 1) == 0 )
      {
        __asm { swapgs }
        _mm_lfence();
LABEL_77:
        KiMcheckExit();
        return;
      }
LABEL_75:
      KiKernelIstMceExit(v46, v45, v44, v43, a5, a6, a7, a8);
      return;
    }
LABEL_72:
    __writegsbyte(0x89Eu, v50);
    if ( KeGetPcr()->Prcb.BpbNmiSpecCtrl )
      __writemsr(0x48u, v66);
    goto LABEL_74;
  }
}
