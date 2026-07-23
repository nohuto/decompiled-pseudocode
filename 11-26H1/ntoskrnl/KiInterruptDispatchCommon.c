/*
 * XREFs of KiInterruptDispatchCommon @ 0x14030DED8
 * Callers:
 *     IopPassiveInterruptWorker @ 0x14030FAE0 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x1404A8C20 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiProcessDisconnectList @ 0x14030E320 (KiProcessDisconnectList.c)
 *     IoProcessPassiveInterrupts @ 0x14030E378 (IoProcessPassiveInterrupts.c)
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessPendingDisconnect @ 0x14030E9FC (KiProcessPendingDisconnect.c)
 *     KiGetInterruptObjectFromVector @ 0x14030EA58 (KiGetInterruptObjectFromVector.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x1404302F8 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptInternal @ 0x1404310AC (KiDisconnectInterruptInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, __int128 *a4, int *a5)
{
  __int64 v7; // rdx
  int v8; // r13d
  __int128 *v10; // r15
  char v11; // bp
  __int64 v12; // rcx
  __int64 v13; // rbp
  KSPIN_LOCK *v14; // r12
  unsigned __int8 v15; // si
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 InterruptObjectFromVector; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int16 Group; // ax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  char v25; // r14
  unsigned int v26; // r12d
  KSPIN_LOCK *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rdx
  int v35; // eax
  __int128 **v36; // rdi
  __int128 **v37; // rax
  char v38; // [rsp+20h] [rbp-A8h]
  char v39; // [rsp+21h] [rbp-A7h]
  unsigned int v41; // [rsp+28h] [rbp-A0h]
  KSPIN_LOCK *SpinLock; // [rsp+30h] [rbp-98h]
  int v44; // [rsp+3Ch] [rbp-8Ch]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-88h]
  _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-78h] BYREF
  __int128 v47; // [rsp+60h] [rbp-68h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-58h] BYREF

  v7 = 0LL;
  v8 = 0;
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = &v47;
  v39 = 0;
  if ( a4 )
    v10 = a4;
  v38 = 0;
  v41 = 0;
  v11 = 0;
  v12 = 12LL;
  *((_QWORD *)v10 + 1) = v10;
  *(_QWORD *)v10 = v10;
  PreviousAffinity = 0LL;
  if ( a1 )
  {
    v13 = a2 - 256;
    v14 = (KSPIN_LOCK *)(48 * v13 + KiDpcCorralLock.Timer.DueTime.QuadPart);
    SpinLock = v14;
    v15 = KeGetCurrentIrql();
    if ( v15 != 12 )
      __writecr8(0xCuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v7) = 12;
      LOBYTE(v12) = v15;
      KiRaiseIrqlProcessIrqlFlags(v12, v7);
    }
    KxAcquireSpinLock(v14);
    v17 = 0LL;
    InterruptObjectFromVector = 0LL;
    if ( (unsigned int)v13 < 0x100 )
    {
      _mm_lfence();
      InterruptObjectFromVector = *(_QWORD *)(48 * v13 + KiDpcCorralLock.Timer.DueTime.QuadPart + 40);
    }
    v11 = 0;
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    Affinity = 0LL;
    SpinLock = 0LL;
    Group = CurrentPrcb->Group;
    LOBYTE(CurrentPrcb) = CurrentPrcb->GroupIndex;
    Affinity.Group = Group;
    Affinity.Mask = 1LL << (char)CurrentPrcb;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
    v15 = KeGetCurrentIrql();
    if ( v15 != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = 15;
      LOBYTE(v22) = v15;
      KiRaiseIrqlProcessIrqlFlags(v22, v21);
    }
    InterruptObjectFromVector = KiGetInterruptObjectFromVector(a2);
  }
  if ( InterruptObjectFromVector )
  {
    v16 = 0xFFFFLL;
    ++*(_WORD *)(InterruptObjectFromVector + 102);
    v23 = InterruptObjectFromVector;
    if ( (a3 & 1) == 0 )
      goto LABEL_24;
    while ( *(_BYTE *)(v23 + 93) != (_BYTE)v17 )
    {
      v24 = *(_QWORD *)(v23 + 8);
      if ( !v24 )
        goto LABEL_22;
      v23 = v24 - 8;
      if ( v23 == InterruptObjectFromVector )
      {
        if ( *(_BYTE *)(v23 + 93) == (_BYTE)v17 )
          break;
LABEL_22:
        v23 = v17;
        break;
      }
    }
    if ( v23 )
    {
LABEL_24:
      v44 = *(_DWORD *)(InterruptObjectFromVector + 108);
LABEL_25:
      v25 = v17;
      v26 = v17;
      while ( CurrentIrql <= 2u || *(_BYTE *)(v23 + 93) != (_BYTE)v17 )
      {
        if ( (*(_DWORD *)(v23 + 104) & 1) != 0 )
        {
          v30 = *(_QWORD *)(v23 + 8);
        }
        else
        {
          ++*(_WORD *)(v23 + 102);
          ++v26;
          if ( a1 == (_DWORD)v17 )
          {
            if ( KiIrqlFlags != (_DWORD)v17 )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
            v27 = SpinLock;
          }
          else
          {
            v27 = SpinLock;
            KxReleaseSpinLock(SpinLock);
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
          }
          __writecr8(v15);
          LOBYTE(v16) = v15;
          v38 = KiInvokeInterruptServiceRoutine(v23, v16, a2);
          v8 = 2;
          v15 = KeGetCurrentIrql();
          if ( a1 )
          {
            v29 = 12LL;
            if ( v15 != 12 )
              __writecr8(0xCuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v28) = 12;
              LOBYTE(v29) = v15;
              KiRaiseIrqlProcessIrqlFlags(v29, v28);
            }
            KxAcquireSpinLock(v27);
          }
          else
          {
            v32 = 15LL;
            if ( v15 != 15 )
              __writecr8(0xFuLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v28) = 15;
              LOBYTE(v32) = v15;
              KiRaiseIrqlProcessIrqlFlags(v32, v28);
            }
          }
          --*(_WORD *)(v23 + 102);
          v30 = *(_QWORD *)(v23 + 8);
          KiProcessPendingDisconnect(a1, v23, v10);
          LODWORD(v17) = 0;
        }
        v23 = v30 - 8;
        v11 = v38;
        if ( v44 == (_DWORD)v17 )
        {
          if ( v38 || v23 == InterruptObjectFromVector )
            goto LABEL_41;
        }
        else
        {
          if ( v38 )
            v25 = 1;
          if ( v23 == InterruptObjectFromVector )
          {
            if ( !v25 || v26 <= 1 )
            {
              v11 = 1;
              goto LABEL_41;
            }
            v11 = v17;
            v38 = v17;
            goto LABEL_25;
          }
        }
      }
      v39 = 1;
      if ( v8 != 2 )
        v8 = 1;
      v41 = *(_DWORD *)(v23 + 88);
LABEL_41:
      v16 = 0xFFFFLL;
    }
    --*(_WORD *)(InterruptObjectFromVector + 102);
    if ( (*(_DWORD *)(InterruptObjectFromVector + 104) & 2) != 0 && !*(_WORD *)(InterruptObjectFromVector + 102) )
    {
      v33 = *(_QWORD *)(InterruptObjectFromVector + 144);
      v34 = *(_QWORD *)(v33 + 8);
      if ( a1 == (_DWORD)v17 )
        v35 = KiDisconnectInterruptInternal(InterruptObjectFromVector, v34);
      else
        v35 = KiDisconnectSecondaryInterruptInternal(InterruptObjectFromVector, v34);
      *(_DWORD *)(v33 + 16) = v35;
      v36 = (__int128 **)(InterruptObjectFromVector + 8);
      v37 = (__int128 **)*((_QWORD *)v10 + 1);
      if ( *v37 != v10 )
        __fastfail(3u);
      *v36 = v10;
      LODWORD(v17) = 0;
      v36[1] = (__int128 *)v37;
      *v37 = (__int128 *)v36;
      *((_QWORD *)v10 + 1) = v36;
    }
  }
  if ( a1 == (_DWORD)v17 )
  {
    if ( KiIrqlFlags != (_DWORD)v17 )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v15);
    __writecr8(v15);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  }
  else
  {
    LOBYTE(v16) = v15;
    HalpReleaseHighLevelLock(SpinLock, v16);
  }
  if ( v39 )
    IoProcessPassiveInterrupts(v41);
  if ( CurrentIrql < 2u )
    KiProcessDisconnectList(v10);
  if ( a5 )
    *a5 = v8;
  return v11;
}
