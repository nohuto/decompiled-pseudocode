/*
 * XREFs of MiGetSlabRepurposedStandbyListWorker @ 0x1402ABA58
 * Callers:
 *     MiGetSlabAllocatorRepurposedStandbyList @ 0x1402AB91C (MiGetSlabAllocatorRepurposedStandbyList.c)
 * Callees:
 *     MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY @ 0x1402ABBBC (MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402BE490 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1402D0030 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiUpdateSlabTypeAvailablePages @ 0x14036BE78 (MiUpdateSlabTypeAvailablePages.c)
 */

__int64 __fastcall MiGetSlabRepurposedStandbyListWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int v8; // ebx

  v4 = (unsigned __int128)((a2 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v5 = ((unsigned __int64)v4 >> 63) + (v4 >> 3);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  v6 = *(_QWORD *)a1;
  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v6 )
    v6 ^= a1;
  while ( v6 )
  {
    if ( v5 > *(_QWORD *)(v6 + 48) )
    {
      v7 = *(_QWORD *)(v6 + 8);
    }
    else
    {
      if ( v5 >= *(_QWORD *)(v6 + 40) )
        break;
      v7 = *(_QWORD *)v6;
    }
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 && v7 )
      v6 ^= v7;
    else
      v6 = v7;
  }
  if ( *(_DWORD *)(a1 + 128) != 8 )
  {
    v8 = MiPageSizes[((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3];
    _InterlockedAdd((volatile signed __int32 *)(v6 + 88), 1u);
    MiUpdateSlabTypeAvailablePages(*(_QWORD *)(a1 + 24), *(unsigned int *)(a1 + 128), 1LL);
    if ( *(_DWORD *)(v6 + 88) + *(_DWORD *)(v6 + 84) >= v8 )
      _InterlockedOr16((volatile signed __int16 *)(a1 + 138), 1u);
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 16));
  if ( *(_DWORD *)(a1 + 128) == 8 )
    return -1LL;
  MI_SET_SLAB_STANDBY_PAGE_SLAB_ENTRY(a2, v6);
  return *(_QWORD *)(a1 + 80);
}
