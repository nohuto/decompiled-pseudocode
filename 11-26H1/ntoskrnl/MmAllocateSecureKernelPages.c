/*
 * XREFs of MmAllocateSecureKernelPages @ 0x1404E279C
 * Callers:
 *     PspIumAllocatePhysicalPages @ 0x1406193C0 (PspIumAllocatePhysicalPages.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x1402EB3D0 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiInitializeMdlPfn @ 0x14033DCE0 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x14034A754 (MiPartitionObjectToPartition.c)
 *     MiAllocatePagesForMdl @ 0x14034AA0C (MiAllocatePagesForMdl.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall MmAllocateSecureKernelPages(
        ULONG **BugCheckParameter2,
        unsigned __int64 a2,
        int a3,
        int a4,
        _DWORD *a5)
{
  unsigned __int64 v5; // r12
  __int64 v7; // r15
  _QWORD *PagesForMdl; // r14
  int v9; // edi
  unsigned int v10; // edi
  ULONG *v11; // rax
  __int64 v12; // r13
  __int64 PoolMm; // rax
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 *v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 SlabPage; // rax
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r12
  __int64 v24; // rcx
  __int64 v25; // rax
  int IsPfnFromChargedSlabAllocation; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int8 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // r12
  int v36; // [rsp+58h] [rbp-51h]
  unsigned __int64 v37; // [rsp+60h] [rbp-49h] BYREF
  __int64 v38; // [rsp+68h] [rbp-41h]
  unsigned int v39; // [rsp+70h] [rbp-39h]
  __int64 v40; // [rsp+78h] [rbp-31h] BYREF
  __int64 *v41; // [rsp+80h] [rbp-29h]
  __int64 CurrentIrql; // [rsp+88h] [rbp-21h]
  __int64 v43; // [rsp+90h] [rbp-19h]
  __int128 v44; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v45; // [rsp+B8h] [rbp+Fh]
  int v48; // [rsp+120h] [rbp+77h] BYREF

  v48 = a4;
  v40 = 0LL;
  v5 = a2;
  v44 = 0LL;
  *a5 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v37 = 0LL;
  LOBYTE(v48) = 0;
  v7 = 0LL;
  PagesForMdl = 0LL;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v44);
  v9 = (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v44, 1u);
  v10 = DWORD2(v44) & 0xFFFFFF00 | v9;
  v11 = MiPartitionObjectToPartition(BugCheckParameter2, 0, &v48);
  v12 = (__int64)v11;
  if ( !v11 )
    goto LABEL_2;
  if ( (v11[1] & 8) == 0 || (int)MiAcquireNonPagedResources(v11, v5, 0LL, 2LL) < 0 )
  {
LABEL_46:
    PagesForMdl = MiAllocatePagesForMdl(
                    v12,
                    0,
                    -1,
                    0LL,
                    v5 << 12,
                    1,
                    (v10 >> 9) & 0x3F,
                    262657,
                    (__int64)KeGetCurrentThread()->ApcState.Process,
                    0LL);
    goto LABEL_34;
  }
  v7 = v5;
  PoolMm = ExAllocatePoolMm(
             64LL,
             8 * v5 + 48,
             1768189261,
             KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  *(_QWORD *)&v44 = PoolMm;
  PagesForMdl = (_QWORD *)PoolMm;
  if ( !PoolMm )
    goto LABEL_50;
  v15 = PoolMm + 48;
  v36 = 64;
  v16 = 22;
  v38 = 8 * v5;
  v41 = (__int64 *)(PoolMm + 48);
  if ( (_BYTE)CurrentIrql != 2 )
    v16 = 6;
  v17 = (__int64 *)(PoolMm + 48);
  v39 = v16;
  v45 = v15 + 8 * v5;
  if ( v15 >= v45 )
    goto LABEL_32;
  v18 = a3;
  v19 = 0LL;
  while ( 1 )
  {
    SlabPage = MiGetSlabPage(v12, MmSlabTypeToMiSlabType[v18], v10, v16, &v40, 0);
    *v17 = SlabPage;
    if ( SlabPage == -1 )
      break;
    v23 = 48 * SlabPage - 0x220000000000LL;
    v24 = 2LL;
    if ( (_BYTE)CurrentIrql == 2 )
    {
      LOBYTE(v43) = 17;
      LODWORD(v37) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( *(__int64 *)(v23 + 24) < 0 );
      }
    }
    else
    {
      v25 = KeGetCurrentIrql();
      v43 = v25;
      if ( (_BYTE)v25 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v21) = 2;
        LOBYTE(v24) = v25;
        KiRaiseIrqlProcessIrqlFlags(v24, v21);
      }
      LODWORD(v37) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v37);
        while ( *(__int64 *)(v23 + 24) < 0 );
      }
    }
    *(_QWORD *)v23 = 0LL;
    *(_QWORD *)(v23 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
    MiInitializeMdlPfn(v23, 262656);
    IsPfnFromChargedSlabAllocation = MiIsPfnFromChargedSlabAllocation(v23);
    v27 = v19++;
    if ( IsPfnFromChargedSlabAllocation )
      v19 = v27;
    v28 = v7--;
    if ( IsPfnFromChargedSlabAllocation )
      v7 = v28;
    *(_QWORD *)(v23 + 16) = MiUpdatePageFileHighInPte(
                              *(_QWORD *)(v23 + 16),
                              IsPfnFromChargedSlabAllocation != 0 ? 7 : 3);
    _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v29 = v43;
    if ( (unsigned __int8)v43 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v43);
      __writecr8(v29);
    }
    v30 = v38;
LABEL_29:
    v16 = v39;
    ++v17;
    v38 = v30 - 8;
    v18 = a3;
    if ( (unsigned __int64)v17 >= v45 )
      goto LABEL_30;
  }
  if ( v40 )
  {
    v34 = v36;
    v35 = v38 >> 3;
    while ( !(unsigned int)MiReplenishSlabAllocator(v40, v35, v34, v22) )
    {
      v15 = (unsigned __int64)v41;
      if ( v17 != v41 )
        goto LABEL_31;
      if ( (v36 & 0x40) == 0 )
        break;
      v34 = v36 & 0xFFFFFFBF;
      v36 &= ~0x40u;
    }
    --v17;
    v30 = v38 + 8;
    goto LABEL_29;
  }
LABEL_30:
  v15 = (unsigned __int64)v41;
LABEL_31:
  v5 = a2;
  v37 = v19;
  PagesForMdl = (_QWORD *)v44;
LABEL_32:
  v31 = (__int64)((__int64)v17 - v15) >> 3;
  if ( !v31 )
  {
LABEL_50:
    if ( v7 )
    {
      MiReleaseNonPagedResources(v12, v7);
      v7 = 0LL;
    }
    if ( PagesForMdl )
      ExFreePoolWithTag(PagesForMdl, 0);
    goto LABEL_46;
  }
  v32 = v31 << 12;
  *PagesForMdl = 0LL;
  PagesForMdl[4] = 0LL;
  *((_WORD *)PagesForMdl + 4) = 8 * ((v32 >> 12) + 6);
  v33 = v37;
  PagesForMdl[5] = (unsigned int)v32;
  *((_WORD *)PagesForMdl + 5) = 2;
  _InterlockedAdd64((volatile signed __int64 *)(v12 + 23528), v33);
  *a5 = 1;
LABEL_34:
  if ( v7 )
    MiReleaseNonPagedResources(v12, v7);
LABEL_2:
  if ( (_BYTE)v48 )
    PsDereferencePartition(*(_QWORD *)(v12 + 256));
  return PagesForMdl;
}
