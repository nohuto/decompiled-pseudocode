/*
 * XREFs of HvWriteExternal @ 0x140AA7B6C
 * Callers:
 *     CmSaveMergedKeys @ 0x140853684 (CmSaveMergedKeys.c)
 *     CmSaveKey @ 0x140A7EF8C (CmSaveKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpDoFileSetSizeEx @ 0x140AA7F58 (CmpDoFileSetSizeEx.c)
 *     CmpFileFlush @ 0x140AA8F74 (CmpFileFlush.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     HvpGetCellMap @ 0x140C5E690 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140C5E6F0 (HvpMapEntryGetBinAddress.c)
 *     HvpMapEntryReleaseBinAddress @ 0x140C5E710 (HvpMapEntryReleaseBinAddress.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 *     HvpGetBinContextInitialize @ 0x140C5EAA0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvWriteExternal(ULONG_PTR BugCheckParameter2)
{
  unsigned int v2; // edi
  unsigned int v3; // r12d
  int v4; // r11d
  unsigned int v5; // r10d
  __int64 CellMap; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int v9; // r10d
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r14d
  _DWORD *Pool2; // rax
  _DWORD *v15; // r13
  int v16; // ebx
  unsigned int i; // ebx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // r13d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 v26; // [rsp+80h] [rbp+30h] BYREF

  v2 = 0;
  v26 = 0;
  HvpGetBinContextInitialize(&v26);
  if ( !*(_QWORD *)(BugCheckParameter2 + 1560) )
    return 3221225485LL;
  v3 = *(_DWORD *)(BugCheckParameter2 + 280);
  v4 = CmpDoFileSetSizeEx(BugCheckParameter2, 2LL, v3 + 4096, 0LL);
  if ( v4 < 0 )
    return (unsigned int)v4;
  v5 = 0;
  while ( v5 < v3 )
  {
    CellMap = HvpGetCellMap(BugCheckParameter2, v5);
    if ( !CellMap )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0xCC1uLL);
    v11 = *(unsigned int *)(HvpMapEntryGetBinAddress(v7, CellMap, &v26, v8) + 8);
    if ( (unsigned int)(v11 + v12) > *(_DWORD *)(BugCheckParameter2 + 280) || (v11 & 0xFFF) != 0 )
      return (unsigned int)-1073741492;
    HvpMapEntryReleaseBinAddress(v11, v10, &v26);
  }
  if ( v5 < *(_DWORD *)(BugCheckParameter2 + 280) )
    return (unsigned int)v4;
  v13 = 4096;
  Pool2 = (_DWORD *)ExAllocatePool2(0x108uLL);
  v15 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, *(const void **)(BugCheckParameter2 + 64), 0x1000uLL);
    v15[10] = v3;
    v15[11] = 1;
    v15[127] = HvpHeaderCheckSum(v15);
    v16 = guard_dispatch_icall_no_overrides(BugCheckParameter2, 2LL);
    ExFreePoolWithTag(v15, 0);
    if ( v16 < 0 )
      return 3221225805LL;
    for ( i = 0; i < v3; i += v22 )
    {
      v19 = HvpGetCellMap(BugCheckParameter2, i);
      if ( !v19 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, i, 0xD18uLL);
      v22 = *(_DWORD *)(HvpMapEntryGetBinAddress(v20, v19, &v26, v21) + 8);
      if ( (int)guard_dispatch_icall_no_overrides(BugCheckParameter2, 2LL) < 0 )
        return (unsigned int)-1073741491;
      HvpMapEntryReleaseBinAddress(v24, v23, &v26);
      v13 += v22;
    }
    if ( (int)CmpFileFlush(BugCheckParameter2, 2LL) < 0 )
      return (unsigned int)-1073741491;
    return v2;
  }
  return 3221225626LL;
}
