/*
 * XREFs of ?AddVisual@CVisualGroup@@IEAAJPEAVCVisual@@@Z @ 0x180262E00
 * Callers:
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18022A770 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x18022A864 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18013ED10 (-Create@CExcludeVisualReference@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ?GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ @ 0x180195048 (-GetVisualNoRef@CExcludeVisualReference@@QEBAPEAVCVisual@@XZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801A3300 (--1-$out_param_t@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualRefere.c)
 *     ?erase@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1801A3454 (-erase@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 *     ??1?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@QEAA@XZ @ 0x1801A351C (--1-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReference@@@std@@@std.c)
 *     ??$emplace_back@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@1@$$QEAV21@@Z @ 0x180262D7C (--$emplace_back@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

__int64 __fastcall CVisualGroup::AddVisual(CVisualGroup *this, struct CVisual *a2)
{
  __int64 **v2; // rdi
  CExcludeVisualReference **v4; // rbx
  struct CVisual *VisualNoRef; // rax
  int v8; // ebx
  int v9[2]; // [rsp+20h] [rbp-38h] BYREF
  struct CExcludeVisualReference *v10; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v2 = (__int64 **)((char *)this + 72);
  v4 = (CExcludeVisualReference **)*((_QWORD *)this + 9);
  while ( v4 != *((CExcludeVisualReference ***)this + 10) )
  {
    VisualNoRef = CExcludeVisualReference::GetVisualNoRef(*v4);
    if ( VisualNoRef )
    {
      if ( VisualNoRef == a2 )
        return 0LL;
      ++v4;
    }
    else
    {
      v4 = (CExcludeVisualReference **)*std::vector<std::unique_ptr<CExcludeVisualReference>>::erase(
                                          (__int64)v2,
                                          &v14,
                                          (__int64)v4);
    }
  }
  v13 = 0LL;
  *(_QWORD *)v9 = &v13;
  v10 = 0LL;
  v11 = 1;
  v8 = CExcludeVisualReference::Create(a2, &v10);
  wil::details::out_param_t<std::unique_ptr<CExcludeVisualReference>>::~out_param_t<std::unique_ptr<CExcludeVisualReference>>((__int64 **)v9);
  if ( v8 >= 0 )
  {
    std::vector<std::unique_ptr<CExcludeVisualReference>>::emplace_back<std::unique_ptr<CExcludeVisualReference>>(
      v2,
      &v13);
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualgroup.cpp",
      (const char *)(unsigned int)v8);
  }
  std::unique_ptr<CExcludeVisualReference>::~unique_ptr<CExcludeVisualReference>(&v13);
  return (unsigned int)v8;
}
