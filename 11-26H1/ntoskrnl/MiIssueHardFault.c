/*
 * XREFs of MiIssueHardFault @ 0x14038D350
 * Callers:
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 * Callees:
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     MiAllocateWsle @ 0x1402D7F18 (MiAllocateWsle.c)
 *     MiZeroPhysicalPage @ 0x1402D8B20 (MiZeroPhysicalPage.c)
 *     MiCompleteProtoPteFault @ 0x1402D8E50 (MiCompleteProtoPteFault.c)
 *     MiWriteValidPteNewProtection @ 0x140300450 (MiWriteValidPteNewProtection.c)
 *     MiMakeTransitionPteValid @ 0x1403035C0 (MiMakeTransitionPteValid.c)
 *     MiLockAndDecrementShareCount @ 0x1403091DC (MiLockAndDecrementShareCount.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiLockPageAndSetDirty @ 0x14031A7E4 (MiLockPageAndSetDirty.c)
 *     MiFinishHardFault @ 0x14031D830 (MiFinishHardFault.c)
 *     MiLogPageAccess @ 0x140320930 (MiLogPageAccess.c)
 *     EtwpGetPerfCounter @ 0x14032D3B0 (EtwpGetPerfCounter.c)
 *     MiGetEffectivePagePriorityThread @ 0x1403719B0 (MiGetEffectivePagePriorityThread.c)
 *     MiOkToSetPteDirtyForNotValidFault @ 0x14038C03C (MiOkToSetPteDirtyForNotValidFault.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiComputeImagePteIndex @ 0x14038CEF4 (MiComputeImagePteIndex.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x14038E1A8 (MiGetSessionIdForVa.c)
 *     MiWaitForInPageComplete @ 0x14038E1F0 (MiWaitForInPageComplete.c)
 *     MiIssueHardFaultIo @ 0x14038EA50 (MiIssueHardFaultIo.c)
 *     MiReferenceControlAreaFileWithTag @ 0x14038ED10 (MiReferenceControlAreaFileWithTag.c)
 *     EtwpGetHostPerfCounter @ 0x14046F124 (EtwpGetHostPerfCounter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
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
  __int64 v26; // r8
  __int64 v27; // rax
  char *v28; // rbx
  int v29; // edx
  __int64 v30; // rcx
  __int64 v31; // rax
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
  char *v43; // rcx
  __int64 SystemTimePrecise; // rax
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
  unsigned int EffectivePagePriorityThread; // eax
  unsigned int v72; // r8d
  __int64 CurrentIrql; // rcx
  __int64 v74; // rcx
  __int64 v75; // rdx
  _QWORD *v76; // rax
  char v77; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int8 v78[4]; // [rsp+70h] [rbp+0h] BYREF
  int SessionIdForVa; // [rsp+74h] [rbp+4h]
  __int64 v80; // [rsp+78h] [rbp+8h]
  unsigned __int64 v81; // [rsp+80h] [rbp+10h] BYREF
  __int64 v82; // [rsp+88h] [rbp+18h]
  char *v83; // [rsp+90h] [rbp+20h] BYREF
  __int64 v84; // [rsp+98h] [rbp+28h]
  __int64 v85; // [rsp+A0h] [rbp+30h]
  unsigned __int64 v86; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v87; // [rsp+B0h] [rbp+40h]
  __int64 v88; // [rsp+B8h] [rbp+48h]

  v2 = *(_DWORD *)(a2 + 188);
  v4 = 0;
  v5 = *(_QWORD *)a1;
  v80 = *(_QWORD *)(a2 + 152);
  v7 = 0;
  *(_QWORD *)(a2 + 232) = v5;
  v78[0] = 0;
  v86 = 0LL;
  SessionIdForVa = MiGetSessionIdForVa(v5);
  v9 = (__int64 **)(v8 + 192);
  v88 = v8 + 192;
  if ( (v2 & 0x400000) != 0 )
  {
    v87 = 0LL;
    v88 = v8 + 192;
  }
  else
  {
    v87 = **v9;
  }
  if ( (*(_DWORD *)(v8 + 188) & 0x400000) != 0 )
  {
    v14 = a1 + 56;
    v85 = MiReleaseFaultState(a1 + 56, 1LL, v78);
    v82 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v10 = **v9;
    v11 = MiReferenceControlAreaFileWithTag(v10, 1666411853LL, 1LL);
    v13 = *(_DWORD *)(v10 + 56);
    v84 = v11;
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
    v15 = MiReleaseFaultState(a1 + 56, v12, v78);
    v18 = *(_QWORD *)(a1 + 16);
    v85 = v15;
    v82 = v18;
    if ( v84 )
    {
      v62 = v87;
      *(_QWORD *)(a2 + 200) = v84;
      if ( (*(_BYTE *)(v62 + 56) & 0x20) != 0 )
        v7 = 1;
    }
  }
  v19 = *(_QWORD *)(a1 + 16);
  if ( (v19 & 1) != 0 && *(_BYTE *)(v19 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    v20 = v80;
  }
  else
  {
    v20 = v80;
    ++*(_BYTE *)(v80 + 1454);
  }
  v21 = *(_DWORD *)(*(_QWORD *)v14 + 184LL);
  if ( (v21 & 0xF) != 0 )
    --*(_WORD *)(v20 + 486);
  else
    --*(_WORD *)(v20 + 484);
  if ( (v2 & 0x10000000) != 0 )
    --*(_WORD *)(v20 + 486);
  v22 = v78[0];
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v78[0]);
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
  v83 = 0LL;
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
  if ( (PerfGlobalGroupMask & 0x2000) == 0 && (stru_140F12D20.Padding[2] & 0x100000000LL) == 0 || (v2 & 0x20) != 0 )
    goto LABEL_46;
  v83 = &v77;
  if ( (v2 & 0x400) != 0 )
    v25 = (unsigned __int64)*(unsigned int *)(a2 + 96) << 12;
  else
    v25 = *(_QWORD *)(a2 + 96);
  if ( (*(_DWORD *)(a2 + 188) & 0x400000) != 0 )
    v26 = *(_QWORD *)(*(_QWORD *)v88 + 24LL);
  else
    v26 = *(_QWORD *)(a2 + 200);
  v27 = *(_QWORD *)(a2 + 232);
  v28 = v83;
  v29 = *(_DWORD *)(a2 + 312);
  *((_QWORD *)v83 + 4) = v25;
  v30 = v80;
  *((_QWORD *)v28 + 5) = v27;
  *((_DWORD *)v28 + 14) = *(_DWORD *)(v30 + 1296);
  *((_DWORD *)v28 + 15) = v29;
  if ( v26 )
    v31 = *(_QWORD *)(v26 + 24);
  else
    v31 = 0LL;
  *((_QWORD *)v28 + 6) = v31;
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
        *(_QWORD *)v28 = PerfCounter;
        v43 = v28;
        if ( (v33 & 4) != 0 )
          SystemTimePrecise = RtlGetSystemTimePrecise();
        else
          SystemTimePrecise = 0LL;
        *((_QWORD *)v28 + 1) = SystemTimePrecise;
        if ( (v33 & 8) != 0 )
        {
          v45 = __rdtsc();
          v39 = (unsigned __int64)HIDWORD(v45) << 32;
        }
        else
        {
          v45 = 0LL;
        }
        *((_QWORD *)v28 + 2) = v45;
        if ( (v33 & 0x10) != 0 )
          HostPerfCounter = EtwpGetHostPerfCounter(v43, v39, v36);
        else
          HostPerfCounter = 0LL;
        *((_QWORD *)v28 + 3) = HostPerfCounter;
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
  *(_QWORD *)v28 = 0LL;
  *((_QWORD *)v28 + 1) = 0LL;
LABEL_44:
  if ( (stru_140F12D20.Padding[2] & 0x100000000LL) != 0 )
    *((_QWORD *)v28 + 8) = MEMORY[0xFFFFF78000000320];
  else
    *((_QWORD *)v28 + 8) = 0LL;
LABEL_46:
  v47 = a1 + 56;
  v21 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 184LL);
  if ( (HIBYTE(v21) & 0x30) == 0x30 )
  {
    v76 = &unk_140E37820;
    if ( (*(_DWORD *)(*(_QWORD *)v47 + 184LL) & 0xF) != 1 )
      v76 = (_QWORD *)(*(_QWORD *)v47 + 224LL);
    if ( !*v76 )
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
    MiWaitForInPageComplete(a1, a2, &v83);
    v51 = MiFinishHardFault(a1, v85, a2, (__int64)&v86);
    SessionIdForVa = (int)v83;
    --*(_BYTE *)(v80 + 1454);
    if ( v51 )
      return (unsigned int)v51;
    if ( !v49 )
      v49 = 48 * ((v86 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v52 = *(_DWORD *)(a1 + 8) & 2;
    if ( *(__int64 *)(v49 + 40) < 0 )
    {
      v50 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v51 = MiCompleteProtoPteFault((__int64 *)a1, (v86 >> 12) & 0xFFFFFFFFFFLL, v52, 0, v82);
      if ( v51 >= 0 )
      {
LABEL_68:
        v59 = *(_QWORD *)(a1 + 56);
        if ( (*(_DWORD *)(v59 + 184) & 0xF) == 1 )
          v60 = &MiSystemPartition;
        else
          v60 = *(ULONG **)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v59 + 174));
        if ( v60[4539] )
        {
          if ( SessionIdForVa != 2 )
          {
            EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v80);
            if ( EffectivePagePriorityThread >= v72 )
              MiLogPageAccess(*(_QWORD *)(a1 + 56), v50 | 1);
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
      v84 = v82 & 1;
      if ( (v82 & 1) != 0 && *(_BYTE *)(v82 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
        *(_QWORD *)v50 = PteShadow & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
      TransitionPteValid = MiMakeTransitionPteValid(v50);
      v81 = TransitionPteValid;
      v55 = *(_QWORD *)(v49 + 16);
      if ( (v55 & 0x400) == 0 && (v55 & 0x8000000) != 0 )
      {
        v56 = v81;
        if ( (unsigned __int64)&v81 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v81 <= 0xFFFFF6FB7DBED7F8uLL
          && (v81 & 1) != 0
          && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0)
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
                v66 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v81 >> 3) & 0x1FF));
                if ( (v66 & 0x20) != 0 )
                  v56 = v81 | 0x20;
                v67 = v56;
                v56 |= 0x42uLL;
                if ( (v66 & 0x42) == 0 )
                  v56 = v67;
              }
            }
          }
        }
        MiWriteValidPteNewProtection((__int64 *)&v81, v56 | 0x40);
        TransitionPteValid = v81;
      }
      if ( v52 )
      {
        if ( MiOkToSetPteDirtyForNotValidFault(TransitionPteValid, *(_QWORD *)a1) && (TransitionPteValid & 0x800) != 0 )
        {
          TransitionPteValid |= 0x42uLL;
          if ( (*(_BYTE *)(v49 + 34) & 0x10) == 0 && (*(_DWORD *)(v49 + 16) & 8) != 0 )
            MiLockPageAndSetDirty(v49, 1);
        }
      }
      if ( !v84 )
        goto LABEL_64;
      if ( *(_BYTE *)(v82 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
      {
        *(_QWORD *)v50 = TransitionPteValid;
        return 276LL;
      }
      v57 = v82 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)(v82 & 0xFFFFFFFFFFFFFFFEuLL) != 5 )
      {
LABEL_64:
        v57 = 0LL;
        if ( (v82 & 1) != 0 && *(_BYTE *)(v82 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
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
  v74 = v80;
  v75 = *(unsigned int *)(*(_QWORD *)v47 + 184LL);
  if ( (v75 & 0xF) != 0 )
  {
    i = (*(_WORD *)(v80 + 486))++ == 0xFFFF;
    if ( i && *(_QWORD *)(v74 + 152) != v74 + 152 )
      KiCheckForKernelApcDelivery(v74, v75);
  }
  else
  {
    KeLeaveCriticalRegionThread(v80, v75, v17);
  }
  MiRelockFaultState(v47, v85, v17);
  return 0LL;
}
