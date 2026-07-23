/*
 * XREFs of MiCloneProcessAddressSpace @ 0x140A07308
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MiIsStoreProcess @ 0x1403FD910 (MiIsStoreProcess.c)
 *     MiCloneTreeUpdate @ 0x1404EE49C (MiCloneTreeUpdate.c)
 *     MiLockProcessParentPage @ 0x140507ED4 (MiLockProcessParentPage.c)
 *     MiSetCloneParentForkInProgress @ 0x140511B1C (MiSetCloneParentForkInProgress.c)
 *     MiClearCloneParentForkInProgress @ 0x140714AF4 (MiClearCloneParentForkInProgress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiCreateCloneChain @ 0x14077971C (MiCreateCloneChain.c)
 *     MiMapChildLargePageVads @ 0x140885FAC (MiMapChildLargePageVads.c)
 *     MiUnlockVadRange @ 0x140A06150 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140A0666C (MiLockVadRange.c)
 *     MiInitializeForkMaps @ 0x140A0751C (MiInitializeForkMaps.c)
 *     MiCloneVadTree @ 0x140A075D8 (MiCloneVadTree.c)
 *     MiAllocateChildVads @ 0x140A077C4 (MiAllocateChildVads.c)
 *     MiReturnCloneResources @ 0x140A07D98 (MiReturnCloneResources.c)
 *     MiCreateCloneZeroDescriptor @ 0x140B580FC (MiCreateCloneZeroDescriptor.c)
 */

__int64 __fastcall MiCloneProcessAddressSpace(_KPROCESS *BugCheckParameter1, _KPROCESS *a2, int a3)
{
  int v6; // edi
  int v7; // r15d
  __m128i si128; // xmm0
  __int64 v9; // r12
  int CloneChain; // ebx
  __int64 v12[7]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i v13; // [rsp+68h] [rbp-98h]
  __int64 v14; // [rsp+78h] [rbp-88h]
  int v15; // [rsp+128h] [rbp+28h]
  __int64 v16; // [rsp+180h] [rbp+80h]
  _OWORD v17[3]; // [rsp+1A0h] [rbp+A0h] BYREF

  memset(v17, 0, sizeof(v17));
  memset_0(v12, 0, 0x168uLL);
  if ( MiIsStoreProcess((__int64)BugCheckParameter1) )
    return 3221225659LL;
  v6 = a3 & 1;
  if ( BugCheckParameter1[2].ActiveProcessors[4].StaticBitmap[16] )
  {
    if ( (a3 & 1) == 0 )
      return 3221225659LL;
  }
  v15 = a3;
  v12[0] = (__int64)BugCheckParameter1;
  v7 = 0;
  v12[1] = (__int64)a2;
  v12[4] = (__int64)&BugCheckParameter1[2].ReadyListHead.Blink;
  v16 = -1LL;
  MiLockProcessParentPage(a2, 1);
  if ( KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
  {
    v7 = 1;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v17);
  }
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v14 = si128.m128i_i64[0];
  v13 = si128;
  v9 = MiLockVadRange(
         (__int64)BugCheckParameter1,
         0xFFFFFFFFFFFFFFFFuLL,
         0xFFFFFFFFFFFFFFFFuLL,
         (struct _KLOCK_ENTRIES *)1);
  if ( v9 )
  {
    CloneChain = MiCreateCloneChain(v12);
    if ( CloneChain >= 0 )
    {
      CloneChain = MiAllocateChildVads((ULONG_PTR)a2);
      if ( CloneChain >= 0 )
      {
        if ( !v6 || (CloneChain = MiCreateCloneZeroDescriptor(v12), CloneChain >= 0) )
        {
          CloneChain = MiInitializeForkMaps(v12);
          if ( CloneChain >= 0 )
          {
            CloneChain = MiSetCloneParentForkInProgress((__int64)v12);
            if ( CloneChain >= 0 )
            {
              CloneChain = MiCloneVadTree(v12);
              MiCloneTreeUpdate((ULONG_PTR *)v12);
              MiClearCloneParentForkInProgress(v12);
              if ( CloneChain >= 0 )
                CloneChain = MiMapChildLargePageVads((ULONG_PTR)a2, 0LL);
            }
          }
        }
      }
    }
  }
  else
  {
    CloneChain = -1073741558;
  }
  MiUnlockVadRange((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v9, 1);
  if ( v7 )
    KiUnstackDetachProcess((__int64)v17, 0);
  MiReturnCloneResources(v12, (unsigned int)CloneChain);
  return (unsigned int)CloneChain;
}
