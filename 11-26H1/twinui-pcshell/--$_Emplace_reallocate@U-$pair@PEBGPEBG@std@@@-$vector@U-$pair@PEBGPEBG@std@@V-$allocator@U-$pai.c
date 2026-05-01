/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@PEBGPEBG@std@@@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAPEAU?$pair@PEBGPEBG@1@QEAU21@$$QEAU21@@Z @ 0x180233F08
 * Callers:
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18028F404 (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18028F578 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A1C30 (-SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOp.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1801901F8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRect@Geometry@@_K1@Z @ 0x18022C388 (-_Change_array@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRec.c)
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAURect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@YAPEAURect@Foundation@Windows@@QEAU123@0PEAU123@AEAV?$allocator@URect@Foundation@Windows@@@0@@Z @ 0x1802BDA2C (--$_Uninitialized_move@PEAURect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@.c)
 *     ??1_Reallocation_guard@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAA@XZ @ 0x180310764 (--1_Reallocation_guard@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@.c)
 */

_OWORD *__fastcall std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Emplace_reallocate<std::pair<unsigned short const *,unsigned short const *>>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 size_of; // rax
  __int64 v13; // rax
  __int128 v14; // xmm0
  _OWORD *v15; // r14
  __int64 v16; // rsi
  _OWORD *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  _OWORD *v22; // [rsp+38h] [rbp-40h]
  _OWORD *v23; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v14 = *a3;
  v21[0] = a1;
  v15 = (_OWORD *)(v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL));
  v21[2] = v3;
  v16 = v13;
  v22 = v15;
  v17 = (_OWORD *)v13;
  *v15 = v14;
  v18 = a1[1];
  v19 = *a1;
  v23 = v15 + 1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<Windows::Foundation::Rect *>(v19, a2, v13);
    v18 = a1[1];
    v17 = v15 + 1;
    v19 = a2;
    v22 = (_OWORD *)v16;
  }
  std::_Uninitialized_move<Windows::Foundation::Rect *>(v19, v18, v17);
  v21[1] = 0LL;
  std::vector<Geometry::CRect>::_Change_array(a1, v16, v9, v3);
  std::vector<Windows::Foundation::Rect>::_Reallocation_guard::~_Reallocation_guard(v21);
  return v15;
}
