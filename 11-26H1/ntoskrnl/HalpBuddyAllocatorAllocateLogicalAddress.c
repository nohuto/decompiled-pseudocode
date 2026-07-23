/*
 * XREFs of HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403594F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x140358FA0 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorBltFindAndPop @ 0x1403598A4 (HalpBuddyAllocatorBltFindAndPop.c)
 *     HalpBuddyAllocatorSplitNode @ 0x140359CA0 (HalpBuddyAllocatorSplitNode.c)
 *     HalpBuddyAllocatorBltAdd @ 0x14035AD20 (HalpBuddyAllocatorBltAdd.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall HalpBuddyAllocatorAllocateLogicalAddress(
        __int64 a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 i; // r14
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rbp
  __int64 v16; // rax
  int v17; // edi
  unsigned __int64 v18; // rdx
  KIRQL v19; // bl
  __int64 v20; // r13
  unsigned int j; // ecx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rbp
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  KIRQL v33; // bl
  KIRQL OldIrql; // [rsp+20h] [rbp-218h]
  unsigned int v35; // [rsp+24h] [rbp-214h]
  __int64 v36; // [rsp+28h] [rbp-210h]
  __int64 v37; // [rsp+30h] [rbp-208h]
  _QWORD v39[52]; // [rsp+50h] [rbp-1E8h] BYREF

  memset_0(v39, 0, sizeof(v39));
  v10 = *(_QWORD *)(a1 + 40);
  v35 = 0;
  v11 = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  if ( a2 )
  {
    v29 = *a2;
    v30 = *(_QWORD *)(a1 + 88);
    while ( 1 )
    {
      v31 = *(_QWORD *)(v30 + 48);
      if ( v29 >= v31 && v29 < *(_QWORD *)(v30 + 56) + v31 && !*(_QWORD *)(v30 + 24) && !*(_QWORD *)(v30 + 32) )
        break;
      v32 = *(_QWORD *)(v30 + 32);
      if ( v32 && v29 >= *(_QWORD *)(v32 + 48) )
      {
        v30 = *(_QWORD *)(v30 + 32);
      }
      else
      {
        v30 = *(_QWORD *)(v30 + 24);
        if ( !v30 )
          return (unsigned int)-1073741584;
      }
    }
    if ( !*(_BYTE *)(v30 + 72) || *(_QWORD *)(v30 + 40) != a1 + 80 )
      return (unsigned int)-1073741584;
    *(_BYTE *)(v30 + 73) = 1;
    v17 = 0;
    *a6 = *a2;
  }
  else
  {
    if ( a3 > *(_QWORD *)(a1 + 32) )
      return (unsigned int)-1073741583;
    for ( i = *(_QWORD *)(a1 + 24); i < a3; i *= 2LL )
      ;
    if ( a4 )
      v11 = *a4;
    if ( a5 )
      v10 = *a5;
    if ( ((i - 1) & i) != 0 )
      return (unsigned int)-1073741811;
    if ( !i )
      return (unsigned int)-1073741811;
    v13 = ~(i - 1);
    v14 = v13 & (i + v11 - 1);
    if ( v14 < v11 )
      return (unsigned int)-1073741811;
    v15 = -1LL;
    if ( v10 != -1LL )
    {
      v15 = (v13 & (v10 + 1)) - 1;
      if ( v15 > v10 )
        return (unsigned int)-1073741811;
    }
    if ( v14 > v15 || i > v15 - v14 + 1 && v15 - v14 != -1LL )
      return (unsigned int)-1073741811;
    v16 = *(_QWORD *)(a1 + 88);
    v17 = 0;
    v18 = *(_QWORD *)(v16 + 48);
    if ( *(_QWORD *)(v16 + 56) + v18 - 1 < v14 || v18 > v15 )
    {
      return (unsigned int)-1073741776;
    }
    else
    {
      OldIrql = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 112));
      v19 = OldIrql;
      v20 = HalpBuddyAllocatorBltFindAndPop(i, a1, v14, v15);
      if ( !v20 )
      {
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 112), OldIrql);
        v33 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
        v20 = HalpBuddyAllocatorBltFindAndPop(i, a1, v14, v15);
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112), v33);
        if ( !v20 )
          return (unsigned int)-1073741670;
        v19 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 112));
        OldIrql = v19;
      }
      v37 = v20;
      for ( j = 0; ; j = ++v35 )
      {
        v22 = *(_QWORD *)(v20 + 56);
        v36 = v20;
        if ( v22 == i )
          break;
        v17 = HalpBuddyAllocatorSplitNode(a1, v20);
        if ( v17 < 0 )
          goto LABEL_36;
        v20 = *(_QWORD *)(v20 + 24);
        v27 = *(_QWORD *)(v20 + 48);
        if ( v27 + *(_QWORD *)(v20 + 56) - 1LL >= i + v14 - 1 && v27 <= v15 - i + 1 )
        {
          v28 = *(_QWORD *)(v36 + 32);
        }
        else
        {
          v28 = v20;
          v20 = *(_QWORD *)(v36 + 32);
        }
        if ( v35 >= 0x34 )
          return (unsigned int)-1073741670;
        v39[v35] = v28;
      }
      v23 = *(_QWORD *)(v20 + 48);
      if ( v23 < v14 || v22 + v23 - 1 > v15 )
      {
LABEL_36:
        HalpBuddyAllocatorDeleteSubtree(a1, v37);
        ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 112), v19);
        return (unsigned int)-1073741670;
      }
      if ( j )
      {
        v24 = v39;
        v25 = j;
        do
        {
          HalpBuddyAllocatorBltAdd(*v24++, a1);
          --v25;
        }
        while ( v25 );
      }
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 112), OldIrql);
      *(_QWORD *)(v20 + 64) = a3;
      *(_BYTE *)(v20 + 72) = 1;
      *(_QWORD *)(v20 + 40) = 0LL;
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 56), a3);
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 64), *(_QWORD *)(v20 + 56));
      *a6 = *(_QWORD *)(v20 + 48);
    }
  }
  return (unsigned int)v17;
}
