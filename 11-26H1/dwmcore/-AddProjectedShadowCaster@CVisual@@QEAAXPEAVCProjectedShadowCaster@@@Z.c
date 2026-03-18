/*
 * XREFs of ?AddProjectedShadowCaster@CVisual@@QEAAXPEAVCProjectedShadowCaster@@@Z @ 0x18014E110
 * Callers:
 *     ?SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801DD8A4 (-SetCastingVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ??$_Try_emplace@AEBQEAVCVisual@@$$T@?$_Hash@V?$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCVisual@@VCPreWalkVisual@@@std@@PEAX@std@@_N@1@AEBQEAVCVisual@@$$QEA$$T@Z @ 0x18014C3A0 (--$_Try_emplace@AEBQEAVCVisual@@$$T@-$_Hash@V-$_Umap_traits@PEAVCVisual@@VCPreWalkVisual@@V-$_Uh.c)
 *     ?GetProjectedShadowCasters@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@XZ @ 0x18014E22C (-GetProjectedShadowCasters@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@PE.c)
 *     ?SetProjectedShadowCasters@CVisual@@QEAAXPEAV?$vector@PEAVCProjectedShadowCaster@@V?$allocator@PEAVCProjectedShadowCaster@@@std@@@std@@@Z @ 0x1801E07C8 (-SetProjectedShadowCasters@CVisual@@QEAAXPEAV-$vector@PEAVCProjectedShadowCaster@@V-$allocator@P.c)
 */

void __fastcall CVisual::AddProjectedShadowCaster(CVisual *this, struct CProjectedShadowCaster *a2)
{
  _QWORD *v4; // rax
  _QWORD *ProjectedShadowCasters; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  CVisual *v9; // [rsp+40h] [rbp+8h] BYREF
  struct CProjectedShadowCaster *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  if ( (**((_DWORD **)this + 28) & 0x100000) == 0 )
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      *v4 = 0LL;
      v4[1] = 0LL;
      v4[2] = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
    CVisual::SetProjectedShadowCasters(this, v4);
  }
  ProjectedShadowCasters = (_QWORD *)CVisual::GetProjectedShadowCasters(this);
  v6 = ProjectedShadowCasters;
  v7 = (_QWORD *)ProjectedShadowCasters[1];
  if ( v7 == (_QWORD *)ProjectedShadowCasters[2] )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      ProjectedShadowCasters,
      (__int64)v7,
      (__int64 *)&v10);
  }
  else
  {
    *v7 = a2;
    ProjectedShadowCasters[1] += 8LL;
  }
  if ( v6[1] - *v6 == 8LL )
  {
    v9 = this;
    std::_Hash<std::_Umap_traits<CVisual *,CPreWalkVisual,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CPreWalkVisual>>,0>>::_Try_emplace<CVisual * const &,std::nullptr_t>(
      (__int64)g_pComposition + 6192,
      (__int64)v8,
      (unsigned __int8 *)&v9);
    *(_BYTE *)(v8[0] + 50LL) = 1;
  }
}
