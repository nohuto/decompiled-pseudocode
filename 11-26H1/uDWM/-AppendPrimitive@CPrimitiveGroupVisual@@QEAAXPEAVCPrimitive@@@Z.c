/*
 * XREFs of ?AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z @ 0x1800BDB34
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x180083114 (-InitializeVisualTreeClone@CPrimitiveGroupVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ?SetGroup@CPrimitive@@QEAAXPEAVCPrimitiveGroupVisual@@@Z @ 0x18007DCBC (-SetGroup@CPrimitive@@QEAAXPEAVCPrimitiveGroupVisual@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     ??$emplace_back@AEAPEAVCPrimitive@@@?$vector@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCPrimitive@@@Z @ 0x1800BDAAC (--$emplace_back@AEAPEAVCPrimitive@@@-$vector@V-$com_ptr_t@VCPrimitive@@Uerr_returncode_policy@wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroupVisual::AppendPrimitive(CPrimitiveGroupVisual *this, struct CPrimitive *a2)
{
  _DWORD *v4; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  CBaseObject *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  std::vector<wil::com_ptr_t<CPrimitive,wil::err_returncode_policy>>::emplace_back<CPrimitive * &>(
    (__int64)this + 208,
    &v6);
  CPrimitive::SetGroup(a2, this);
  v4 = ___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v5);
  (*(void (__fastcall **)(CPrimitiveGroupVisual *, _QWORD))(*(_QWORD *)this + 24LL))(this, (unsigned int)*v4);
}
