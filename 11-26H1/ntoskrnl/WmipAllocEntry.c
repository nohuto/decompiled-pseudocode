/*
 * XREFs of WmipAllocEntry @ 0x140A0BF54
 * Callers:
 *     WmipUpdateAddGuid @ 0x140824088 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x140824160 (WmipUpdateModifyGuid.c)
 *     WmipAllocGuidEntry @ 0x140A0B548 (WmipAllocGuidEntry.c)
 *     WmipAddDataSource @ 0x140A0BC24 (WmipAddDataSource.c)
 *     WmipAddMofResource @ 0x140B19FC8 (WmipAddMofResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1402C1770 (ExAllocateFromNPagedLookasideList.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

_QWORD *__fastcall WmipAllocEntry(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = ExAllocateFromNPagedLookasideList(*(PPAGED_LOOKASIDE_LIST *)a1);
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
