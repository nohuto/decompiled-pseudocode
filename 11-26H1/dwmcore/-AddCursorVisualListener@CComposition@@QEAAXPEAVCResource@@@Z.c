/*
 * XREFs of ?AddCursorVisualListener@CComposition@@QEAAXPEAVCResource@@@Z @ 0x18022A68C
 * Callers:
 *     ?ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETISCURSORENABLED@@@Z @ 0x180257890 (-ProcessSetIsCursorEnabled@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURER.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@AEAAPEAPEAVBamoPrincipalImpl@BamoImpl@Microsoft@@QEAPEAV234@AEBQEAV234@@Z @ 0x1800F9E7C (--$_Emplace_reallocate@AEBQEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@-$vector@PEAVBamoPrincipalI.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18022A9E4 (-EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ.c)
 */

void __fastcall CComposition::AddCursorVisualListener(CComposition *this, struct CResource *a2)
{
  CComposition *v2; // rdi
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  bool v6; // bp
  CExcludeVisualReference *v7; // rbx
  CExcludeVisualReference *v8; // rdi
  struct CResource *v9; // rbp
  struct CResource *VisualNoRef; // rax
  struct CResource *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v2 = g_pComposition;
  v4 = (_QWORD *)((char *)g_pComposition + 6152);
  v5 = (_QWORD *)*((_QWORD *)g_pComposition + 770);
  v6 = *((_QWORD *)g_pComposition + 769) != (_QWORD)v5;
  if ( v5 == *((_QWORD **)g_pComposition + 771) )
  {
    std::vector<Microsoft::BamoImpl::BamoPrincipalImpl *>::_Emplace_reallocate<Microsoft::BamoImpl::BamoPrincipalImpl * const &>(
      v4,
      (__int64)v5,
      (__int64 *)&v11);
  }
  else
  {
    *v5 = a2;
    v4[1] += 8LL;
  }
  v7 = (CExcludeVisualReference *)*((_QWORD *)v2 + 766);
  v8 = (CExcludeVisualReference *)*((_QWORD *)v2 + 767);
  if ( v7 != v8 )
  {
    if ( v6 )
    {
      do
      {
        VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v7);
        if ( VisualNoRef )
          CResource::RegisterNotifier(a2, VisualNoRef);
        v7 = (CExcludeVisualReference *)((char *)v7 + 32);
      }
      while ( v7 != v8 );
    }
    else
    {
      do
      {
        v9 = CExcludeVisualReference::GetVisualNoRef(v7);
        if ( v9 )
        {
          CComposition::CursorVisualData::EnsureVisualTree(v7);
          CResource::RegisterNotifier(a2, v9);
        }
        v7 = (CExcludeVisualReference *)((char *)v7 + 32);
      }
      while ( v7 != v8 );
    }
  }
}
