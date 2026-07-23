/*
 * XREFs of MiSimpleUnlinkPageEx @ 0x14028D6D0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14028BE54 (MiUnlinkFreeOrZeroedPage.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiAllocateEnclavePages @ 0x14033995C (MiAllocateEnclavePages.c)
 *     MiProcessPageGroupInfo @ 0x1403CDA40 (MiProcessPageGroupInfo.c)
 *     MiZeroAndReleasePages @ 0x1403CDB20 (MiZeroAndReleasePages.c)
 *     MiBeginPageAccessor @ 0x1403CED40 (MiBeginPageAccessor.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiInsertLargeUserMapping @ 0x14042D264 (MiInsertLargeUserMapping.c)
 *     MiManageUltraSpacePageTable @ 0x14048EB9C (MiManageUltraSpacePageTable.c)
 *     MiPopLargePfnList @ 0x1404E6218 (MiPopLargePfnList.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 *     MiInitializeFastLargePagesMdlPfns @ 0x1406F2DD0 (MiInitializeFastLargePagesMdlPfns.c)
 *     MiMakeMdlPfnsDesiredSize @ 0x1406F36C0 (MiMakeMdlPfnsDesiredSize.c)
 *     MiFillUserPhysicalMdl @ 0x1407061B4 (MiFillUserPhysicalMdl.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 *     MiMakeShadowPageTableRange @ 0x14087BC3C (MiMakeShadowPageTableRange.c)
 *     MiCreatePagingFileFinish @ 0x140988DEC (MiCreatePagingFileFinish.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSimpleUnlinkPageEx(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax
  volatile signed __int64 *v4; // r9
  volatile signed __int64 v5; // rcx
  signed __int64 v6; // rdx
  signed __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rdx
  volatile signed __int64 *v11; // r10
  volatile signed __int64 v12; // rcx
  signed __int64 v13; // rax
  signed __int64 v14; // rcx

  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 16));
  v2 = (_QWORD *)(48 * a2 - 0x220000000000LL);
  if ( *(_QWORD *)a1 != a2 )
  {
    v9 = *v2 & 0xFFFFFFFFFFLL;
    *(_QWORD *)(48 * (v2[3] & 0xFFFFFFFFFFLL) - 0x220000000000LL) = *v2 ^ (*v2 ^ *(_QWORD *)(48
                                                                                           * (v2[3] & 0xFFFFFFFFFFLL)
                                                                                           - 0x220000000000LL)) & 0xFFFFFF0000000000uLL;
    if ( v9 == 0x3FFFFFFFFFLL )
    {
      *(_QWORD *)(a1 + 8) = v2[3] & 0xFFFFFFFFFFLL;
    }
    else
    {
      v10 = v2[3];
      v11 = (volatile signed __int64 *)(48 * v9 - 0x21FFFFFFFFE8LL);
      v12 = *v11;
      v13 = _InterlockedCompareExchange64(v11, v10 ^ (v10 ^ *v11) & 0xFFFFFF0000000000uLL, *v11);
      if ( v12 != v13 )
      {
        do
        {
          v14 = v13;
          v13 = _InterlockedCompareExchange64(v11, v10 ^ (v10 ^ v13) & 0xFFFFFF0000000000uLL, v13);
        }
        while ( v14 != v13 );
      }
    }
    goto LABEL_5;
  }
  v3 = *v2 & 0xFFFFFFFFFFLL;
  *(_QWORD *)a1 = v3;
  if ( v3 != 0x3FFFFFFFFFLL )
  {
    v4 = (volatile signed __int64 *)(48 * v3 - 0x21FFFFFFFFE8LL);
    v5 = *v4;
    v6 = _InterlockedCompareExchange64(v4, *v4 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, *v4);
    if ( v5 != v6 )
    {
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange64(v4, v6 & 0xFFFFFF0000000000uLL | 0x3FFFFFFFFFLL, v6);
      }
      while ( v7 != v6 );
    }
LABEL_5:
    result = 0LL;
    *v2 = 0LL;
    return result;
  }
  *(_QWORD *)(a1 + 8) = 0x3FFFFFFFFFLL;
  result = 1LL;
  *v2 = 0LL;
  return result;
}
