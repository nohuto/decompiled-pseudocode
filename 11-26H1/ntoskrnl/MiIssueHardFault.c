/*
 * XREFs of MiIssueHardFault @ 0x14038F100
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 *     MiWriteValidPteNewProtection @ 0x1402E24D0 (MiWriteValidPteNewProtection.c)
 *     MiMakeTransitionPteValid @ 0x1402E5640 (MiMakeTransitionPteValid.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockPageAndSetDirty @ 0x14031C814 (MiLockPageAndSetDirty.c)
 *     MiFinishHardFault @ 0x14031F860 (MiFinishHardFault.c)
 *     MiLogPageAccess @ 0x140322960 (MiLogPageAccess.c)
 *     EtwpGetPerfCounter @ 0x14032F3E0 (EtwpGetPerfCounter.c)
 *     MiGetEffectivePagePriorityThread @ 0x140373760 (MiGetEffectivePagePriorityThread.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14038DDEC (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiRelockFaultState @ 0x14038DE50 (MiRelockFaultState.c)
 *     MiComputeImagePteIndex @ 0x14038ECA0 (MiComputeImagePteIndex.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x14038FF58 (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x14038FFA0 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x140390800 (MiIssueHardFaultIo.c)
 *     MiReferenceControlAreaFileWithTag @ 0x140390AC0 (MiReferenceControlAreaFileWithTag.c)
 *     EtwpGetHostPerfCounter @ 0x1404688A4 (EtwpGetHostPerfCounter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiIssueHardFault(__int64 a1, __int64 a2)
{
  int v2; // edi
  char v4; // r15
  __int64 v5; // rcx
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 **v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  int v24; // eax
  unsigned __int64 v25; // rcx
  LARGE_INTEGER *v26; // r8
  LARGE_INTEGER v27; // rax
  LARGE_INTEGER *v28; // rbx
  LONG v29; // edx
  __int64 v30; // rcx
  LARGE_INTEGER v31; // rax
  __int64 v32; // rax
  int v33; // edi
  __int64 v34; // r8
  _QWORD *v35; // r8
  __int64 v36; // r8
  unsigned int v37; // eax
  bool i; // zf
  unsigned __int64 v39; // rdx
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  unsigned __int64 PerfCounter; // rax
  LARGE_INTEGER *v43; // rcx
  LARGE_INTEGER SystemTimePrecise; // rax
  unsigned __int64 v45; // rax
  __int64 HostPerfCounter; // rax
  __int64 v47; // rdi
  __int64 v48; // rcx
  ULONG_PTR v49; // rsi
  unsigned __int64 v50; // r12
  int v51; // edi
  __int64 v52; // r14
  __int64 PteShadow; // rax
  unsigned __int64 TransitionPteValid; // rbx
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rcx
  char v58; // r8
  __int64 v59; // rcx
  ULONG *v60; // r8
  __int64 v62; // rcx
  __int64 v63; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rcx
  __int64 *v69; // rax
  unsigned __int64 v70; // rcx
  __int64 v71; // r8
  unsigned int EffectivePagePriorityThread; // eax
  __int64 v73; // r8
  __int64 CurrentIrql; // rcx
  __int64 v75; // rcx
  __int64 v76; // rdx
  _QWORD *v77; // rax
  char v78; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v79[4]; // [rsp+70h] [rbp+0h] BYREF
  int SessionIdForVa; // [rsp+74h] [rbp+4h]
  __int64 v81; // [rsp+78h] [rbp+8h]
  unsigned __int64 v82; // [rsp+80h] [rbp+10h] BYREF
  __int64 v83; // [rsp+88h] [rbp+18h]
  LARGE_INTEGER *v84; // [rsp+90h] [rbp+20h] BYREF
  __int64 v85; // [rsp+98h] [rbp+28h]
  __int64 v86; // [rsp+A0h] [rbp+30h]
  unsigned __int64 v87; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v88; // [rsp+B0h] [rbp+40h]
  __int64 v89; // [rsp+B8h] [rbp+48h]

  v2 = *(_DWORD *)(a2 + 188);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  v81 = *(_QWORD *)(a2 + 152);
  v7 = 0;
  *(_QWORD *)(a2 + 232) = v5;
  v79[0] = 0;
  v87 = 0LL;
  SessionIdForVa = MiGetSessionIdForVa(v5);
  v9 = (__int64 **)(v8 + 192);
  v89 = v8 + 192;
  if ( (v2 & 0x400000) != 0 )
  {
    v88 = 0LL;
    v89 = v8 + 192;
  }
  else
  {
    v88 = **v9;
  }
  if ( (*(_DWORD *)(v8 + 188) & 0x400000) != 0 )
  {
    v14 = a1 + 56;
    v86 = MiReleaseFaultState(a1 + 56, 1LL, v79);
    v83 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v10 = **v9;
    v11 = MiReferenceControlAreaFileWithTag(v10, 1666411853LL, 1LL);
    v13 = *(_DWORD *)(v10 + 56);
    v85 = v11;
    if ( (v13 & 0x20) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v10 + 112));
      if ( (*(_DWORD *)(a2 + 188) & 0x400000) != 0 || (v63 = *(_QWORD *)(a2 + 208)) == 0 )
        v63 = a2 + 272;
      *(_DWORD *)(a2 + 216) = MiComputeImagePteIndex(48LL * *(_QWORD *)(v63 + 48) - 0x220000000000LL);
    }
    else
    {
      *v9 = 0LL;
    }
    v14 = a1 + 56;
    LOBYTE(v12) = 1;
    v15 = MiReleaseFaultState(a1 + 56, v12, v79);
    v18 = *(_QWORD *)(a1 + 16);
    v86 = v15;
    v83 = v18;
    if ( v85 )
    {
      v62 = v88;
      *(_QWORD *)(a2 + 200) = v85;
      if ( (*(_BYTE *)(v62 + 56) & 0x20) != 0 )
        v7 = 1;
    }
  }
  v19 = *(_QWORD *)(a1 + 16);
  if ( (v19 & 1) != 0 && *(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v20 = v81;
  }
  else
  {
    v20 = v81;
    ++*(_BYTE *)(v81 + 1454);
  }
  v21 = *(_DWORD *)(*(_QWORD *)v14 + 184LL);
  if ( (v21 & 0xF) != 0 )
    --*(_WORD *)(v20 + 486);
  else
    --*(_WORD *)(v20 + 484);
  if ( (v2 & 0x10000000) != 0 )
    --*(_WORD *)(v20 + 486);
  v22 = v79[0];
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v79[0]);
  __writecr8(v22);
  if ( (v2 & 0x40000) != 0 )
  {
    v23 = (*(_DWORD *)(a2 + 312) >> 12) + (unsigned int)((*(_DWORD *)(a2 + 312) & 0xFFF) != 0);
    MiZeroPhysicalPage(
      0LL,
      *(_QWORD *)(a2 + 8 * v23 + 312),
      1,
      (*(_DWORD *)(48LL * *(_QWORD *)(a2 + 8 * v23 + 312) - 0x21FFFFFFFFE0LL) >> 22) & 3);
  }
  v24 = *(_DWORD *)(a2 + 36);
  v84 = 0LL;
  if ( v24 )
  {
    v7 = 2;
    goto LABEL_75;
  }
  if ( (v2 & 0x400420) == 0x400020 )
  {
LABEL_75:
    v47 = a1 + 56;
    goto LABEL_48;
  }
  if ( (PerfGlobalGroupMask & 0x2000) == 0 && (BYTE4(xmmword_140F13528) & 1) == 0 || (v2 & 0x20) != 0 )
    goto LABEL_46;
  v84 = (LARGE_INTEGER *)&v78;
  if ( (v2 & 0x400) != 0 )
    v25 = (unsigned __int64)*(unsigned int *)(a2 + 96) << 12;
  else
    v25 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(a2 + 188) & 0x400000) != 0 )
    v26 = *(LARGE_INTEGER **)(*(_QWORD *)v89 + 24LL);
  else
    v26 = *(LARGE_INTEGER **)(a2 + 200);
  v27 = *(LARGE_INTEGER *)(a2 + 232);
  v28 = v84;
  v29 = *(_DWORD *)(a2 + 312);
  v84[4].QuadPart = v25;
  v30 = v81;
  v28[5] = v27;
  v28[7].LowPart = *(_DWORD *)(v30 + 1296);
  v28[7].HighPart = v29;
  if ( v26 )
    v31 = v26[3];
  else
    v31.QuadPart = 0LL;
  v28[6] = v31;
  if ( (PerfGlobalGroupMask & 0x2000) != 0 )
  {
    v32 = *(_QWORD *)(v30 + 544);
    v33 = 0;
    SessionIdForVa = 0;
    v34 = *(_QWORD *)(v32 + 1520);
    if ( v34 )
      v35 = *(_QWORD **)(v34 + 1504);
    else
      v35 = &PspHostSiloGlobals;
    v36 = v35[104];
    if ( v36 )
    {
      v37 = *(_DWORD *)(v36 + 4520);
      for ( i = !_BitScanForward((unsigned int *)&v39, v37); !i; i = !_BitScanForward((unsigned int *)&v39, v37) )
      {
        v37 &= v37 - 1;
        v40 = (unsigned int)v39;
        v41 = (_DWORD *)(v36 + 32 * v39 + 4556);
        if ( v41 && (*v41 & 0x2000) != 0 )
          v33 |= 1 << *(_BYTE *)(v36 + 2 * v40 + 4505);
      }
      if ( (v33 & 2) == 0 )
      {
        PerfCounter = 0LL;
LABEL_37:
        v28->QuadPart = PerfCounter;
        v43 = v28;
        if ( (v33 & 4) != 0 )
          SystemTimePrecise = RtlGetSystemTimePrecise();
        else
          SystemTimePrecise.QuadPart = 0LL;
        v28[1] = SystemTimePrecise;
        if ( (v33 & 8) != 0 )
        {
          v45 = __rdtsc();
          v39 = (unsigned __int64)HIDWORD(v45) << 32;
        }
        else
        {
          v45 = 0LL;
        }
        v28[2].QuadPart = v45;
        if ( (v33 & 0x10) != 0 )
          HostPerfCounter = EtwpGetHostPerfCounter(v43, v39, v36);
        else
          HostPerfCounter = 0LL;
        v28[3].QuadPart = HostPerfCounter;
        goto LABEL_44;
      }
    }
    else
    {
      LOBYTE(v33) = 30;
    }
    PerfCounter = EtwpGetPerfCounter();
    goto LABEL_37;
  }
  v28->QuadPart = 0LL;
  v28[1].QuadPart = 0LL;
LABEL_44:
  if ( (BYTE4(xmmword_140F13528) & 1) != 0 )
    v28[8].QuadPart = MEMORY[0xFFFFF78000000320];
  else
    v28[8].QuadPart = 0LL;
LABEL_46:
  v47 = a1 + 56;
  v21 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL);
  if ( (HIBYTE(v21) & 0x30) == 0x30 )
  {
    v77 = &unk_140E379A0;
    if ( (*(_DWORD *)(*(_QWORD *)v47 + 184LL) & 0xF) != 1 )
      v77 = (_QWORD *)(*(_QWORD *)v47 + 224LL);
    if ( !*v77 )
      KeStackAttachProcess(PsInitialSystemProcess, (PRKAPC_STATE)(a2 + 104));
  }
  v7 |= 2u;
  MiIssueHardFaultIo(a2, v7 & 1, *(_QWORD *)(a1 + 16));
LABEL_48:
  *(_DWORD *)(a2 + 188) ^= ((unsigned __int8)*(_DWORD *)(a2 + 188) ^ (unsigned __int8)(2 * v21)) & 0x1E;
  v48 = *(_QWORD *)(a1 + 16);
  if ( (v48 & 1) == 0 || (v68 = v48 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)v68 != 1) )
  {
    v49 = *(_QWORD *)(a2 + 256);
    v50 = *(_QWORD *)(a2 + 240);
    if ( *(__int64 *)(v49 + 8) > 0 && (*(_QWORD *)(v49 + 40) & 0x10000000000LL) == 0 )
      v49 = 0LL;
    MiWaitForInPageComplete(a1, a2, &v84);
    v51 = MiFinishHardFault(a1, v86, a2, (__int64)&v87);
    SessionIdForVa = (int)v84;
    --*(_BYTE *)(v81 + 1454);
    if ( v51 )
      return (unsigned int)v51;
    if ( !v49 )
      v49 = 48 * ((v87 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v52 = *(_DWORD *)(a1 + 8) & 2;
    if ( *(__int64 *)(v49 + 40) < 0 )
    {
      v50 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v51 = MiCompleteProtoPteFault((__int64 *)a1, (v87 >> 12) & 0xFFFFFFFFFFLL, v52, 0, v83);
      if ( v51 >= 0 )
      {
LABEL_68:
        v59 = *(_QWORD *)(a1 + 56);
        if ( (*(_DWORD *)(v59 + 184) & 0xF) == 1 )
          v60 = &MiSystemPartition;
        else
          v60 = *(ULONG **)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v59 + 174));
        if ( v60[4539] )
        {
          if ( SessionIdForVa != 2 )
          {
            EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v81);
            if ( EffectivePagePriorityThread >= (unsigned int)v73 )
              MiLogPageAccess(*(_QWORD *)(a1 + 56), v50 | 1, v73);
          }
        }
        if ( !v51 )
          return 276;
      }
    }
    else
    {
      PteShadow = *(_QWORD *)v50;
      if ( v50 >= 0xFFFFF6FB7DBED000uLL && v50 <= 0xFFFFF6FB7DBED7F8uLL )
        PteShadow = MiReadPteShadow(v50, *(_QWORD *)v50);
      v85 = v83 & 1;
      if ( (v83 & 1) != 0 && *(_BYTE *)(v83 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        *(_QWORD *)v50 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      TransitionPteValid = MiMakeTransitionPteValid(v50);
      v82 = TransitionPteValid;
      v55 = *(_QWORD *)(v49 + 16);
      if ( (v55 & 0x400) == 0 && (v55 & 0x8000000) != 0 )
      {
        v56 = v82;
        if ( (unsigned __int64)&v82 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v82 <= 0xFFFFF6FB7DBED7F8uLL
          && (v82 & 1) != 0
          && ((v82 & 0x20) == 0 || (v82 & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            if ( Process )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v66 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v82 >> 3) & 0x1FF));
                if ( (v66 & 0x20) != 0 )
                  v56 = v82 | 0x20;
                v67 = v56;
                v56 |= 0x42uLL;
                if ( (v66 & 0x42) == 0 )
                  v56 = v67;
              }
            }
          }
        }
        MiWriteValidPteNewProtection((__int64 *)&v82, v56 | 0x40);
        TransitionPteValid = v82;
      }
      if ( v52 )
      {
        if ( MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *(_QWORD *)a1) && (TransitionPteValid & 0x800) != 0 )
        {
          TransitionPteValid |= 0x42uLL;
          if ( (*(_BYTE *)(v49 + 34) & 0x10) == 0 && (*(_DWORD *)(v49 + 16) & 8) != 0 )
            MiLockPageAndSetDirty(v49, 1, v71);
        }
      }
      if ( !v85 )
        goto LABEL_64;
      if ( *(_BYTE *)(v83 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        *(_QWORD *)v50 = TransitionPteValid;
        return 276LL;
      }
      v57 = v83 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)(v83 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
      {
LABEL_64:
        v57 = 0LL;
        if ( (v83 & 1) != 0 && *(_BYTE *)(v83 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
          v4 = 1;
      }
      v58 = v4 | 0x10;
      if ( (*(_BYTE *)(a1 + 69) & 1) == 0 )
        v58 = v4;
      if ( (unsigned int)MiAllocateWsle(
                           *(_QWORD *)(a1 + 56),
                           (signed __int64 *)v50,
                           (_QWORD *)v49,
                           0,
                           TransitionPteValid,
                           v58,
                           v57) )
        goto LABEL_68;
      MiLockAndDecrementShareCount(v49, 2LL);
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v51;
  }
  if ( v7 < 2 )
  {
    v16 = *(__int64 **)(v68 + 64);
    if ( *v16 != v68 + 56 )
LABEL_113:
      __fastfail(3u);
    *(_QWORD *)a2 = v68 + 56;
    *(_QWORD *)(a2 + 8) = v16;
    *v16 = a2;
    *(_QWORD *)(v68 + 64) = a2;
    *(_QWORD *)(v68 + 72) += *(unsigned int *)(a2 + 184);
  }
  else
  {
    v69 = *(__int64 **)(v68 + 48);
    v70 = v68 + 40;
    if ( *v69 != v70 )
      goto LABEL_113;
    *(_QWORD *)a2 = v70;
    *(_QWORD *)(a2 + 8) = v69;
    *v69 = a2;
    *(_QWORD *)(v70 + 8) = a2;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql != 1 )
    __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v16) = 1;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v16);
  }
  v75 = v81;
  v76 = *(unsigned int *)(*(_QWORD *)v47 + 184LL);
  if ( (v76 & 0xF) != 0 )
  {
    i = (*(_WORD *)(v81 + 486))++ == 0xFFFF;
    if ( i && *(_QWORD *)(v75 + 152) != v75 + 152 )
      KiCheckForKernelApcDelivery(v75, v76);
  }
  else
  {
    KeLeaveCriticalRegionThread(v81);
  }
  MiRelockFaultState(v47, v86, v17);
  return 0LL;
}
