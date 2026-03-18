/*
 * XREFs of KiInterruptDispatchCommon @ 0x1402C3218
 * Callers:
 *     IopPassiveInterruptWorker @ 0x1402C4E20 (IopPassiveInterruptWorker.c)
 *     KeDispatchSecondaryInterrupt @ 0x1404AF590 (KeDispatchSecondaryInterrupt.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 *     KiProcessDisconnectList @ 0x1402C3660 (KiProcessDisconnectList.c)
 *     IoProcessPassiveInterrupts @ 0x1402C36B8 (IoProcessPassiveInterrupts.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402C3770 (KiInvokeInterruptServiceRoutine.c)
 *     KiProcessPendingDisconnect @ 0x1402C3D3C (KiProcessPendingDisconnect.c)
 *     KiGetInterruptObjectFromVector @ 0x1402C3D98 (KiGetInterruptObjectFromVector.c)
 *     HalpReleaseHighLevelLock @ 0x1402C4DEC (HalpReleaseHighLevelLock.c)
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037A1C0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037C490 (KeRevertToUserGroupAffinityThread.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x140423208 (KiDisconnectSecondaryInterruptInternal.c)
 *     KiDisconnectInterruptInternal @ 0x140423FBC (KiDisconnectInterruptInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

char __fastcall KiInterruptDispatchCommon(unsigned int a1, unsigned int a2, char a3, struct _LIST_ENTRY *a4, int *a5)
{
  __int64 v7; // rdx
  int v8; // r13d
  struct _LIST_ENTRY *v10; // r15
  char v11; // bp
  __int64 v12; // rcx
  __int64 v13; // rbp
  KSPIN_LOCK *v14; // r12
  unsigned __int8 v15; // si
  __int64 v16; // rdx
  struct _LIST_ENTRY *v17; // r8
  struct _LIST_ENTRY *Blink; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int16 Group; // ax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct _LIST_ENTRY *v23; // rbx
  struct _LIST_ENTRY *v24; // rbx
  char v25; // r14
  unsigned int v26; // r12d
  KSPIN_LOCK *v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // rcx
  struct _LIST_ENTRY *v30; // rbp
  __int64 v32; // rcx
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v34; // rdx
  int v35; // eax
  struct _LIST_ENTRY **p_Blink; // rdi
  struct _LIST_ENTRY *v37; // rax
  char v38; // [rsp+20h] [rbp-A8h]
  char v39; // [rsp+21h] [rbp-A7h]
  unsigned int v41; // [rsp+28h] [rbp-A0h]
  KSPIN_LOCK *SpinLock; // [rsp+30h] [rbp-98h]
  int Blink_high; // [rsp+3Ch] [rbp-8Ch]
  unsigned __int8 CurrentIrql; // [rsp+40h] [rbp-88h]
  struct _GROUP_AFFINITY Affinity; // [rsp+50h] [rbp-78h] BYREF
  __int128 v47; // [rsp+60h] [rbp-68h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+70h] [rbp-58h] BYREF

  v7 = 0LL;
  v8 = 0;
  v47 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  v10 = (struct _LIST_ENTRY *)&v47;
  v39 = 0;
  if ( a4 )
    v10 = a4;
  v38 = 0;
  v41 = 0;
  v11 = 0;
  v12 = 12LL;
  v10->Blink = v10;
  v10->Flink = v10;
  PreviousAffinity = 0LL;
  if ( a1 )
  {
    v13 = a2 - 256;
    v14 = (KSPIN_LOCK *)&KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[3 * v13];
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
    Blink = 0LL;
    if ( (unsigned int)v13 < 0x100 )
    {
      _mm_lfence();
      Blink = KiDpcCorralLock.WaitBlock[2].WaitListEntry.Flink[3 * v13 + 2].Blink;
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
    Blink = (struct _LIST_ENTRY *)KiGetInterruptObjectFromVector(a2);
  }
  if ( Blink )
  {
    v16 = 0xFFFFLL;
    ++HIWORD(Blink[6].Flink);
    v23 = Blink;
    if ( (a3 & 1) == 0 )
      goto LABEL_24;
    while ( BYTE5(v23[5].Blink) != (_BYTE)v17 )
    {
      v24 = v23->Blink;
      if ( !v24 )
        goto LABEL_22;
      v23 = (struct _LIST_ENTRY *)((char *)v24 - 8);
      if ( v23 == Blink )
      {
        if ( BYTE5(v23[5].Blink) == (_BYTE)v17 )
          break;
LABEL_22:
        v23 = v17;
        break;
      }
    }
    if ( v23 )
    {
LABEL_24:
      Blink_high = HIDWORD(Blink[6].Blink);
LABEL_25:
      v25 = (char)v17;
      v26 = (unsigned int)v17;
      while ( CurrentIrql <= 2u || BYTE5(v23[5].Blink) != (_BYTE)v17 )
      {
        if ( ((__int64)v23[6].Blink & 1) != 0 )
        {
          v30 = v23->Blink;
        }
        else
        {
          ++HIWORD(v23[6].Flink);
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
          --HIWORD(v23[6].Flink);
          v30 = v23->Blink;
          KiProcessPendingDisconnect(a1, v23, v10);
          LODWORD(v17) = 0;
        }
        v23 = (struct _LIST_ENTRY *)((char *)v30 - 8);
        v11 = v38;
        if ( Blink_high == (_DWORD)v17 )
        {
          if ( v38 || v23 == Blink )
            goto LABEL_41;
        }
        else
        {
          if ( v38 )
            v25 = 1;
          if ( v23 == Blink )
          {
            if ( !v25 || v26 <= 1 )
            {
              v11 = 1;
              goto LABEL_41;
            }
            v11 = (char)v17;
            v38 = (char)v17;
            goto LABEL_25;
          }
        }
      }
      v39 = 1;
      if ( v8 != 2 )
        v8 = 1;
      v41 = (unsigned int)v23[5].Blink;
LABEL_41:
      v16 = 0xFFFFLL;
    }
    --HIWORD(Blink[6].Flink);
    if ( ((__int64)Blink[6].Blink & 2) != 0 && !HIWORD(Blink[6].Flink) )
    {
      Flink = Blink[9].Flink;
      v34 = Flink->Blink;
      if ( a1 == (_DWORD)v17 )
        v35 = KiDisconnectInterruptInternal(Blink, v34);
      else
        v35 = KiDisconnectSecondaryInterruptInternal(Blink, v34);
      LODWORD(Flink[1].Flink) = v35;
      p_Blink = &Blink->Blink;
      v37 = v10->Blink;
      if ( v37->Flink != v10 )
        __fastfail(3u);
      *p_Blink = v10;
      LODWORD(v17) = 0;
      p_Blink[1] = v37;
      v37->Flink = (struct _LIST_ENTRY *)p_Blink;
      v10->Blink = (struct _LIST_ENTRY *)p_Blink;
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
