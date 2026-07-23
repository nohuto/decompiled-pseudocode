/*
 * XREFs of PspIumReplenishPartitionPages @ 0x14040B478
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 *     PspIumResolveVirtualFault @ 0x140AD33B4 (PspIumResolveVirtualFault.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14040B5E0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall PspIumReplenishPartitionPages(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // rdx
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 160);
  v4 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v4 + 88) )
    goto LABEL_6;
  if ( *(_DWORD *)(v4 + 4) < a2 )
  {
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 88));
LABEL_6:
    v6 = *(unsigned int *)(v4 + 156);
    v13 = *(_DWORD *)(v4 + 152) - v6 - *(_DWORD *)(v4 + 4);
    if ( v13 )
    {
      MmAllocateNonChargedSecurePages(*(_QWORD *)(v4 + 8), 0LL, &v13, v2 + 8 * v6);
      *(_DWORD *)(v4 + 156) += v13;
    }
    v7 = *(_DWORD *)(v4 + 4);
    if ( v7 < 8 )
    {
      while ( _interlockedbittestandset((volatile signed __int32 *)v4, 0) )
        _mm_pause();
      v7 = *(_DWORD *)(v4 + 4);
      if ( v7 < 8 )
      {
        v8 = *(_DWORD *)(v4 + 4);
        do
        {
          v9 = *(_DWORD *)(v4 + 156);
          v10 = v7;
          v7 = v8;
          if ( !v9 )
            break;
          v11 = (unsigned int)(v9 - 1);
          *(_DWORD *)(v4 + 156) = v11;
          *(_QWORD *)(v4 + 8 * v10 + 24) = *(_QWORD *)(v2 + 8 * v11);
          v7 = ++*(_DWORD *)(v4 + 4);
          v8 = v7;
        }
        while ( v7 < 8 );
      }
      _interlockedbittestandreset((volatile signed __int32 *)v4, 0);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 88));
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return v7 >= a2;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 1;
}
