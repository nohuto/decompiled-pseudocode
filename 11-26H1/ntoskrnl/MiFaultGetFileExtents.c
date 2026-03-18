/*
 * XREFs of MiFaultGetFileExtents @ 0x14050CBDC
 * Callers:
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x140A51E30 (MiPfPrepareReadList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14027DB80 (KiCheckForKernelApcDelivery.c)
 *     MiLockLeafPage @ 0x140298E10 (MiLockLeafPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402DC6D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     MiHardFaultPageRelease @ 0x14031C920 (MiHardFaultPageRelease.c)
 *     MiFreeInPageSupportBlock @ 0x14031D5D8 (MiFreeInPageSupportBlock.c)
 *     MiStartingOffset @ 0x14036CEA0 (MiStartingOffset.c)
 *     MiGetSharedProtos @ 0x140372BD8 (MiGetSharedProtos.c)
 *     MiValidateInPage @ 0x14038C154 (MiValidateInPage.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiGetSessionIdForVa @ 0x14038E1A8 (MiGetSessionIdForVa.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiIsRetryIoStatus @ 0x14046DB90 (MiIsRetryIoStatus.c)
 *     MiReleaseFaultCharges @ 0x1404AC0A0 (MiReleaseFaultCharges.c)
 *     MiLookupFixupExtentByPte @ 0x1404CBA54 (MiLookupFixupExtentByPte.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiRetainSubsection @ 0x1406FF8C8 (MiRetainSubsection.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     MiAllocateFileExtents @ 0x140B5F8D8 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  int v4; // ebx
  ULONG_PTR v5; // r13
  void *v6; // r12
  __int64 v7; // r14
  unsigned int SessionIdForVa; // eax
  __int64 v9; // r15
  KIRQL v10; // di
  __int64 v11; // rbx
  volatile LONG *v12; // rcx
  int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  bool v16; // zf
  NTSTATUS FileExtents; // eax
  __int64 v19; // r15
  ULONG_PTR v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  __int64 v25; // rax
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rdi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v29; // eax
  __int64 v30; // [rsp+30h] [rbp-48h] BYREF
  int v31; // [rsp+38h] [rbp-40h]
  __int64 v32; // [rsp+40h] [rbp-38h]
  __int64 v33; // [rsp+48h] [rbp-30h]
  int v35; // [rsp+C8h] [rbp+50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+D0h] [rbp+58h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp+60h]

  LOBYTE(v35) = 0;
  memset_0(&v30, 0, 0x40uLL);
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
    MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  }
  v9 = a2;
  *(_DWORD *)(a2 + 188) = v4 | 0x80;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( (*(_DWORD *)(v5 + 32) & 0x20000) != 0 && (*(_DWORD *)(v7 + 56) & 8) != 0 && (*(_DWORD *)(v7 + 56) & 0x20) != 0
    || (*(_DWORD *)(v7 + 56) & 0x20) == 0 )
  {
LABEL_27:
    v9 = 0LL;
    goto LABEL_28;
  }
  if ( *(_QWORD *)((*(_QWORD *)(v7 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 48) )
  {
    LOBYTE(v35) = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v7 + 72));
    v10 = v35;
    v11 = (__int64)MiLookupFixupExtentByPte(v7, v6);
    if ( v11 && (*(_BYTE *)v11 & 1) == 0 )
      v11 = 1LL;
    v12 = (volatile LONG *)(v7 + 72);
    if ( v10 == 17 )
      ExReleaseSpinLockSharedFromDpcLevel(v12);
    else
      ExReleaseSpinLockShared(v12, v10);
    v5 = BugCheckParameter2;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        v13 = -1073740748;
        goto LABEL_21;
      }
      goto LABEL_27;
    }
  }
LABEL_28:
  FileExtents = MiAllocateFileExtents((struct _KTHREAD *)v5, 2, v9);
  v13 = FileExtents;
  if ( FileExtents < 0 )
  {
    if ( FileExtents != -1073740748 && !MiIsRetryIoStatus(FileExtents, 0x1000uLL) )
    {
      _InterlockedAdd((volatile signed __int32 *)&stru_140E2D150.WaitBlockFill11[152], 1u);
      *(_DWORD *)&stru_140E2D150.WaitBlockFill11[156] = v13;
    }
    goto LABEL_21;
  }
  v13 = -1073740748;
  if ( !v9 )
    goto LABEL_21;
  v19 = MiLockProtoPoolPageForce((ULONG_PTR)v6, (unsigned __int8 *)&v35);
  v20 = MiLockLeafPage((unsigned __int64 *)v6, 0);
  if ( !v20 )
  {
    MiUnlockProtoPoolPage(v19, v35);
    v20 = *(_QWORD *)(a2 + 256);
    if ( !v20 )
      goto LABEL_21;
    goto LABEL_56;
  }
  MiUnlockProtoPoolPage(v19, 0x12u);
  v23 = *(_QWORD *)(a2 + 256);
  if ( v23 )
  {
    v25 = *(_QWORD *)(v23 + 24) >> 62;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v25 & 1) != 0 )
    {
      v26 = (unsigned __int8)v35;
      if ( (unsigned __int8)v35 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
        __writecr8(v26);
      }
      v20 = *(_QWORD *)(a2 + 256);
    }
    else
    {
      v27 = (unsigned __int8)v35;
      if ( (unsigned __int8)v35 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
        __writecr8(v27);
      }
      if ( (*(_DWORD *)(v7 + 56) & 0x20) != 0 )
      {
        *(_DWORD *)(a2 + 216) = ((__int64)v6 - *(_QWORD *)(v5 + 8)) >> 3;
        *(_QWORD *)(a2 + 96) = MiStartingOffset((__int64 *)v5, (unsigned __int64)v6, 0);
        v13 = MiValidateInPage(a2);
        if ( v13 >= 0 && *(int *)(a2 + 80) < 0 )
          v13 = *(_DWORD *)(a2 + 80);
      }
      else
      {
        v13 = 0;
      }
    }
LABEL_56:
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v21) = 2;
      LOBYTE(v22) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v22, v21);
    }
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    v29 = *(_DWORD *)(v20 + 32) & 0xFFDFFFFF;
    v30 = a2;
    *(_DWORD *)(v20 + 32) = v29;
    *(_QWORD *)v20 = 0LL;
    v32 = a2 + 320;
    v33 = a2 + 328;
    v31 = -1073740748;
    MiHardFaultPageRelease(&v30, v20);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v24 = (unsigned __int8)v35;
  if ( (unsigned __int8)v35 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v35);
    __writecr8(v24);
  }
LABEL_21:
  MiFreeInPageSupportBlock((PSLIST_ENTRY)a2);
  if ( a1 )
    MiReleaseFaultCharges((__int64 *)v5);
  v15 = (__int64)CurrentThread;
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && *(_QWORD *)(v15 + 152) != v15 + 152 )
    KiCheckForKernelApcDelivery(v15, v14);
  return (unsigned int)v13;
}
