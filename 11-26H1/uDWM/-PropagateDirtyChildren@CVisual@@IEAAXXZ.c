/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@IEAAXXZ @ 0x180015FBC
 * Callers:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z @ 0x180015F90 (-SetParent@CVisual@@UEAAJPEAVCContainerVisual@@@Z.c)
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180028E98 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA?AVDirtyFlags@@XZ @ 0x180016010 (--$ConvertDirtyEnumToFlag@$MW4SWRDirtyFlags@CSecondaryWindowRepresentation@@0A@$00@@YA-AVDirtyFl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this, __int64 a2)
{
  __int64 i; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 3);
        i
     && (*(_DWORD *)(i + 32) & *(_DWORD *)___ConvertDirtyEnumToFlag__MW4SWRDirtyFlags_CSecondaryWindowRepresentation__0A__00__YA_AVDirtyFlags__XZ(
                                            &v3,
                                            a2)) == 0;
        i = *(_QWORD *)(i + 24) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 176LL))(i);
  }
}
