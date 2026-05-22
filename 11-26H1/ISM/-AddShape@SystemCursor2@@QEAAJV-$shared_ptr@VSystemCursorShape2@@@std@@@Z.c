/*
 * XREFs of ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1800FAE3C
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800FB480 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FA1CC (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ?AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z @ 0x1800FAF28 (-AddShapeToCursor@Cursor@InputTraceLogging@@SAXPEBX_K@Z.c)
 *     ?SetShape@SystemCursor2@@QEAAJ_K_N@Z @ 0x1800FCD58 (-SetShape@SystemCursor2@@QEAAJ_K_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemCursor2::AddShape(SystemCursor2 *this, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  int v8; // eax
  unsigned int v9; // ebx
  std::_Ref_count_base *v10; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v18; // [rsp+58h] [rbp+10h]

  v18 = a2;
  v17 = *(_QWORD *)(*a2 + 80LL);
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
    (float *)this + 22,
    (__int64)&v15,
    (unsigned __int8 *)&v17);
  v4 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v13, a2);
  v5 = *v4;
  *v4 = *(_QWORD *)(v6 + 24);
  *(_QWORD *)(v6 + 24) = v5;
  v7 = v4[1];
  v4[1] = *(_QWORD *)(v6 + 32);
  *(_QWORD *)(v6 + 32) = v7;
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  InputTraceLogging::Cursor::AddShapeToCursor(this, v17);
  if ( (*((_QWORD *)this + 6) == v17 || *((_QWORD *)this + 5) == v17)
    && (v8 = SystemCursor2::SetShape(this, v17, 0), v9 = v8, v8 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x204,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)(unsigned int)v8);
    v10 = (std::_Ref_count_base *)a2[1];
    if ( v10 )
      std::_Ref_count_base::_Decref(v10);
    return v9;
  }
  else
  {
    v12 = (std::_Ref_count_base *)a2[1];
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
    return 0LL;
  }
}
