/*
 * XREFs of MiAllocateFastAwePages @ 0x14087DAC8
 * Callers:
 *     MiAllocateUserPhysicalPagesMdl @ 0x14087E04C (MiAllocateUserPhysicalPagesMdl.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiUpdateProtectionMask @ 0x1402E58D0 (MiUpdateProtectionMask.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiGetAweInfoPartition @ 0x1403C604C (MiGetAweInfoPartition.c)
 *     MiInitializeLargePfnList @ 0x14045A7B0 (MiInitializeLargePfnList.c)
 *     MiPageChainCount @ 0x140474500 (MiPageChainCount.c)
 *     MiFillUserPhysicalMdl @ 0x1407061B4 (MiFillUserPhysicalMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiAllocateFastAwePages(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rcx
  __int64 AweInfoPartition; // rsi
  int v14; // edx
  int v15; // r9d
  int LargePfnList; // ebx
  __int64 v17[2]; // [rsp+50h] [rbp-C8h] BYREF
  int updated; // [rsp+60h] [rbp-B8h]
  int v19; // [rsp+64h] [rbp-B4h]
  _QWORD v20[12]; // [rsp+70h] [rbp-A8h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v19 = 0;
  v9 = MiPageChainCount(a2);
  v10 = v9 * ((unsigned __int64)*(unsigned int *)(a1 + 40) >> 12);
  AweInfoPartition = MiGetAweInfoPartition(v11);
  if ( (int)MiAcquireNonPagedResources((ULONG *)AweInfoPartition, v10, 0LL, 2LL) < 0 )
    return 3221225773LL;
  v14 = *(_DWORD *)(a2 + 52);
  v17[0] = 0LL;
  v17[1] = v9;
  updated = MiUpdateProtectionMask(4u, v14);
  MiInitializeLargePfnList((__int64)v20);
  LargePfnList = MiCreateLargePfnList(v17, 0LL, v10, v9, v15, (a4 & 2) != 0, 0LL, 2, (__int64)v20);
  if ( LargePfnList < 0 )
    goto LABEL_4;
  LargePfnList = MiFillUserPhysicalMdl(a1, v20, a5, a6);
  if ( LargePfnList < 0 )
  {
    MiFreeLargeZeroPages(AweInfoPartition, (__int64)v20, 0);
LABEL_4:
    MiReleaseNonPagedResources(AweInfoPartition, v10);
    return (unsigned int)LargePfnList;
  }
  _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 23488), v10);
  return 0LL;
}
