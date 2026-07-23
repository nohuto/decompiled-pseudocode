/*
 * XREFs of MiProtoFaultApplyPrivateFixups @ 0x1402BC040
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402BAC10 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x14029B1F0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x1402D0080 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiMakeTransitionPteValid @ 0x1402E5640 (MiMakeTransitionPteValid.c)
 *     MiLockAndDecrementShareCount @ 0x1402EB25C (MiLockAndDecrementShareCount.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     MiLocateCloneAddress @ 0x14036D7EC (MiLocateCloneAddress.c)
 *     MiSystemImageHasPrivateFixups @ 0x140492D78 (MiSystemImageHasPrivateFixups.c)
 *     MiPrivateFixup @ 0x14051FCB0 (MiPrivateFixup.c)
 */

__int64 __fastcall MiProtoFaultApplyPrivateFixups(__int64 a1, unsigned __int64 Blink_high)
{
  ULONG_PTR v2; // r14
  unsigned __int64 *v3; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rbp
  __int64 HasPrivateFixups; // rax
  unsigned __int64 v9; // rbx
  int v10; // ecx
  __int64 v11; // rdx
  _DWORD *v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rcx
  _DWORD *v15; // r8
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  _KPROCESS *v18; // r9
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int64 v20; // r8
  volatile _KAFFINITY_EX *ActiveProcessors; // r8
  int v22; // eax
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  unsigned __int64 i; // rdi
  volatile signed __int32 *v26; // rcx
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rax
  int v29; // ebx
  unsigned __int64 TransitionPteValid; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v35; // [rsp+70h] [rbp+8h] BYREF
  __int64 v36; // [rsp+78h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(unsigned __int64 **)a1;
  v5 = *(_QWORD *)(a1 + 16);
  v36 = 0LL;
  v6 = *(_QWORD *)(v2 + 8);
  v7 = *v3;
  v35 = 0LL;
  if ( v6 > 0 && (*(_QWORD *)(v2 + 40) & 0x10000000000LL) == 0 )
    return 0LL;
  if ( v7 >= 0xFFFF800000000000uLL )
  {
    if ( !v5 || (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
    {
      HasPrivateFixups = MiSystemImageHasPrivateFixups(v7, &v36, &v35);
      if ( HasPrivateFixups )
      {
        LODWORD(v9) = v35;
        v10 = 1;
        v11 = v36;
        goto LABEL_62;
      }
    }
    return 0LL;
  }
  v12 = (_DWORD *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( (*(_DWORD *)(v5 + 56) & 0x20) != 0 )
      *v12 |= 4u;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *v12 |= 4u;
    Process = CurrentThread->ApcState.Process;
    if ( Process[1].IdealProcessorAssignmentBlock
      && MiLocateCloneAddress(Process, *(_QWORD *)(v2 + 8) | 0x8000000000000000uLL) )
    {
      *v12 &= ~4u;
    }
  }
  if ( (*v12 & 4) == 0 )
    return 0LL;
  v35 = 0LL;
  if ( !KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[28] )
    return 0LL;
  v15 = (_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[8] + 1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v15);
    v17 = *v15 & 0x7FFFFFFF;
    v16 = _InterlockedCompareExchange(v15, v17 + 1, v17);
    if ( v17 != v16 )
    {
      while ( v16 >= 0 )
      {
        Blink_high = (unsigned int)v16;
        v16 = _InterlockedCompareExchange(v15, v16 + 1, v16);
        if ( v16 == (_DWORD)Blink_high )
          goto LABEL_24;
      }
      LOBYTE(Blink_high) = -1;
      ExpWaitForSpinLockSharedAndAcquire(v15, Blink_high, (__int64)v15);
    }
  }
  else
  {
    LOBYTE(Blink_high) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v15, Blink_high);
  }
LABEL_24:
  v18 = KeGetCurrentThread()->ApcState.Process;
  Flink = v18[3].Header.WaitListHead.Flink;
  if ( Flink )
  {
    Blink_high = LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32);
    v20 = v7 >> 12;
    if ( v7 >> 12 < Blink_high
      || (Blink_high = HIDWORD(Flink[1].Blink), v20 > (Blink_high | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32))) )
    {
      Flink = *(struct _LIST_ENTRY **)&v18[3].Header.Lock;
      if ( !Flink )
        goto LABEL_35;
      do
      {
        Blink_high = HIDWORD(Flink[1].Blink);
        if ( v20 <= (Blink_high | ((unsigned __int64)BYTE1(Flink[2].Flink) << 32)) )
        {
          Blink_high = LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32);
          if ( v20 >= Blink_high )
            break;
          Flink = Flink->Flink;
        }
        else
        {
          Flink = Flink->Blink;
        }
      }
      while ( Flink );
      if ( Flink )
        v18[3].Header.WaitListHead.Flink = Flink;
      else
LABEL_35:
        Flink = 0LL;
    }
  }
  else
  {
    Flink = 0LL;
  }
  ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8] + 1, 0xBFFFFFFF);
    _InterlockedDecrement((volatile signed __int32 *)&ActiveProcessors[4].StaticBitmap[8] + 1);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&ActiveProcessors[4].StaticBitmap[8] + 4, retaddr);
  }
  if ( !Flink )
    return 0LL;
  v22 = (int)Flink[3].Flink;
  if ( (v22 & 0x80000) != 0 || (v22 & 0x1C) != 8 || (v22 & 0x100000) == 0 )
    return 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(&Flink[4]);
    v24 = (__int64)Flink[4].Flink & 0x7FFFFFFF;
    v23 = _InterlockedCompareExchange((volatile signed __int32 *)&Flink[4], v24 + 1, v24);
    if ( v24 != v23 )
    {
      while ( v23 >= 0 )
      {
        Blink_high = (unsigned int)v23;
        v23 = _InterlockedCompareExchange((volatile signed __int32 *)&Flink[4], v23 + 1, v23);
        if ( v23 == (_DWORD)Blink_high )
          goto LABEL_53;
      }
      LOBYTE(Blink_high) = -1;
      ExpWaitForSpinLockSharedAndAcquire((signed __int32 *)&Flink[4], Blink_high, (__int64)ActiveProcessors);
    }
  }
  else
  {
    LOBYTE(Blink_high) = -1;
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Flink[4], Blink_high);
  }
LABEL_53:
  for ( i = (unsigned __int64)Flink[3].Blink & 0xFFFFFFFFFFFFFFF0uLL; i; i = *(_QWORD *)i )
  {
    if ( _bittest16((const signed __int16 *)(i + 8), 0xAu) )
      break;
  }
  v26 = (volatile signed __int32 *)&Flink[4];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(v26, 0xBFFFFFFF);
    _InterlockedDecrement(v26);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v26, retaddr);
  }
  v27 = Flink[5].Flink;
  v9 = (v7 >> 12)
     + (((char *)Flink[5].Blink - (char *)v27->Flink[8].Blink) >> 3)
     - (LODWORD(Flink[1].Blink) | ((unsigned __int64)LOBYTE(Flink[2].Flink) << 32));
  if ( !_bittest64(*(const signed __int64 **)(i + 32), v9) )
    return 0LL;
  v28 = MiOffsetToProtos(v27->Flink, v9 << 12, &v35);
  v10 = *(_DWORD *)(i + 40);
  v11 = v28;
  HasPrivateFixups = *(_QWORD *)(i + 48);
LABEL_62:
  *(_DWORD *)(a1 + 64) |= 2u;
  *(_QWORD *)(a1 + 8) = v11;
  v29 = MiPrivateFixup((_DWORD)v3, v11, v9, v2, HasPrivateFixups, v10);
  MiLockAndDecrementShareCount(v2);
  if ( v29 == 297 || v29 == -1073741670 )
  {
    MiLockAndDecrementShareCount(*(_QWORD *)(a1 + 40));
    if ( v29 == 297 )
      return (unsigned int)-1073740748;
  }
  else if ( v29 >= 0 )
  {
    TransitionPteValid = MiMakeTransitionPteValid(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    *(_QWORD *)(a1 + 56) = TransitionPteValid;
    v31 = (TransitionPteValid >> 12) & 0xFFFFFFFFFFLL;
    v32 = 48 * v31 - 0x220000000000LL;
    if ( v7 >= 0xFFFF800000000000uLL && (*(_DWORD *)(v32 + 32) & 0x8000000) != 0 )
      *(_DWORD *)(a1 + 48) |= 2u;
    *(_DWORD *)(a1 + 64) &= ~1u;
    *(_QWORD *)(a1 + 32) = v32;
    *(_QWORD *)(a1 + 24) = v31;
    *(_DWORD *)(a1 + 52) = 0;
    return 0LL;
  }
  return (unsigned int)v29;
}
