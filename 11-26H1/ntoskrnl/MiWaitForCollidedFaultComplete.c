/*
 * XREFs of MiWaitForCollidedFaultComplete @ 0x14038B588
 * Callers:
 *     MiFlushWaitForReadInProgress @ 0x140337838 (MiFlushWaitForReadInProgress.c)
 *     MiTranslatePageForCopy @ 0x140338D4C (MiTranslatePageForCopy.c)
 *     MiHandleCollidedFault @ 0x14038B418 (MiHandleCollidedFault.c)
 *     MiWalkReadInProgressPte @ 0x1407056C8 (MiWalkReadInProgressPte.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeAbPostReleaseEx @ 0x140272670 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x140278AE0 (KeAbPreWait.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     MiObtainProtoReference @ 0x1402E5B70 (MiObtainProtoReference.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402E8BF0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAddLockedPageCharge @ 0x1402F5D30 (MiAddLockedPageCharge.c)
 *     MiImagePageOk @ 0x1402F7140 (MiImagePageOk.c)
 *     MiReadPteShadow @ 0x140314FF0 (MiReadPteShadow.c)
 *     MiRelockProtoPoolPage @ 0x14031BFF4 (MiRelockProtoPoolPage.c)
 *     MiIsFaultPteIntact @ 0x14031C508 (MiIsFaultPteIntact.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiReturnPfnReferenceCountAtDpc @ 0x14031E324 (MiReturnPfnReferenceCountAtDpc.c)
 *     MiRelockFaultState @ 0x14038C0A0 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiWaitForCollidedFaultComplete(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4,
        int *a5)
{
  unsigned __int64 v6; // r12
  __int64 *v7; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v11; // rdx
  int *v12; // r14
  unsigned __int64 v13; // rbp
  __int64 v14; // r15
  int v15; // eax
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  _QWORD *v18; // r13
  struct _KLOCK_ENTRIES *v19; // r9
  __int64 v20; // rdx
  char v21; // bp
  unsigned __int8 *v22; // rdx
  __int64 v23; // r8
  __int64 v25; // r8
  __int64 v26; // r9
  AutoBoost *v27; // rax
  struct _KLOCK_ENTRY *v28; // rdx
  __int64 CurrentIrql; // rcx
  unsigned int v30; // ebx
  __int64 v32; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v33; // [rsp+90h] [rbp+18h]
  char v34; // [rsp+98h] [rbp+20h] BYREF

  v6 = (unsigned __int8)a4;
  v7 = (__int64 *)(*(_QWORD *)(a2 + 8) | 0x8000000000000000uLL);
  v33 = v7;
  PteShadow = *v7;
  v11 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v7 >= 0xFFFFF6FB7DBED000uLL )
  {
    v11 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v7 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow((unsigned __int64)v7, *v7);
  }
  v12 = a5;
  v13 = 0LL;
  v14 = *(_QWORD *)a2;
  v32 = PteShadow;
  v15 = *a5;
  if ( *a5 )
    goto LABEL_9;
  if ( !(unsigned int)MiAddLockedPageCharge(a2, 2, a3, (unsigned __int64)a4) )
    *v12 = 1;
  v15 = *v12;
  if ( *v12 )
  {
LABEL_9:
    if ( !a3 )
      goto LABEL_12;
LABEL_10:
    if ( v15 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( !a3 )
    goto LABEL_12;
  if ( (unsigned __int16)*(_DWORD *)(a3 + 32) >= 0x7FFFu )
  {
    *v12 = 1;
    MiRemoveLockedPageChargeAndDecRef(a2);
    v15 = *v12;
    goto LABEL_10;
  }
LABEL_11:
  MiObtainProtoReference(a3, 1);
LABEL_12:
  _InterlockedAdd((volatile signed __int32 *)(v14 + 144), 1u);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    MiUnlockProtoPoolPage(a3, v6);
  }
  else if ( (unsigned __int8)v6 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    __writecr8(v6);
  }
  v16 = a1 + 7;
  a5 = 0LL;
  if ( *v16 )
  {
    LOBYTE(v11) = 17;
    a5 = (int *)MiReleaseFaultState(v16, v11, 0LL);
  }
  v17 = *(_QWORD *)(v14 + 192);
  if ( v17 )
  {
    v27 = (AutoBoost *)KeAbPreAcquire(v17, 0LL, 0LL, a4);
    v13 = (unsigned __int64)v27;
    v18 = v16;
    if ( v27 )
    {
      KeAbPreWait(v27, v28);
      v18 = a1 + 7;
    }
  }
  else
  {
    v18 = v16;
  }
  KeWaitForSingleObject((PVOID)(v14 + 24), WrPageIn, 0, 0, 0LL);
  if ( v13 )
  {
    KeAbPreAcquire(*(_QWORD *)(v14 + 192), v13, 0LL, v19);
    KeAbPostReleaseEx(*(struct _KTHREAD **)(v14 + 192), v13, v25, v26);
  }
  MiFreeInPageSupportBlock((PSLIST_ENTRY)(v14 - 32));
  if ( *v18 )
  {
    v21 = 1;
    MiRelockFaultState(v16, a5);
  }
  else
  {
    v21 = 0;
  }
  if ( *v12 )
    return 3221226548LL;
  if ( a3 )
  {
    v22 = (unsigned __int8 *)&v34;
    if ( v21 )
      v22 = 0LL;
    MiRelockProtoPoolPage(a3, v22);
    MiReturnPfnReferenceCountAtDpc(a3);
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else if ( (_BYTE)v6 == 2 )
  {
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v20) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v20);
    }
    LODWORD(a5) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&a5);
      while ( *(__int64 *)(a2 + 24) < 0 );
    }
  }
  if ( (*(_QWORD *)(a2 + 24) & 0x4000000000000000LL) != 0 || (*(_DWORD *)(a2 + 32) & 0x40000000) != 0 )
  {
    v30 = (*(_BYTE *)(a2 + 35) & 0x10) != 0 ? 0xFFFFFBE3 : 0;
    MiRemoveLockedPageChargeAndDecRef(a2);
    return v30 - 1073740748;
  }
  else
  {
    if ( !(unsigned int)MiIsFaultPteIntact((__int64)a1, *a1, v33, &v32) || !MiImagePageOk(*a1, a2, v23, 0LL) )
    {
      MiRemoveLockedPageChargeAndDecRef(a2);
      return 3221226548LL;
    }
    return 0LL;
  }
}
