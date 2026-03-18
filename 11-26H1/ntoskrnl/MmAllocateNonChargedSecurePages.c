/*
 * XREFs of MmAllocateNonChargedSecurePages @ 0x1404170E8
 * Callers:
 *     PspIumReplenishPartitionPages @ 0x140416E68 (PspIumReplenishPartitionPages.c)
 *     PspIumAllocatePartitionState @ 0x14061621C (PspIumAllocatePartitionState.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278CA0 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14028C010 (MiUpdatePageFileHighInPte.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiAcquireNonPagedResources @ 0x1402F4A50 (MiAcquireNonPagedResources.c)
 *     MiIsPfnFromChargedSlabAllocation @ 0x140309350 (MiIsPfnFromChargedSlabAllocation.c)
 *     MiGetSlabPage @ 0x14033A284 (MiGetSlabPage.c)
 *     MiInitializeMdlPfn @ 0x14033BC60 (MiInitializeMdlPfn.c)
 *     MiPartitionObjectToPartition @ 0x1403486D4 (MiPartitionObjectToPartition.c)
 *     MiInitializePageColorBase @ 0x14036FE20 (MiInitializePageColorBase.c)
 *     PsDereferencePartition @ 0x140381940 (PsDereferencePartition.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall MmAllocateNonChargedSecurePages(ULONG **a1, int a2, unsigned int *a3, __int64 *a4)
{
  ULONG *v6; // rax
  __int64 v7; // rdi
  __int64 *CurrentIrql; // r14
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  unsigned int v12; // r12d
  unsigned int v13; // ebx
  __int64 SlabPage; // rax
  __int64 Page; // r15
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  unsigned __int8 v19; // r14
  bool v20; // zf
  int v21; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v22; // [rsp+34h] [rbp-64h]
  unsigned int v23; // [rsp+38h] [rbp-60h]
  __int64 *v24; // [rsp+40h] [rbp-58h]
  __int128 v25; // [rsp+48h] [rbp-50h] BYREF
  char v26; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+18h]
  __int64 *v28; // [rsp+B8h] [rbp+20h]

  v28 = a4;
  v26 = 0;
  v25 = 0LL;
  v6 = MiPartitionObjectToPartition(a1, 1, &v26);
  v7 = (__int64)v6;
  if ( a2 && (int)MiAcquireNonPagedResources(v6, *a3, 0LL, 2LL) < 0 )
    *a3 = 0;
  CurrentIrql = (__int64 *)KeGetCurrentIrql();
  v24 = CurrentIrql;
  v27 = (_BYTE)CurrentIrql == 2;
  v9 = 22;
  if ( (_BYTE)CurrentIrql != 2 )
    v9 = 6;
  v23 = v9;
  v10 = 0;
  MiInitializePageColorBase(0LL, 3, 0, (__int64)&v25);
  if ( *a3 )
  {
    v11 = DWORD2(v25) & 0xFFFFFF00;
    v22 = DWORD2(v25) & 0xFFFFFF00;
    do
    {
      v12 = 9;
      v13 = v11 | (unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)v25, 1u);
      if ( (*(_DWORD *)(v7 + 4) & 8) != 0
        && (SlabPage = MiGetSlabPage(v7, 2, v13, v9, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0), Page = SlabPage,
                                                                                          SlabPage != -1) )
      {
        v12 = (unsigned int)MiIsPfnFromChargedSlabAllocation(48 * SlabPage - 0x220000000000LL) != 0 ? 15 : 11;
      }
      else
      {
        Page = MiGetPage(v7, v13, v27);
        if ( Page == -1 )
          break;
      }
      v17 = 48 * Page - 0x220000000000LL;
      v18 = 0x7FFFFFFFFFFFFFFFLL;
      *(_QWORD *)v17 = 0LL;
      *(_QWORD *)(v17 + 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      *(_QWORD *)(v17 + 40) &= ~0x8000000000000000uLL;
      if ( !a2 )
        _InterlockedIncrement64((volatile signed __int64 *)(v7 + 504));
      if ( (_BYTE)CurrentIrql == 2 )
      {
        v19 = 17;
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v21);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
      }
      else
      {
        v19 = KeGetCurrentIrql();
        if ( v19 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(v16) = 2;
          LOBYTE(v18) = v19;
          KiRaiseIrqlProcessIrqlFlags(v18, v16);
        }
        v21 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v21);
          while ( *(__int64 *)(v17 + 24) < 0 );
        }
      }
      MiInitializeMdlPfn(48 * Page - 0x220000000000LL, 393728);
      *(_QWORD *)(v17 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v17 + 16), v12);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v19 < 2u )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
        __writecr8(v19);
      }
      CurrentIrql = v28;
      ++v10;
      v11 = v22;
      *v28 = Page;
      v9 = v23;
      v28 = CurrentIrql + 1;
      LOBYTE(CurrentIrql) = (_BYTE)v24;
    }
    while ( v10 < *a3 );
  }
  if ( a2 && v10 < *a3 )
    MiReleaseNonPagedResources(v7, *a3 - v10);
  v20 = v26 == 0;
  *a3 = v10;
  if ( !v20 )
    PsDereferencePartition(*(_QWORD *)(v7 + 256));
}
