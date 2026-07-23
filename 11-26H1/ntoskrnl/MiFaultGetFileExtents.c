/*
 * XREFs of MiFaultGetFileExtents @ 0x14050664C
 * Callers:
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A5B120 (MiPfPrepareReadList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     MiLockLeafPage @ 0x140298370 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 *     MiFreeInPageSupportBlock @ 0x14031F608 (MiFreeInPageSupportBlock.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 *     MiValidateInPage @ 0x14038DF04 (MiValidateInPage.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x14038FF58 (MiGetSessionIdForVa.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     MiReleaseFaultCharges @ 0x1404A5730 (MiReleaseFaultCharges.c)
 *     MiLookupFixupExtentByPte @ 0x1404C5484 (MiLookupFixupExtentByPte.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiRetainSubsection @ 0x140704598 (MiRetainSubsection.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAllocateFileExtents @ 0x140B62A58 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  int v4; // ebx
  ULONG_PTR v5; // r13
  void *v6; // r12
  __int64 v7; // r14
  unsigned int SessionIdForVa; // eax
  __int64 v9; // r9
  __int64 v10; // r15
  KIRQL v11; // di
  __int64 v12; // rbx
  volatile LONG *v13; // rcx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  NTSTATUS FileExtents; // eax
  __int64 v20; // r15
  __int64 v21; // rdx
  ULONG_PTR v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v32; // eax
  __int64 v33; // [rsp+30h] [rbp-48h] BYREF
  int v34; // [rsp+38h] [rbp-40h]
  __int64 v35; // [rsp+40h] [rbp-38h]
  __int64 v36; // [rsp+48h] [rbp-30h]
  int v38; // [rsp+C8h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+58h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp+60h]

  LOBYTE(v38) = 0;
  memset_0(&v33, 0, 0x40uLL);
  v4 = *(_DWORD *)(a2 + 188);
  v5 = *(_QWORD *)(a2 + 192);
  v6 = *(void **)(a2 + 240);
  BugCheckParameter2 = v5;
  v7 = *(_QWORD *)v5;
  if ( (*(_DWORD *)(v5 + 32) & 0x20000) != 0 && (*(_DWORD *)(v7 + 56) & 8) != 0 && (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(*(_QWORD *)(a2 + 232));
    v6 = (void *)(*(_QWORD *)(v5 + 8)
                + 8 * (((__int64)v6 - *(_QWORD *)(MiGetSharedProtos(v7, SessionIdForVa, v5) + 72)) >> 3));
  }
  if ( a1 )
  {
    MiRetainSubsection(v5);
    MiReleaseFaultState(a1 + 56, 0x11u, 0LL, v9);
  }
  v10 = a2;
  *(_DWORD *)(a2 + 188) = v4 | 0x80;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( (*(_DWORD *)(v5 + 32) & 0x20000) != 0 && (*(_DWORD *)(v7 + 56) & 8) != 0 && (*(_DWORD *)(v7 + 56) & 0x20) != 0
    || (*(_DWORD *)(v7 + 56) & 0x20) == 0 )
  {
LABEL_27:
    v10 = 0LL;
    goto LABEL_28;
  }
  if ( *(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48) )
  {
    LOBYTE(v38) = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
    v11 = v38;
    v12 = (__int64)MiLookupFixupExtentByPte(v7, v6);
    if ( v12 && (*(_BYTE *)v12 & 1) == 0 )
      v12 = 1LL;
    v13 = (volatile LONG *)(v7 + 72);
    if ( v11 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v13);
    else
      ExReleaseSpinLockShared(v13, v11);
    v5 = BugCheckParameter2;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        v14 = -1073740748;
        goto LABEL_21;
      }
      goto LABEL_27;
    }
  }
LABEL_28:
  FileExtents = MiAllocateFileExtents((struct _KTHREAD *)v5, 2, v10);
  v14 = FileExtents;
  if ( FileExtents < 0 )
  {
    if ( FileExtents != -1073740748 && !MiIsRetryIoStatus(FileExtents, 0x1000uLL) )
    {
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2D2D0.WaitBlockFill11[152], 1u);
      *(_DWORD *)&stru_140E2D2D0.WaitBlockFill11[156] = v14;
    }
    goto LABEL_21;
  }
  v14 = -1073740748;
  if ( !v10 )
    goto LABEL_21;
  v20 = MiLockProtoPoolPageForce((ULONG_PTR)v6, (unsigned __int8 *)&v38);
  v22 = MiLockLeafPage((unsigned __int64 *)v6, 0);
  if ( !v22 )
  {
    LOBYTE(v21) = v38;
    MiUnlockProtoPoolPage(v20, v21, v23);
    v22 = *(_QWORD *)(a2 + 256);
    if ( !v22 )
      goto LABEL_21;
    goto LABEL_56;
  }
  LOBYTE(v21) = 18;
  MiUnlockProtoPoolPage(v20, v21, v23);
  v26 = *(_QWORD *)(a2 + 256);
  if ( v26 )
  {
    v28 = *(_QWORD *)(v26 + 24) >> 62;
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v28 & 1) != 0 )
    {
      v29 = (unsigned __int8)v38;
      if ( (unsigned __int8)v38 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
        __writecr8(v29);
      }
      v22 = *(_QWORD *)(a2 + 256);
    }
    else
    {
      v30 = (unsigned __int8)v38;
      if ( (unsigned __int8)v38 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
        __writecr8(v30);
      }
      if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
      {
        *(_DWORD *)(a2 + 216) = ((__int64)v6 - *(_QWORD *)(v5 + 8)) >> 3;
        *(_QWORD *)(a2 + 96) = MiStartingOffset((__int64 *)v5, (unsigned __int64)v6, 0);
        v14 = MiValidateInPage(a2);
        if ( v14 >= 0 && *(int *)(a2 + 80) < 0 )
          v14 = *(_DWORD *)(a2 + 80);
      }
      else
      {
        v14 = 0;
      }
    }
LABEL_56:
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v24) = 2;
      LOBYTE(v25) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v25, v24);
    }
    v38 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v38);
      while ( *(__int64 *)(v22 + 24) < 0 );
    }
    v32 = *(_DWORD *)(v22 + 32) & 0xFFDFFFFF;
    v33 = a2;
    *(_DWORD *)(v22 + 32) = v32;
    *(_QWORD *)v22 = 0LL;
    v35 = a2 + 320;
    v36 = a2 + 328;
    v34 = -1073740748;
    MiHardFaultPageRelease(&v33, v22);
    _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    if ( *(int *)(a2 + 176) > 1 )
      KeSetEvent((PRKEVENT)(a2 + 56), 0, 0);
    goto LABEL_21;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = (unsigned __int8)v38;
  if ( (unsigned __int8)v38 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
    __writecr8(v27);
  }
LABEL_21:
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a2);
  if ( a1 )
    MiReleaseFaultCharges((__int64 *)v5);
  v16 = (__int64)CurrentThread;
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && *(_QWORD *)(v16 + 152) != v16 + 152 )
    KiCheckForKernelApcDelivery(v16, v15);
  return (unsigned int)v14;
}
