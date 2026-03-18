/*
 * XREFs of WmipAllocEntry @ 0x1409B7D54
 * Callers:
 *     WmipAddMofResource @ 0x1407964D8 (WmipAddMofResource.c)
 *     WmipUpdateAddGuid @ 0x140796A10 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x140796AE8 (WmipUpdateModifyGuid.c)
 *     WmipAddDataSource @ 0x1409B7A10 (WmipAddDataSource.c)
 *     WmipAllocGuidEntry @ 0x1409B8AEC (WmipAllocGuidEntry.c)
 * Callees:
 *     ExAllocateFromPagedLookasideList @ 0x1403F2CC0 (ExAllocateFromPagedLookasideList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, *(unsigned int *)(a1 + 8));
    v3[3] = 1LL;
    *((_DWORD *)v3 + 4) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v3 + 8) = *(_DWORD *)(a1 + 28);
  }
  return v3;
}
