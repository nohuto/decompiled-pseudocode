/*
 * XREFs of CcPurgeAndClearCacheSection @ 0x1404ACF44
 * Callers:
 *     CcSetFileSizesEx @ 0x1403A0060 (CcSetFileSizesEx.c)
 * Callees:
 *     ObFastDereferenceObjectDeferDelete @ 0x140263F90 (ObFastDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     CcGetVirtualAddress @ 0x1402C2D60 (CcGetVirtualAddress.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x14039C7A0 (MmFlushSection.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14039CB54 (CcReferenceSharedCacheMapFileObject.c)
 *     CcPurgeCacheSection @ 0x14039D060 (CcPurgeCacheSection.c)
 *     CcSetDirtyInMask @ 0x14039F350 (CcSetDirtyInMask.c)
 *     CcUpdateSharedCacheMapFlag @ 0x1404AD134 (CcUpdateSharedCacheMapFlag.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall CcPurgeAndClearCacheSection(_QWORD *a1, LARGE_INTEGER *p_AvailableEntryBitmap)
{
  ULONG_PTR v4; // r13
  BOOLEAN v5; // bl
  __int64 result; // rax
  __int64 QuadPart; // rbx
  unsigned int v8; // r14d
  __int64 v9; // rbx
  struct _KEVENT *v10; // rcx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES v12; // [rsp+30h] [rbp-68h] BYREF

  *(_QWORD *)&v12.AvailableEntryBitmap = 0LL;
  v12.Entries[0].TreeNode.0 = 0LL;
  v12.Entries[0].LockState.0 = 0LL;
  v4 = CcReferenceSharedCacheMapFileObject((__int64)a1);
  *(_QWORD *)&v12.Entries[0].EntryFlags = v4;
  if ( (p_AvailableEntryBitmap->LowPart & 0xFFF) == 0 )
    goto LABEL_2;
  QuadPart = p_AvailableEntryBitmap->QuadPart;
  *(LARGE_INTEGER *)&v12.AvailableEntryBitmap = *p_AvailableEntryBitmap;
  p_AvailableEntryBitmap = (LARGE_INTEGER *)&v12.AvailableEntryBitmap;
  if ( a1[22] && a1[11] )
  {
    v8 = 4096 - (QuadPart & 0xFFF);
    v12.Thread = (_KTHREAD *)CcGetVirtualAddress((__int64)a1, QuadPart, (__int64 *)v12.Entries, &v12, 1, 0);
    memset_0(v12.Thread, 0, v8);
    if ( QuadPart > a1[6] )
    {
      MmSetAddressRangeModifiedEx((unsigned __int64)v12.Thread);
      LOBYTE(v11) = 1;
      CcUpdateSharedCacheMapFlag(a1, 0x20000LL, v11);
    }
    else
    {
      CcSetDirtyInMask((__int64)a1, (__int64 *)&v12.AvailableEntryBitmap, v8, 0LL);
    }
    *(_QWORD *)&v12.AvailableEntryBitmap = v8 + QuadPart;
    v9 = *(_QWORD *)(*(_QWORD *)&v12.Entries[0].LockState.0 + 8LL);
    if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)&v12.Entries[0].LockState.0
                                                                            + 16LL)) )
    {
      v10 = *(struct _KEVENT **)(v9 + 192);
      if ( v10 )
        KeSetEvent(v10, 0, 0);
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 552));
    }
    goto LABEL_2;
  }
  MmFlushSection(
    *(_QWORD *)(v4 + 40),
    (struct _KTHREAD **)&v12.AvailableEntryBitmap,
    1LL,
    0LL,
    &v12.Entries[0].TreeNode,
    0);
  result = LODWORD(v12.Entries[0].TreeNode.Children[0]);
  if ( SLODWORD(v12.Entries[0].TreeNode.Children[0]) >= 0 )
  {
LABEL_2:
    v5 = CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v4 + 40), p_AvailableEntryBitmap, 0, 0);
    ObFastDereferenceObjectDeferDelete(a1 + 12, v4, 0x63536343u);
    return v5 == 0 ? 0xC0000435 : 0;
  }
  return result;
}
