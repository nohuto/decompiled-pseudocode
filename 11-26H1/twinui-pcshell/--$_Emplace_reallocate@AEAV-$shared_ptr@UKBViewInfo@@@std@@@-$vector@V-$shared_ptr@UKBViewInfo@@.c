/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@UKBViewInfo@@@1@QEAV21@AEAV21@@Z @ 0x18018FC5C
 * Callers:
 *     ??$emplace_back@AEAV?$shared_ptr@UKBViewInfo@@@std@@@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@UKBViewInfo@@@1@AEAV21@@Z @ 0x1804663D0 (--$emplace_back@AEAV-$shared_ptr@UKBViewInfo@@@std@@@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V.c)
 * Callees:
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@YAPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x180090FAC (--$_Uninitialized_move@PEAV-$shared_ptr@UViewEventRegistration@@@std@@V-$allocator@V-$shared_ptr.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@UKBViewInfo@@@std@@V?$allocator@V?$shared_ptr@UKBViewInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@UKBViewInfo@@@2@_K1@Z @ 0x18018FDAC (-_Change_array@-$vector@V-$shared_ptr@UKBViewInfo@@@std@@V-$allocator@V-$shared_ptr@UKBViewInfo@.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1801F9A20 (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$shared_ptr@VCAppThumbnailWindow@@@std@@V?$allocator@V?$shared_ptr@VCAppThumbnailWindow@@@std@@@2@@std@@QEAA@XZ @ 0x180317A08 (--1_Reallocation_guard@-$vector@V-$shared_ptr@VCAppThumbnailWindow@@@std@@V-$allocator@V-$shared.c)
 */

_QWORD *__fastcall std::vector<std::shared_ptr<KBViewInfo>>::_Emplace_reallocate<std::shared_ptr<KBViewInfo> &>(
        char **a1,
        char *a2,
        _QWORD *a3)
{
  char *v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 size_of; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rbp
  char *v13; // rdx
  _QWORD *v14; // r8
  char *v15; // rcx
  char **v17; // [rsp+20h] [rbp-58h] BYREF
  __int64 v18; // [rsp+30h] [rbp-48h]
  _QWORD *v19; // [rsp+38h] [rbp-40h]
  _QWORD *v20; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v17 = a1;
  v18 = v9;
  v11 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = (_QWORD *)((char *)v11 + ((a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL));
  v20 = v12 + 2;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v19 = v12;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
      v15,
      a2,
      v11);
    v13 = a1[1];
    v14 = v12 + 2;
    v15 = a2;
    v19 = v11;
  }
  std::_Uninitialized_move<std::shared_ptr<ViewEventRegistration> *,std::allocator<std::shared_ptr<ViewEventRegistration>>>(
    v15,
    v13,
    v14);
  std::vector<std::shared_ptr<KBViewInfo>>::_Change_array(a1, v11, v8, v9, v17, 0LL, v18, v19, v20);
  std::vector<std::shared_ptr<CAppThumbnailWindow>>::_Reallocation_guard::~_Reallocation_guard(&v17);
  return v12;
}
