/*
 * XREFs of HvpDropPagedBins @ 0x140A8EFC0
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     MmFreeBootRegistry @ 0x14086A188 (MmFreeBootRegistry.c)
 *     HvpFreeBin @ 0x1408BDE7C (HvpFreeBin.c)
 *     HvpMapEntryGetFreeBin @ 0x1408BF5C0 (HvpMapEntryGetFreeBin.c)
 *     HvpMapEntryIsPoolBacked @ 0x1408BF824 (HvpMapEntryIsPoolBacked.c)
 *     CmpReleaseGlobalQuota @ 0x1408CEAE4 (CmpReleaseGlobalQuota.c)
 *     HvpPointMapEntriesToBuffer @ 0x1408E3AD0 (HvpPointMapEntriesToBuffer.c)
 *     HvpAllocateNonPagedBin @ 0x140A8F1BC (HvpAllocateNonPagedBin.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvpDropPagedBins(ULONG_PTR BugCheckParameter2)
{
  int v2; // eax
  unsigned __int64 v3; // rsi
  size_t v4; // rbp
  int v5; // edi
  unsigned int v7; // r12d
  unsigned int i; // r14d
  __int64 CellMap; // rax
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *BinAddress; // rsi
  void *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 FreeBin; // rax
  __int16 v20; // [rsp+70h] [rbp+8h] BYREF
  void *v21; // [rsp+78h] [rbp+10h] BYREF

  v20 = 0;
  HvpGetBinContextInitialize(&v20);
  v2 = *(_DWORD *)(BugCheckParameter2 + 160);
  v3 = 0LL;
  v21 = 0LL;
  LODWORD(v4) = 0;
  if ( (v2 & 0x10) != 0 )
  {
    v7 = *(_DWORD *)(BugCheckParameter2 + 280);
    if ( v7 )
    {
      for ( i = 0; i < v7; i += v4 )
      {
        CellMap = HvpGetCellMap(BugCheckParameter2, i);
        v10 = CellMap;
        if ( !CellMap )
          KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0x147EuLL);
        if ( HvpMapEntryIsPoolBacked(CellMap) )
          break;
        BinAddress = (unsigned int *)HvpMapEntryGetBinAddress(v11, v11, &v20, v12);
        v4 = BinAddress[2];
        if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x2000000) != 0 )
        {
          v5 = HvpAllocateNonPagedBin(v14, (unsigned int)v4, &v21);
          if ( v5 < 0 )
          {
            v3 = (unsigned __int64)v21;
            goto LABEL_20;
          }
          v16 = v21;
        }
        else
        {
          LOBYTE(v13) = 1;
          v16 = (void *)guard_dispatch_icall_no_overrides((unsigned int)v4, v13);
          if ( !v16 )
            return (unsigned int)-1073741670;
        }
        memmove(v16, BinAddress, v4);
        HvpMapEntryReleaseBinAddress(v18, v17, &v20);
        FreeBin = HvpMapEntryGetFreeBin(v10);
        HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v16, v4, i, 1, FreeBin);
        v21 = 0LL;
        v3 = 0LL;
        CmpReleaseGlobalQuota(v4);
      }
    }
    v5 = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&WheapPfaLock.CycleTime, 0xFFFFFFFF) == 1 )
      MmFreeBootRegistry();
    *(_DWORD *)(BugCheckParameter2 + 160) &= ~0x10u;
LABEL_20:
    if ( v3 )
      HvpFreeBin(BugCheckParameter2, v4, v3);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v5;
}
