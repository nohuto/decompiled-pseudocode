/*
 * XREFs of ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403EE198
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1403EDFBC (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 * Callees:
 *     ?StLockReleaseShared@@YAXPEAUVLOCK@@K@Z @ 0x14027E6A0 (-StLockReleaseShared@@YAXPEAUVLOCK@@K@Z.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140392300 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     MmInSwapVirtualAddresses @ 0x140AF6684 (MmInSwapVirtualAddresses.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInSwapStore(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  void **v4; // rsi
  void *v6; // rdx
  unsigned int v7; // edi

  v4 = *(void ***)(a1 + 3040);
  if ( (unsigned __int64)v4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741661;
  }
  else if ( v4 == (void **)_InterlockedCompareExchange64(
                             (volatile signed __int64 *)(a1 + 3040),
                             -1LL,
                             (signed __int64)v4) )
  {
    v6 = *v4;
    if ( *v4 )
      v7 = MmInSwapVirtualAddresses(KeGetCurrentThread()->ApcState.Process, v6);
    else
      v7 = -1073741661;
    _InterlockedExchange64((volatile __int64 *)(a1 + 3040), 0LL);
    StLockAcquireShared((struct VLOCK *)(a1 + 2472), (__int64)v6, a3, a4);
    StLockReleaseShared((struct _KTHREAD *)(a1 + 2472));
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073740682;
  }
  return v7;
}
