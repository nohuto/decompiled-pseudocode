/*
 * XREFs of ?ProcessSetCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI_N@Z @ 0x18027E32C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?ProcessAppendCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY@@PEBXI@Z @ 0x180249758 (-ProcessAppendCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagDCOMPCMD_RESOURCE_S.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180190F7C (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@@Z @ 0x1802054D0 (-UnmarshalResourceArray@CResource@@SAJPEBXIW4MIL_RESOURCE_TYPE@@PEAVCResourceTable@@_NPEAV-$vect.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180208DC8 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z @ 0x18021EA30 (-FindCasterEntry@CProjectedShadowScene@@AEBAPEAUCasterEntry@1@PEBVCProjectedShadowCaster@@@Z.c)
 *     ??$emplace_back@AEAPEAVCProjectedShadowCaster@@@?$list@UCasterEntry@CProjectedShadowScene@@V?$allocator@UCasterEntry@CProjectedShadowScene@@@std@@@std@@QEAAAEAUCasterEntry@CProjectedShadowScene@@AEAPEAVCProjectedShadowCaster@@@Z @ 0x18027E180 (--$emplace_back@AEAPEAVCProjectedShadowCaster@@@-$list@UCasterEntry@CProjectedShadowScene@@V-$al.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagDCOMPCMD_RESOURCE_SETCOLLECTIONPROPERTY *a3,
        unsigned int *a4,
        unsigned int a5,
        bool a6)
{
  int v7; // eax
  unsigned int v8; // ebx
  const struct CProjectedShadowCaster **i; // rbx
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-30h]
  CProjectedShadowScene *v14; // [rsp+30h] [rbp-20h] BYREF
  __int128 v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  const struct CProjectedShadowCaster *v18; // [rsp+70h] [rbp+20h] BYREF

  v18 = a3;
  v16 = 0LL;
  v15 = 0LL;
  v7 = CResource::UnmarshalResourceArray(a4, a5, 0x60u, (__int64)a2, v13, (__int64)&v15);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( !a6 )
      CProjectedShadowScene::ClearCasters(this);
    for ( i = (const struct CProjectedShadowCaster **)v15; i != *((const struct CProjectedShadowCaster ***)&v15 + 1); ++i )
    {
      v18 = *i;
      if ( !CProjectedShadowScene::FindCasterEntry(this, v18) )
      {
        std::list<CProjectedShadowScene::CasterEntry>::emplace_back<CProjectedShadowCaster * &>(
          (__int64 *)this + 9,
          (__int64 *)&v18);
        v11 = (_QWORD *)((char *)v18 + 104);
        v14 = this;
        v12 = (_QWORD *)*((_QWORD *)v18 + 14);
        if ( v12 == *((_QWORD **)v18 + 15) )
        {
          std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
            v11,
            (__int64)v12,
            (__int64 *)&v14);
        }
        else
        {
          *v12 = this;
          v11[1] += 8LL;
        }
        CProjectedShadowScene::RequestRedrawAll(this);
      }
    }
    if ( (_QWORD)v15 )
      std::_Deallocate<16>((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\projectedshadowscene.cpp",
      (const char *)(unsigned int)v7);
    if ( (_QWORD)v15 )
      std::_Deallocate<16>((void *)v15, (v16 - v15) & 0xFFFFFFFFFFFFFFF8uLL);
    return v8;
  }
}
