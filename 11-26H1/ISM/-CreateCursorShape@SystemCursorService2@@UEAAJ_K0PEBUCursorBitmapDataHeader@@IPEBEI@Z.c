/*
 * XREFs of ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800FB480
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x18008FC04 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800F7A00 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ??$?0V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@?$_Ref_count_obj2@VSystemCursorShapeBitmap2@@@std@@QEAA@$$QEAV?$shared_ptr@VSystemCursorService2@@@1@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@1@@Z @ 0x1800F9C10 (--$-0V-$shared_ptr@VSystemCursorService2@@@std@@AEAV-$shared_ptr@VCursorBitmapData@SystemCursors.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VSystemCursor2@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor2@@@std@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FA1CC (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VSystemCursor2@@@std@@V-$_Uhash.c)
 *     ??$make_shared@VCursorBitmapData@SystemCursors@@$$V@std@@YA?AV?$shared_ptr@VCursorBitmapData@SystemCursors@@@0@XZ @ 0x1800FA46C (--$make_shared@VCursorBitmapData@SystemCursors@@$$V@std@@YA-AV-$shared_ptr@VCursorBitmapData@Sys.c)
 *     ??$make_shared@VSystemCursorShape2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursorShape2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEA_K@Z @ 0x1800FA57C (--$make_shared@VSystemCursorShape2@@V-$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA-AV-.c)
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800FAB94 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddShape@SystemCursor2@@QEAAJV?$shared_ptr@VSystemCursorShape2@@@std@@@Z @ 0x1800FAE3C (-AddShape@SystemCursor2@@QEAAJV-$shared_ptr@VSystemCursorShape2@@@std@@@Z.c)
 *     ?InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z @ 0x1801637C4 (-InitializeFromBamoBlob@CursorBitmapData@SystemCursors@@QEAAJPEBUCursorBitmapDataHeader@@PEBEI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall SystemCursorService2::CreateCursorShape(
        SystemCursorService2 *this,
        __int64 a2,
        __int64 a3,
        const struct CursorBitmapDataHeader *a4,
        unsigned int a5,
        const unsigned __int8 *a6,
        unsigned int a7)
{
  unsigned int v9; // ebx
  char *v11; // r15
  _QWORD *v12; // rax
  unsigned int v13; // edi
  __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rbx
  std::_Ref_count_base *v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rax
  std::_Ref_count_base *v20; // rcx
  _QWORD *v21; // rax
  SystemCursor2 *v22; // r8
  SystemCursors::CursorBitmapData *v23; // [rsp+28h] [rbp-81h] BYREF
  std::_Ref_count_base *v24; // [rsp+30h] [rbp-79h]
  __int64 v25; // [rsp+38h] [rbp-71h] BYREF
  std::_Ref_count_base *v26; // [rsp+40h] [rbp-69h]
  _QWORD v27[2]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v28[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v29; // [rsp+68h] [rbp-41h] BYREF
  std::_Ref_count_base *v30; // [rsp+70h] [rbp-39h]
  __int64 v31; // [rsp+78h] [rbp-31h] BYREF
  std::_Ref_count_base *v32; // [rsp+80h] [rbp-29h]
  __int64 v33; // [rsp+88h] [rbp-21h] BYREF
  std::_Ref_count_base *v34; // [rsp+90h] [rbp-19h]
  _BYTE v35[16]; // [rsp+98h] [rbp-11h] BYREF
  _BYTE v36[64]; // [rsp+A8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+47h]
  void *v38; // [rsp+F8h] [rbp+4Fh]
  __int64 v39; // [rsp+100h] [rbp+57h] BYREF
  __int64 v40; // [rsp+108h] [rbp+5Fh] BYREF

  v40 = a3;
  v39 = a2;
  if ( (*(unsigned __int8 (__fastcall **)(SystemCursorService2 *))(*(_QWORD *)this + 112LL))(this) )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<SystemCursor2>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor2>>>,0>>::_Try_emplace<unsigned __int64 const &,>(
      (float *)this + 12,
      (__int64)v35,
      (unsigned __int8 *)&v39);
    v11 = (char *)this + 24;
    v12 = (_QWORD *)std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)this + 24, &v31);
    std::make_shared<SystemCursorShape2,std::shared_ptr<SystemCursorService2>,unsigned __int64 &>(&v25, v12, &v40);
    if ( v32 )
      std::_Ref_count_base::_Decref(v32);
    v13 = 0;
    v14 = v25;
    while ( v13 < a5 )
    {
      std::make_shared<SystemCursors::CursorBitmapData,>(&v23);
      v15 = SystemCursors::CursorBitmapData::InitializeFromBamoBlob(
              v23,
              (const struct CursorBitmapDataHeader *)((char *)a4 + 29 * v13),
              a6,
              a7);
      v9 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x82,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice2.cpp",
          (const char *)(unsigned int)v15);
        if ( v24 )
          std::_Ref_count_base::_Decref(v24);
        if ( v26 )
          std::_Ref_count_base::_Decref(v26);
        return v9;
      }
      v16 = std::enable_shared_from_this<SystemCursorService2>::shared_from_this((__int64)v11, &v33);
      v38 = operator new(0x30uLL);
      v17 = (std::_Ref_count_base *)std::_Ref_count_obj2<SystemCursorShapeBitmap2>::_Ref_count_obj2<SystemCursorShapeBitmap2>(
                                      (__int64)v38,
                                      v16,
                                      &v23);
      v28[0] = (char *)v17 + 16;
      v28[1] = v17;
      if ( v34 )
        std::_Ref_count_base::_Decref(v34);
      v18 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v27, v28);
      std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(&v29, (_QWORD *)(*v18 + 16LL));
      v19 = std::_Hash<std::_Umap_traits<unsigned int,std::shared_ptr<CustomCursorApplication2>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::shared_ptr<CustomCursorApplication2>>>,0>>::_Try_emplace<unsigned int const &,>(
              (float *)(v14 + 16),
              (__int64)v36,
              (unsigned __int8 *)(v29 + 4));
      std::shared_ptr<SystemCursorShapeBitmap2>::operator=((__int64 *)(*(_QWORD *)v19 + 24LL), v18);
      if ( v30 )
        std::_Ref_count_base::_Decref(v30);
      v20 = (std::_Ref_count_base *)v18[1];
      if ( v20 )
        std::_Ref_count_base::_Decref(v20);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      if ( v24 )
        std::_Ref_count_base::_Decref(v24);
      ++v13;
    }
    v21 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v27, &v25);
    SystemCursor2::AddShape(v22, v21);
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    return 0LL;
  }
  else
  {
    v9 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x74,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorservice2.cpp",
      (const char *)0x80070057LL);
    return v9;
  }
}
