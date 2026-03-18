/*
 * XREFs of ?RemoveCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022B0E0
 * Callers:
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18022B054 (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 *     ?UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z @ 0x1802341D4 (-UnregisterCursorVisual@CGlobalComposition@@QEAAXPEAVCCursorVisual@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180022EAC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 */

void __fastcall CComposition::RemoveCursorVisual(CComposition *this, struct CVisual *a2)
{
  CExcludeVisualReference *v2; // rbx
  CExcludeVisualReference **v3; // r15
  struct CVisual *VisualNoRef; // rax
  struct CVisual *v7; // rdi
  CResource **v8; // rbp
  CResource **i; // rdi
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = (CExcludeVisualReference *)*((_QWORD *)this + 767);
  v3 = (CExcludeVisualReference **)((char *)this + 6128);
  while ( v2 != *v3 )
  {
    v2 = (CExcludeVisualReference *)((char *)v2 - 32);
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v2);
    v7 = VisualNoRef;
    if ( VisualNoRef == a2 || !VisualNoRef )
    {
      std::vector<CComposition::CursorVisualData>::erase(v3, &v10, v2);
      if ( v7 == a2 )
      {
        v8 = (CResource **)*((_QWORD *)this + 770);
        for ( i = (CResource **)*((_QWORD *)this + 769); i != v8; ++i )
          CResource::UnRegisterNotifierInternal(*i, a2);
      }
    }
  }
}
