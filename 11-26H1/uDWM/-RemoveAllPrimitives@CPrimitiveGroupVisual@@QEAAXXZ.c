/*
 * XREFs of ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC
 * Callers:
 *     ??1CPrimitiveGroupVisual@@MEAA@XZ @ 0x180065DCC (--1CPrimitiveGroupVisual@@MEAA@XZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800C9698 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x1800C9A60 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005DC2C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@s.c)
 *     ?SetGroup@CPrimitive@@QEAAXPEAVCPrimitiveGroupVisual@@@Z @ 0x18007DCBC (-SetGroup@CPrimitive@@QEAAXPEAVCPrimitiveGroupVisual@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA?AVDirtyFlags@@XZ @ 0x18008824C (--$ConvertDirtyEnumToFlag@$MW4ButtonDirtyFlags@CButton@@08$00@@YA-AVDirtyFlags@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPrimitiveGroupVisual::RemoveAllPrimitives(CPrimitiveGroupVisual *this)
{
  CPrimitive **v1; // r8
  CPrimitive **i; // rax
  __int64 v4; // rax
  unsigned int *v5; // rax
  CBaseObject **v6; // rdx
  CBaseObject **v7; // rcx
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CPrimitive **)*((_QWORD *)this + 27);
  for ( i = (CPrimitive **)*((_QWORD *)this + 26); i != v1; i = (CPrimitive **)(v4 + 8) )
    CPrimitive::SetGroup(*i, 0LL);
  v5 = (unsigned int *)___ConvertDirtyEnumToFlag__MW4ButtonDirtyFlags_CButton__08_00__YA_AVDirtyFlags__XZ(&v8);
  (*(void (__fastcall **)(CPrimitiveGroupVisual *, _QWORD))(*(_QWORD *)this + 24LL))(this, *v5);
  v6 = (CBaseObject **)*((_QWORD *)this + 27);
  v7 = (CBaseObject **)*((_QWORD *)this + 26);
  if ( v7 != v6 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(v7, v6);
    *((_QWORD *)this + 27) = *((_QWORD *)this + 26);
  }
}
