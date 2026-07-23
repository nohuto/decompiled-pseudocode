/*
 * XREFs of KiWaitForAllObjects @ 0x1403CAD68
 * Callers:
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 * Callees:
 *     KiCheckWaitNext @ 0x140221A60 (KiCheckWaitNext.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KeAbEncodeLockHandle @ 0x14025FF70 (KeAbEncodeLockHandle.c)
 *     KeAbPostReleaseEx @ 0x140271BE0 (KeAbPostReleaseEx.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x140278050 (KeAbPreWait.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     KiCheckDueTimeExpired @ 0x1403CACD0 (KiCheckDueTimeExpired.c)
 *     KiBeginThreadWait @ 0x1403CC710 (KiBeginThreadWait.c)
 *     ?KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z @ 0x14043CF70 (-KiAbpSetEntryValue@AutoBoost@@YAXPECEEK@Z.c)
 *     KiUnlockKobjectArray @ 0x1404821B0 (KiUnlockKobjectArray.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeAbDecodeLockHandle @ 0x1405334B8 (KeAbDecodeLockHandle.c)
 *     KiWaitSatisfyAny @ 0x1405FA938 (KiWaitSatisfyAny.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiWaitForAllObjects(
        unsigned int a1,
        volatile signed __int32 **a2,
        int a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 *a7)
{
  unsigned int v8; // edi
  volatile signed __int32 *v9; // r12
  unsigned int v10; // edx
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v12; // ebx
  __int64 v13; // rdx
  volatile __int64 WaitStatus; // rsi
  __int64 v15; // r8
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int64 v17; // rsi
  volatile signed __int32 *v18; // r13
  __int64 v19; // rdx
  __int64 InitialStack; // r8
  volatile signed __int32 **v21; // rsi
  __int64 v22; // r12
  __int64 *v23; // r13
  struct _KTHREAD **v24; // r11
  struct _KTHREAD **v25; // rdx
  __int64 v26; // r10
  char *v27; // rcx
  struct _KTHREAD *v28; // rax
  __int64 v29; // r9
  int v30; // edx
  struct _KTHREAD *v31; // rcx
  struct _KLOCK_ENTRIES *v32; // r9
  struct _KTHREAD **v33; // r11
  unsigned int v34; // edx
  __int64 *v35; // rcx
  __int64 v36; // rax
  __int64 **v37; // r8
  volatile signed __int32 **v38; // rcx
  __int64 v39; // rdx
  volatile signed __int32 *v41; // rcx
  volatile signed __int32 **v42; // rdx
  __int64 v43; // r8
  unsigned int v44; // esi
  unsigned __int64 v45; // r12
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // r13d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 *v51; // r8
  volatile unsigned __int8 DpcRoutineActive; // al
  __int64 v53; // r9
  unsigned __int64 v54; // rdi
  struct _KTHREAD **v55; // r14
  __int64 v56; // rsi
  unsigned __int64 v57; // r9
  unsigned int v58; // ecx
  __int64 v59; // r10
  unsigned __int64 v60; // r11
  __int64 v61; // rax
  unsigned __int64 v62; // rax
  char v63; // r13
  AutoBoost *v64; // rax
  struct _KLOCK_ENTRY *v65; // rdx
  __int64 v66; // r15
  char v67; // al
  __int64 v68; // rcx
  unsigned __int64 v69; // r9
  struct _KLOCK_ENTRIES *v70; // r9
  unsigned __int64 v71; // r15
  volatile unsigned __int8 *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r9
  bool v76; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v78; // [rsp+38h] [rbp-C8h]
  struct _KTHREAD **v79; // [rsp+40h] [rbp-C0h]
  unsigned int v80; // [rsp+48h] [rbp-B8h]
  int v81; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v82; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v83; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 *v84; // [rsp+68h] [rbp-98h]
  struct _KTHREAD *v85; // [rsp+70h] [rbp-90h]
  volatile signed __int32 *v86; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v87[512]; // [rsp+88h] [rbp-78h] BYREF

  v81 = a3;
  v8 = a1;
  v79 = (struct _KTHREAD **)a2;
  v80 = a1;
  v83 = a7;
  v82 = 0LL;
  memset_0(v87, 0, 0x1F8uLL);
  v9 = *a2;
  v10 = 1;
  v77 = 0;
  v84 = v9;
  v86 = v9;
  if ( v8 > 1 )
  {
    v51 = (unsigned __int64 *)(a2 + 1);
    do
    {
      v57 = *v51;
      v58 = v10;
      do
      {
        v59 = v58 - 1;
        v60 = *(_QWORD *)&v87[8 * v59 - 8];
        if ( v60 <= v57 )
          break;
        v61 = v58--;
        *(_QWORD *)&v87[8 * v61 - 8] = v60;
      }
      while ( (_DWORD)v59 );
      ++v10;
      ++v51;
      *(_QWORD *)&v87[8 * v58 - 8] = v57;
    }
    while ( v10 < v8 );
    v9 = v86;
    v84 = v86;
  }
  CurrentThread = KeGetCurrentThread();
  v85 = CurrentThread;
  v12 = KiCheckWaitNext((__int64)CurrentThread, a6, 0, &v82, &v77);
LABEL_3:
  LODWORD(WaitStatus) = KiBeginThreadWait((ULONG_PTR)CurrentThread, v12);
  if ( !(_DWORD)WaitStatus )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = 0LL;
    v78 = 0LL;
    v18 = v9;
    KiAcquireKobjectLockSafe(v9, v13, v15);
    if ( v8 <= 1 )
    {
      v29 = 0LL;
      if ( !v8 )
      {
        v24 = v79;
        v23 = v83;
LABEL_18:
        CurrentThread->WaitStatus = 0LL;
        v30 = 0;
        CurrentThread->AbWaitObject = 0LL;
        while ( 1 )
        {
          v31 = v24[v30];
          if ( (v31->Header.Type & 0x7F) == 2 )
          {
            DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
            InitialStack = (__int64)v31->InitialStack;
            if ( CurrentThread == (struct _KTHREAD *)InitialStack
              && v31->Header.Size == DpcRoutineActive
              && v31->Header.SignalState == 0x80000000 )
            {
              KiUnlockKobjectArray(&v86, v8, InitialStack, 0LL);
              KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v12, v53);
              RtlRaiseStatus(-1073741423);
            }
            if ( v31->Header.SignalState <= 0
              && (CurrentThread != (struct _KTHREAD *)InitialStack || v31->Header.Size != DpcRoutineActive) )
            {
LABEL_21:
              if ( v30 == v8 )
              {
                if ( v8 )
                {
                  v56 = v8;
                  do
                  {
                    KiWaitSatisfyAny(*v24);
                    v24 = ++v79;
                    --v56;
                  }
                  while ( v56 );
                }
                KiUnlockKobjectArray(&v86, v8, InitialStack, v29);
                WaitStatus = CurrentThread->WaitStatus;
                CurrentThread->AbWaitObject = 0LL;
                KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v12, v75);
              }
              else if ( (unsigned int)KiCheckDueTimeExpired((__int64)CurrentThread, v77, v82) )
              {
                _InterlockedAnd(v9, 0xFFFFFF7F);
                if ( v8 > 1 )
                {
                  v38 = (volatile signed __int32 **)v87;
                  v39 = v8 - 1;
                  do
                  {
                    if ( *v38 != v9 )
                    {
                      v9 = *v38;
                      _InterlockedAnd(*v38, 0xFFFFFF7F);
                    }
                    ++v38;
                    --v39;
                  }
                  while ( v39 );
                }
                KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread, v12, (__int64)v32);
                LODWORD(WaitStatus) = 258;
              }
              else
              {
                v34 = (unsigned int)v32;
                if ( v8 )
                {
                  v35 = v23;
                  do
                  {
                    v36 = v35[4] + 8;
                    v37 = *(__int64 ***)(v35[4] + 16);
                    if ( *v37 != (__int64 *)v36 )
                      __fastfail(3u);
                    *v35 = v36;
                    ++v34;
                    v35[1] = (__int64)v37;
                    *v37 = v35;
                    *(_QWORD *)(v36 + 8) = v35;
                    v35 += 6;
                  }
                  while ( v34 < v8 );
                }
                v41 = v9;
                _InterlockedAnd(v9, 0xFFFFFF7F);
                if ( v8 > 1 )
                {
                  v42 = (volatile signed __int32 **)v87;
                  v43 = v8 - 1;
                  do
                  {
                    if ( *v42 != v41 )
                    {
                      v41 = *v42;
                      _InterlockedAnd(*v42, 0xFFFFFF7F);
                    }
                    ++v42;
                    --v43;
                  }
                  while ( v43 );
                }
                v44 = (unsigned int)v32;
                CurrentThread->WaitBlockCount = v8;
                v45 = (unsigned __int64)v32;
                if ( (struct _KLOCK_ENTRIES *)v78 != v32 )
                {
                  v54 = v78;
                  do
                  {
                    _BitScanForward64(&v62, v54);
                    v63 = v62;
                    _bittestandreset64((__int64 *)&v54, (unsigned int)v62);
                    v64 = (AutoBoost *)KeAbPreAcquire((__int64)v33[v62], 0LL, 0LL, v32);
                    v66 = (__int64)v64;
                    if ( !v64 )
                      break;
                    v45 |= 1LL << v63;
                    KeAbPreWait(v64, v65);
                    v67 = KeAbEncodeLockHandle(v66);
                    v33 = v79;
                    v68 = v44++;
                    v87[v68 + 504] = v67;
                  }
                  while ( v54 );
                  v8 = v80;
                  v32 = 0LL;
                  CurrentThread = v85;
                }
                v46 = KiCommitThreadWait((LegacyAutoBoost *)CurrentThread, v83, v77, v82, v12, v32);
                v48 = 0LL;
                LODWORD(WaitStatus) = v46;
                v12 = 0;
                v76 = 1;
                if ( v46 >= 0x40 )
                {
                  v47 = v46 - 128;
                  if ( (unsigned int)v47 > 0x3F )
                    v76 = 0;
                }
                CurrentThread->AbWaitObject = 0LL;
                v49 = 0;
                if ( v45 )
                {
                  v55 = v79;
                  do
                  {
                    _BitScanForward64(&v69, v45);
                    v45 &= ~(1LL << v69);
                    v78 = v69;
                    v71 = KeAbDecodeLockHandle((unsigned __int8)v87[v49 + 504]);
                    KeAbPreAcquire((__int64)v55[(_QWORD)v70], v71, 0LL, v70);
                    if ( v76 )
                    {
                      v47 = KiAbpGlobalState;
                      if ( (KiAbpGlobalState & 1) != 0 )
                      {
                        LOBYTE(v72) = 2;
                        AutoBoost::KiAbpSetEntryValue((AutoBoost *)(v71 + 33), v72, 1u, v74);
                      }
                      else
                      {
                        *(_BYTE *)(v71 + 10) = 1;
                      }
                    }
                    else
                    {
                      KeAbPostReleaseEx(v55[v78], v71, v73, v74);
                    }
                    ++v49;
                  }
                  while ( v45 );
                  v8 = v80;
                  v48 = 0LL;
                  CurrentThread = v85;
                }
                if ( (_DWORD)WaitStatus == 256 )
                {
                  CurrentIrql = KeGetCurrentIrql();
                  if ( CurrentIrql != 2 )
                    __writecr8(2uLL);
                  if ( KiIrqlFlags )
                  {
                    LOBYTE(v48) = 2;
                    LOBYTE(v47) = CurrentIrql;
                    KiRaiseIrqlProcessIrqlFlags(v47, v48);
                  }
                  v9 = v84;
                  CurrentThread->WaitIrql = CurrentIrql;
                  goto LABEL_3;
                }
              }
              return (unsigned int)WaitStatus;
            }
          }
          else if ( v31->Header.SignalState <= 0 )
          {
            goto LABEL_21;
          }
          if ( ++v30 >= v8 )
            goto LABEL_21;
        }
      }
    }
    else
    {
      v21 = (volatile signed __int32 **)v87;
      v22 = v8 - 1;
      do
      {
        if ( *v21 != v18 )
        {
          v18 = *v21;
          KiAcquireKobjectLockSafe(*v21, v19, InitialStack);
        }
        ++v21;
        --v22;
      }
      while ( v22 );
      v17 = v78;
    }
    v23 = v83;
    v24 = v79;
    InitialStack = 0LL;
    v25 = v79;
    v26 = v8;
    v27 = (char *)v83 + 17;
    do
    {
      v28 = *v25;
      *(v27 - 1) = 0;
      *v27 = 4;
      *(_WORD *)(v27 + 1) = 0;
      if ( CurrentThread )
        *(_QWORD *)(v27 + 7) = CurrentThread;
      *(_QWORD *)(v27 + 15) = v28;
      v27 += 48;
      if ( ((*v25)->Header.Type & 0x7F) == 2 && ((__int64)(*v25)->StackLimit & 2) != 0 )
        v17 |= 1LL << InitialStack;
      ++InitialStack;
      ++v25;
      --v26;
    }
    while ( v26 );
    v9 = v84;
    v29 = 0LL;
    v78 = v17;
    goto LABEL_18;
  }
  return (unsigned int)WaitStatus;
}
