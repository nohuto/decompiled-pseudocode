/*
 * XREFs of MmManagePartitionMoveMemory @ 0x1408834C8
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     KeGetIdealNodeNumberThread @ 0x140485DEC (KeGetIdealNodeNumberThread.c)
 *     MiHugePagesSupported @ 0x1404C9454 (MiHugePagesSupported.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140884A24 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiSpecialPurposeMemoryTypeDereference @ 0x1408851A8 (MiSpecialPurposeMemoryTypeDereference.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     MiAllocatePartitionPhysicalPages @ 0x140B632C4 (MiAllocatePartitionPhysicalPages.c)
 *     MiSpecialPurposeMemoryChangePrepare @ 0x140B68C20 (MiSpecialPurposeMemoryChangePrepare.c)
 */

__int64 __fastcall MmManagePartitionMoveMemory(ULONG **a1, ULONG **a2, __int64 a3, KPROCESSOR_MODE a4)
{
  ULONG *v4; // r15
  ULONG *v6; // rbp
  __int64 v7; // r13
  ULONG *v8; // r14
  unsigned int IdealNodeNumberThread; // ebx
  int v11; // edi
  bool v12; // zf
  bool v13; // zf
  bool v14; // zf
  _DWORD *v15; // r8
  unsigned int PartitionPhysicalPages; // esi
  struct _KTHREAD *v17; // rsi
  __int64 v18; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  int v20; // eax
  ULONG *v21; // [rsp+30h] [rbp-48h]
  struct _KTHREAD *v22; // [rsp+80h] [rbp+8h] BYREF
  ULONG *v23; // [rsp+88h] [rbp+10h] BYREF
  __int64 v24; // [rsp+90h] [rbp+18h] BYREF

  v4 = *a2;
  v6 = *a1;
  v7 = 0LL;
  v21 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  if ( !*(_QWORD *)a3 )
    return 0LL;
  IdealNodeNumberThread = *(_DWORD *)(a3 + 8);
  if ( IdealNodeNumberThread == -1 )
  {
    IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
  }
  else if ( IdealNodeNumberThread >= (unsigned __int16)KeNumberNodes )
  {
    return 3221225485LL;
  }
  v11 = *(_DWORD *)(a3 + 12);
  if ( (v11 & 0xFFFFF000) != 0 )
    return 3221225485LL;
  if ( (v11 & 0x400) != 0 )
  {
    if ( v4 != v6 || *(_QWORD *)a3 != 0x40000LL || (*(_DWORD *)(a3 + 12) & 0xA00) == 0x800 )
      return 3221225485LL;
  }
  else if ( (v11 & 0x800) != 0 )
  {
    return 3221225485LL;
  }
  if ( (v11 & 0x200) != 0 )
  {
    if ( (v11 & 0x100) == 0 || (v11 & 0xFFFFF0F6) != 0 )
      return 3221225485LL;
    v12 = (*(_DWORD *)(a3 + 12) & 0x408) == 1032;
  }
  else
  {
    if ( (v11 & 0x400) == 0 )
      goto LABEL_21;
    if ( (v11 & 0xFFFFFA7E) != 0 )
      return 3221225485LL;
    v12 = (*(_DWORD *)(a3 + 12) & 0x180) == 0;
  }
  if ( v12 )
    return 3221225485LL;
LABEL_21:
  if ( (v11 & 0x12) != 0 )
  {
    v13 = (*(_DWORD *)(a3 + 12) & 0x1E0) == 0;
LABEL_23:
    if ( !v13 )
      return 3221225485LL;
    v14 = (*(_DWORD *)a3 & 0x1FFLL) == 0;
    goto LABEL_30;
  }
  if ( (v11 & 0x60) != 0 )
  {
    v13 = (*(_DWORD *)(a3 + 12) & 0x180) == 0;
    goto LABEL_23;
  }
  if ( (v11 & 0x180) == 0 )
    goto LABEL_31;
  if ( !(unsigned int)MiHugePagesSupported() )
    return 3221225659LL;
  v14 = (*v15 & 0x3FFFF) == 0LL;
LABEL_30:
  if ( !v14 )
    return 3221225485LL;
LABEL_31:
  if ( (v11 & 8) == 0 )
    goto LABEL_37;
  if ( v6 != &MiSystemPartition || v4 == &MiSystemPartition && (v11 & 0x200) == 0 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
    return 3221225569LL;
LABEL_37:
  if ( (v6[1] & 0x20) != 0 && (v6 != v4 || (v11 & 0xC00) == 0) )
    return 3221225659LL;
  if ( (v4[1] & 0x20) == 0 )
    goto LABEL_54;
  if ( (v11 & 0xFFFFF008) != 0 )
    return 3221225659LL;
  if ( v6 != v4 )
  {
LABEL_52:
    v20 = MiSpecialPurposeMemoryChangePrepare(v6, v4 + 5354, &v24);
    v7 = v24;
    PartitionPhysicalPages = v20;
    if ( v20 < 0 )
      goto LABEL_55;
    v21 = v6;
    v6 = *(ULONG **)(v24 + 64);
    do
LABEL_54:
      PartitionPhysicalPages = MiAllocatePartitionPhysicalPages(
                                 (_DWORD)v4,
                                 (_DWORD)v6,
                                 *(_QWORD *)a3,
                                 IdealNodeNumberThread,
                                 v11);
    while ( PartitionPhysicalPages == -1073740023 );
LABEL_55:
    if ( v7 )
      MiSpecialPurposeMemoryTypeDereference(v21, v7);
    goto LABEL_57;
  }
  v22 = 0LL;
  if ( MiFindSpecialPurposeMemoryTypeByPartition(v6, &v23, &v22) )
  {
    v17 = v22;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v22->Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&v17->Header.Lock);
    KeAbPostRelease((unsigned __int64)v17);
    CurrentThread = KeGetCurrentThread();
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery((__int64)CurrentThread, v18);
    v8 = v23;
    v6 = v23;
    if ( v23 == v4 )
      goto LABEL_54;
    goto LABEL_52;
  }
  v8 = v23;
  PartitionPhysicalPages = -1073740640;
LABEL_57:
  if ( v8 )
    PsDereferencePartition(*((_QWORD *)v8 + 32));
  return PartitionPhysicalPages;
}
