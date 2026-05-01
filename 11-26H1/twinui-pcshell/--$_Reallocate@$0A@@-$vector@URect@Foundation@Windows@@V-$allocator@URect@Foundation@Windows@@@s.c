/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x180465D90
 * Callers:
 *     ?InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z @ 0x1800291B0 (-InvokeInputAppRequestedShow@TabTipAdapter@KeyboardHosting@@AEAAJIAEBUtagRECT@@UViewOptions@@@Z.c)
 *     ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801D9C30 (-Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shel.c)
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805ADCC0 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRect@Geometry@@_K1@Z @ 0x18022C388 (-_Change_array@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRec.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAURect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@YAPEAURect@Foundation@Windows@@QEAU123@0PEAU123@AEAV?$allocator@URect@Foundation@Windows@@@0@@Z @ 0x1802BDA2C (--$_Uninitialized_move@PEAURect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@XZ @ 0x180310764 (--1_Reallocation_guard@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@.c)
 */

void __fastcall std::vector<Windows::Foundation::Rect>::_Reallocate<0>(__int64 *a1, unsigned __int64 *a2)
{
  __int64 v4; // rdi
  unsigned __int64 size_of; // rax
  char *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  void *v9; // rcx
  __int64 v10; // r9
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v4 = (a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(*a2);
  v6 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v7 = a1[1];
  v8 = (__int64)v6;
  v11[2] = *a2;
  v9 = (void *)*a1;
  v11[0] = a1;
  std::_Uninitialized_move<Windows::Foundation::Rect *>(v9, v7, v6);
  v10 = *a2;
  v11[1] = 0LL;
  std::vector<Geometry::CRect>::_Change_array(a1, v8, v4, v10);
  std::vector<Windows::Foundation::Rect>::_Reallocation_guard::~_Reallocation_guard((__int64)v11);
}
