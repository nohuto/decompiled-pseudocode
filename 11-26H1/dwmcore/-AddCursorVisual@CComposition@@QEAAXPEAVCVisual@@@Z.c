/*
 * XREFs of ?AddCursorVisual@CComposition@@QEAAXPEAVCVisual@@@Z @ 0x18022A5AC
 * Callers:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x18021F828 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 *     ?Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18022B054 (-Partition_SetCursor@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_P.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ??0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z @ 0x18013ED8C (--0CExcludeVisualReference@@QEAA@PEAVCVisual@@@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??$emplace_back@UCursorVisualData@CComposition@@@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAAAEAUCursorVisualData@CComposition@@$$QEAU23@@Z @ 0x1802295D4 (--$emplace_back@UCursorVisualData@CComposition@@@-$vector@UCursorVisualData@CComposition@@V-$all.c)
 *     ??1CursorVisualData@CComposition@@QEAA@XZ @ 0x18022A2B8 (--1CursorVisualData@CComposition@@QEAA@XZ.c)
 *     ?EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ @ 0x18022A9E4 (-EnsureVisualTree@CursorVisualData@CComposition@@QEAAXXZ.c)
 *     ?erase@?$vector@UCursorVisualData@CComposition@@V?$allocator@UCursorVisualData@CComposition@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UCursorVisualData@CComposition@@@std@@@std@@@2@@Z @ 0x18022B8E4 (-erase@-$vector@UCursorVisualData@CComposition@@V-$allocator@UCursorVisualData@CComposition@@@st.c)
 */

void __fastcall CComposition::AddCursorVisual(CComposition *this, struct CVisual *a2)
{
  __int64 *v2; // rsi
  CExcludeVisualReference *v4; // rbx
  struct CVisual *VisualNoRef; // rax
  __int64 v7; // rax
  CResource **v8; // rsi
  CResource **i; // rbx
  _BYTE v10[24]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  char v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 6128);
  v4 = (CExcludeVisualReference *)*((_QWORD *)this + 767);
  while ( v4 != (CExcludeVisualReference *)*v2 )
  {
    v4 = (CExcludeVisualReference *)((char *)v4 - 32);
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(v4);
    if ( VisualNoRef )
    {
      if ( VisualNoRef == a2 )
        goto LABEL_8;
    }
    else
    {
      std::vector<CComposition::CursorVisualData>::erase(v2, &v12, v4);
    }
  }
  v4 = 0LL;
LABEL_8:
  if ( !v4 )
  {
    CExcludeVisualReference::CExcludeVisualReference((CExcludeVisualReference *)v10, a2);
    v7 = *((_QWORD *)this + 770);
    v11 = 0LL;
    if ( *((_QWORD *)this + 769) != v7 )
      CComposition::CursorVisualData::EnsureVisualTree((CComposition::CursorVisualData *)v10);
    std::vector<CComposition::CursorVisualData>::emplace_back<CComposition::CursorVisualData>(v2, (__int64)v10);
    v8 = (CResource **)*((_QWORD *)this + 770);
    for ( i = (CResource **)*((_QWORD *)this + 769); i != v8; ++i )
      CResource::RegisterNotifier(*i, a2);
    CComposition::CursorVisualData::~CursorVisualData((CComposition::CursorVisualData *)v10);
  }
}
