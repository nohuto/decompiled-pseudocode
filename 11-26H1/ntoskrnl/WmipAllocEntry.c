/*
 * XREFs of WmipAllocEntry @ 0x140A0AF24
 * Callers:
 *     WmipUpdateAddGuid @ 0x14082A2D4 (WmipUpdateAddGuid.c)
 *     WmipUpdateModifyGuid @ 0x14082A3AC (WmipUpdateModifyGuid.c)
 *     WmipAllocGuidEntry @ 0x140A0A774 (WmipAllocGuidEntry.c)
 *     WmipAddDataSource @ 0x140A0ABF4 (WmipAddDataSource.c)
 *     WmipAddMofResource @ 0x140B1C418 (WmipAddMofResource.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14030C430 (ExAllocateFromNPagedLookasideList.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
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
