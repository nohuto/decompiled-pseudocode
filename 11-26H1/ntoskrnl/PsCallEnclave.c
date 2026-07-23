/*
 * XREFs of PsCallEnclave @ 0x140803C20
 * Callers:
 *     NtCallEnclave @ 0x140735DF0 (NtCallEnclave.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsGetBaseTrapFrame @ 0x140469AD0 (PsGetBaseTrapFrame.c)
 *     RtlPrepareEnclaveCall @ 0x1404EAF94 (RtlPrepareEnclaveCall.c)
 *     RtlCreateEnclaveReturnFrame @ 0x14062782C (RtlCreateEnclaveReturnFrame.c)
 *     ZwTerminateProcess @ 0x140728540 (ZwTerminateProcess.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     PspRemoveEnclaveThreadWait @ 0x140804A6C (PspRemoveEnclaveThreadWait.c)
 *     PspSelectVsmEnclaveByNumber @ 0x140A96B1C (PspSelectVsmEnclaveByNumber.c)
 *     PsDereferenceVsmEnclave @ 0x140AB8F4C (PsDereferenceVsmEnclave.c)
 *     PspFindVsmEnclaveThread @ 0x140ACC5E0 (PspFindVsmEnclaveThread.c)
 *     VslCallEnclave @ 0x140B1C25C (VslCallEnclave.c)
 *     MmSelectVsmEnclaveByAddress @ 0x140B2CB38 (MmSelectVsmEnclaveByAddress.c)
 *     PspPrepareEnclaveThreadWait @ 0x140B7175C (PspPrepareEnclaveThreadWait.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsCallEnclave(__int64 a1, __int64 a2, NTSTATUS a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 result; // rax
  __int64 ULong64FromUser; // rax
  _KPROCESS *Process; // rcx
  struct _KLOCK_ENTRIES *v11; // r9
  char *v12; // r13
  int EnclaveReturnFrame; // r14d
  AutoBoost *BaseTrapFrame; // rax
  __int64 v15; // rdx
  struct _KLOCK_ENTRIES *v16; // r9
  bool v17; // zf
  $241382875694CED3D471BC5892DE3337 *v18; // rcx
  volatile signed __int64 *v19; // r14
  AutoBoost *v20; // rax
  void *v21; // rdx
  AutoBoost *v22; // rsi
  __int64 v23; // rsi
  int v24; // eax
  PVOID v25; // rcx
  __int64 v26; // rdx
  _DWORD *v27; // rsi
  unsigned int v28; // eax
  int v29; // eax
  struct _KLOCK_ENTRIES *v30; // r9
  AutoBoost *v31; // rax
  void *v32; // rdx
  AutoBoost *v33; // rsi
  __int64 v34; // rdx
  AutoBoost *v35; // rax
  void *v36; // rdx
  AutoBoost *v37; // rsi
  int VsmEnclaveThread; // eax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  struct _KLOCK_ENTRIES *v42; // r9
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // rdx
  AutoBoost *v47; // rcx
  void *v48; // r8
  bool v49; // al
  int v50; // eax
  PVOID v51; // rdx
  volatile signed __int64 *v52; // rcx
  __int64 v53; // rdx
  void *v54; // rdx
  AutoBoost *v55; // rcx
  volatile signed __int64 *v56; // rcx
  __int64 v57; // rdx
  void *v58; // rdx
  AutoBoost *v59; // rcx
  char *v60; // rcx
  _QWORD *v61; // rdx
  void **v62; // rax
  __int64 v63; // rdx
  char v64[8]; // [rsp+50h] [rbp-88h] BYREF
  PVOID P; // [rsp+58h] [rbp-80h] BYREF
  int v66; // [rsp+60h] [rbp-78h] BYREF
  __int64 v67; // [rsp+68h] [rbp-70h] BYREF
  AutoBoost *v68; // [rsp+70h] [rbp-68h]
  PVOID v69; // [rsp+78h] [rbp-60h] BYREF
  AutoBoost *v70; // [rsp+80h] [rbp-58h]
  __int64 v71; // [rsp+88h] [rbp-50h] BYREF
  __int64 v72; // [rsp+90h] [rbp-48h] BYREF
  __int64 v73[8]; // [rsp+98h] [rbp-40h] BYREF
  __int64 v74; // [rsp+E0h] [rbp+8h] BYREF
  __int64 v75; // [rsp+E8h] [rbp+10h]
  NTSTATUS ExitStatus; // [rsp+F0h] [rbp+18h] BYREF
  _QWORD *v77; // [rsp+F8h] [rbp+20h]

  v77 = a4;
  ExitStatus = a3;
  v75 = a2;
  v74 = a1;
  v69 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v64[0] = 0;
  v67 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v68 = (AutoBoost *)CurrentThread;
  v70 = 0LL;
  if ( CurrentThread->PreviousMode != 1 )
    return 3221225711LL;
  if ( a1 )
  {
    if ( a2 )
      return 3221225712LL;
  }
  else if ( a2 )
  {
    goto LABEL_9;
  }
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225713LL;
LABEL_9:
  ULong64FromUser = RtlReadULong64FromUser(a4);
  RtlWriteULong64ToUser(a4, ULong64FromUser);
  v73[0] = RtlReadULong64FromUser(a4);
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
    result = PspSelectVsmEnclaveByNumber(Process, a2, &v69);
  else
    result = MmSelectVsmEnclaveByAddress(Process, a1, &v69);
  if ( (int)result >= 0 )
  {
    v12 = (char *)v69;
    if ( !*((_DWORD *)v69 + 10) )
    {
      EnclaveReturnFrame = -1073741816;
LABEL_15:
      PsDereferenceVsmEnclave(v12);
      return (unsigned int)EnclaveReturnFrame;
    }
    if ( *((_BYTE *)v69 + 76) )
    {
      --CurrentThread->KernelApcDisable;
      v35 = (AutoBoost *)KeAbPreAcquire((__int64)(v12 + 112), 0LL, 0LL, v11);
      v37 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 28, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 14, v35, (__int64)(v12 + 112));
      if ( v37 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v37, v36);
        else
          *((_BYTE *)v37 + 10) = 1;
      }
      v23 = *((_QWORD *)v12 + 13);
      while ( v23 )
      {
        VsmEnclaveThread = PspFindVsmEnclaveThread(v74, v23);
        if ( VsmEnclaveThread >= 0 )
        {
          if ( VsmEnclaveThread <= 0 )
            break;
          v23 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          v23 = *(_QWORD *)v23;
        }
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12 + 14);
      KeAbPostRelease((unsigned __int64)(v12 + 112));
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v39);
      if ( !v23 )
      {
        EnclaveReturnFrame = -1073741800;
        goto LABEL_15;
      }
      v67 = v23;
      goto LABEL_81;
    }
    BaseTrapFrame = (AutoBoost *)PsGetBaseTrapFrame((__int64)CurrentThread, 0LL);
    v70 = BaseTrapFrame;
    --CurrentThread->SpecialApcDisable;
    EnclaveReturnFrame = RtlPrepareEnclaveCall(
                           (__int64)BaseTrapFrame,
                           (__int64)a4,
                           stru_140FC11F0.ExtendedFeatureDisableMask,
                           stru_140FC11F0.Spare35[0],
                           (CurrentThread->MiscFlags & 0x100000) != 0,
                           &v72,
                           &v71);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 )
    {
      v18 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v18->ApcState.ApcListHead[0].Flink != v18 )
        KiCheckForKernelApcDelivery((__int64)v18, v15);
    }
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_15;
    --CurrentThread->KernelApcDisable;
    v19 = (volatile signed __int64 *)(v12 + 112);
    v20 = (AutoBoost *)KeAbPreAcquire((__int64)(v12 + 112), 0LL, 0LL, v16);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 28, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 14, v20, (__int64)(v12 + 112));
    if ( v22 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v22, v21);
      else
        *((_BYTE *)v22 + 10) = 1;
    }
    v23 = *((_QWORD *)v12 + 13);
    while ( v23 )
    {
      v24 = PspFindVsmEnclaveThread(CurrentThread, v23);
      if ( v24 >= 0 )
      {
        if ( v24 <= 0 )
          break;
        v23 = *(_QWORD *)(v23 + 8);
      }
      else
      {
        v23 = *(_QWORD *)v23;
      }
    }
    if ( v23 )
    {
LABEL_60:
      v67 = v23;
      if ( (_InterlockedExchangeAdd64(v19, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v19);
      KeAbPostRelease((unsigned __int64)v19);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v34);
      if ( *(_DWORD *)(v23 + 36) == -1 )
      {
        EnclaveReturnFrame = -1073741670;
        goto LABEL_15;
      }
LABEL_81:
      --CurrentThread->SpecialApcDisable;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
      v66 = *(_DWORD *)(v23 + 32);
      EnclaveReturnFrame = VslCallEnclave(
                             (_DWORD)v12,
                             (unsigned int)&v66,
                             (unsigned int)&v74,
                             ExitStatus,
                             (__int64)v73,
                             (__int64)&v72,
                             (__int64)&v71,
                             (__int64)&ExitStatus,
                             (__int64)v64);
      LODWORD(P) = EnclaveReturnFrame;
      *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) &= ~0x200u;
      v17 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v17
        && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v41, v40);
      }
      if ( v64[0] )
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ExitStatus);
      if ( EnclaveReturnFrame < 0 )
      {
        if ( !v75 )
        {
LABEL_124:
          if ( !v12[76] && !*(_DWORD *)(v23 + 36) )
          {
            --CurrentThread->KernelApcDisable;
            v59 = (AutoBoost *)KeAbPreAcquire((__int64)(v12 + 112), 0LL, 0LL, v42);
            v68 = v59;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 28, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 14, v59, (__int64)(v12 + 112));
              v59 = v68;
            }
            if ( v59 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v59, v58);
              else
                *((_BYTE *)v59 + 10) = 1;
            }
            *(_QWORD *)v23 = *((_QWORD *)v12 + 16);
            *((_QWORD *)v12 + 16) = v23;
            v60 = (char *)*((_QWORD *)v12 + 7);
            if ( v60 == v12 + 56 )
            {
              ++*((_DWORD *)v12 + 18);
            }
            else
            {
              v61 = *(_QWORD **)v60;
              v62 = (void **)*((_QWORD *)v60 + 1);
              if ( *(char **)(*(_QWORD *)v60 + 8LL) != v60 || *v62 != v60 )
                __fastfail(3u);
              *v62 = v61;
              v61[1] = v62;
              *(_QWORD *)v60 = 0LL;
              *((_DWORD *)v60 + 10) = 0;
              KeSetEvent((PRKEVENT)(v60 + 16), 0, 0);
            }
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v12 + 14);
            KeAbPostRelease((unsigned __int64)(v12 + 112));
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v63);
          }
          goto LABEL_15;
        }
        v74 = 0LL;
      }
      v43 = v74;
      if ( v74 )
      {
        --CurrentThread->SpecialApcDisable;
        EnclaveReturnFrame = RtlCreateEnclaveReturnFrame(
                               (__int64)v70,
                               (__int64)stru_140FC11F0.WpsFeedback,
                               stru_140FC11F0.Spare35[0],
                               *((_QWORD *)v12 + 1),
                               v43,
                               ExitStatus,
                               v72,
                               v71,
                               v73[0],
                               (CurrentThread->MiscFlags & 0x100000) != 0);
        v17 = CurrentThread->SpecialApcDisable++ == -1;
        if ( v17
          && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v45, v44);
        }
        if ( !v75 )
        {
          if ( !*(_DWORD *)(v23 + 36) )
          {
            *(_DWORD *)(v23 + 32) = v66;
            --CurrentThread->KernelApcDisable;
            v47 = (AutoBoost *)KeAbPreAcquire((__int64)(v12 + 112), 0LL, 0LL, v42);
            v70 = v47;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 28, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 14, v47, (__int64)(v12 + 112));
              v47 = v70;
            }
            if ( v47 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v47, v46);
              else
                *((_BYTE *)v47 + 10) = 1;
            }
            v48 = (void *)*((_QWORD *)v12 + 13);
            P = v48;
            v49 = 0;
            if ( v48 )
            {
              while ( 1 )
              {
                v50 = PspFindVsmEnclaveThread(CurrentThread, v48);
                v51 = P;
                if ( v50 < 0 )
                {
                  v48 = *(void **)P;
                  if ( !*(_QWORD *)P )
                  {
                    v49 = 0;
                    goto LABEL_109;
                  }
                }
                else
                {
                  v48 = (void *)*((_QWORD *)P + 1);
                  if ( !v48 )
                  {
                    v49 = 1;
                    goto LABEL_109;
                  }
                }
                P = v48;
              }
            }
            v51 = 0LL;
LABEL_109:
            RtlAvlInsertNodeEx((unsigned __int64 *)v12 + 13, (unsigned __int64)v51, v49, (_QWORD *)v23);
            v52 = (volatile signed __int64 *)(v12 + 112);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v52);
              v52 = (volatile signed __int64 *)(v12 + 112);
            }
            KeAbPostRelease((unsigned __int64)v52);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v53);
          }
          ++*(_DWORD *)(v23 + 36);
        }
      }
      else
      {
        RtlWriteULong64ToUser(v77, v73[0]);
        if ( v75 )
        {
          v17 = (*(_DWORD *)(v23 + 36))-- == 1;
          if ( v17 )
          {
            --CurrentThread->KernelApcDisable;
            v55 = (AutoBoost *)KeAbPreAcquire((__int64)(v12 + 112), 0LL, 0LL, v42);
            v68 = v55;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 28, 0LL) )
            {
              ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 14, v55, (__int64)(v12 + 112));
              v55 = v68;
            }
            if ( v55 )
            {
              if ( (KiAbpGlobalState & 1) != 0 )
                AutoBoost::KiAbpPostAcquire(v55, v54);
              else
                *((_BYTE *)v55 + 10) = 1;
            }
            RtlAvlRemoveNode((unsigned __int64 *)v12 + 13, v23);
            v56 = (volatile signed __int64 *)(v12 + 112);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            {
              ExfTryToWakePushLock(v56);
              v56 = (volatile signed __int64 *)(v12 + 112);
            }
            KeAbPostRelease((unsigned __int64)v56);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v57);
          }
        }
      }
      goto LABEL_124;
    }
    v25 = 0LL;
    P = 0LL;
    if ( v75 )
    {
      EnclaveReturnFrame = -1073741584;
    }
    else
    {
      v29 = *((_DWORD *)v12 + 18);
      if ( v29 )
      {
        *((_DWORD *)v12 + 18) = v29 - 1;
        EnclaveReturnFrame = 0;
      }
      else
      {
        EnclaveReturnFrame = PspPrepareEnclaveThreadWait(v12, &P);
        v25 = P;
      }
      if ( EnclaveReturnFrame >= 0 && !v25 )
      {
        v19 = (volatile signed __int64 *)(v12 + 112);
LABEL_59:
        v23 = *((_QWORD *)v12 + 16);
        *((_QWORD *)v12 + 16) = *(_QWORD *)v23;
        *(_QWORD *)(v23 + 24) = CurrentThread;
        *(_QWORD *)(v23 + 32) = 0LL;
        goto LABEL_60;
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v12 + 14);
    KeAbPostRelease((unsigned __int64)(v12 + 112));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v26);
    if ( EnclaveReturnFrame < 0 )
      goto LABEL_15;
    v27 = P;
    v28 = KeWaitForSingleObject(
            (char *)P + 16,
            Executive,
            1,
            0,
            (PLARGE_INTEGER)((unsigned __int64)&v67 & -(__int64)((ExitStatus & 1) != 0)));
    if ( v28 )
      EnclaveReturnFrame = PspRemoveEnclaveThreadWait(v12, v27, v28);
    else
      EnclaveReturnFrame = v27[10];
    ExFreePoolWithTag(v27, 0);
    if ( EnclaveReturnFrame )
    {
      if ( EnclaveReturnFrame != 192
        && EnclaveReturnFrame != -1073740526
        && (unsigned int)(EnclaveReturnFrame - 257) > 1 )
      {
        EnclaveReturnFrame = -1073741749;
      }
      goto LABEL_15;
    }
    --CurrentThread->KernelApcDisable;
    v19 = (volatile signed __int64 *)(v12 + 112);
    v31 = (AutoBoost *)KeAbPreAcquire((__int64)(v12 + 112), 0LL, 0LL, v30);
    v33 = v31;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v12 + 28, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12 + 14, v31, (__int64)(v12 + 112));
    if ( v33 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v33, v32);
      else
        *((_BYTE *)v33 + 10) = 1;
    }
    goto LABEL_59;
  }
  return result;
}
