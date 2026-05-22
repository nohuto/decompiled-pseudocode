/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@ULegacyDeviceInfo@@@1@QEAV21@AEBV21@@Z @ 0x1800CE7E4
 * Callers:
 *     ??$emplace_back@AEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@ULegacyDeviceInfo@@@1@AEAV21@@Z @ 0x1800CEA68 (--$emplace_back@AEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@@-$vector@V-$shared_ptr@ULegacyDeviceI.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18002DF80 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@U?$pair@KPEAUIInputProcessor@@@std@@V?$allocator@U?$pair@KPEAUIInputProcessor@@@std@@@2@@std@@AEBA_K_K@Z @ 0x180098184 (-_Calculate_growth@-$vector@U-$pair@KPEAUIInputProcessor@@@std@@V-$allocator@U-$pair@KPEAUIInput.c)
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CE9B8 (--$_Uninitialized_move@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULeg.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CEB28 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1_Reallocation_guard@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1800CEEB4 (--1_Reallocation_guard@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_pt.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@ULegacyDeviceInfo@@@2@_K1@Z @ 0x1800CFBFC (-_Change_array@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegac.c)
 */

char *__fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Emplace_reallocate<std::shared_ptr<LegacyDeviceInfo> const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 size_of; // rax
  char *v11; // rdi
  char *v12; // rbp
  __int64 v13; // rdx
  char *v14; // r8
  __int64 v15; // rcx
  _QWORD *v17; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+30h] [rbp-48h]
  char *v19; // [rsp+38h] [rbp-40h]
  char *v20; // [rsp+40h] [rbp-38h]

  v3 = *a1;
  v6 = (__int64)(a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v8 = v6 + 1;
  v9 = std::vector<std::pair<unsigned long,IInputProcessor *>>::_Calculate_growth(a1, v6 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v17 = a1;
  v18 = v9;
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v12 = &v11[(a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL];
  v20 = v12 + 16;
  std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v12, a3);
  v13 = a1[1];
  v14 = v11;
  v15 = *a1;
  v19 = v12;
  if ( a2 != v13 )
  {
    std::_Uninitialized_move<std::shared_ptr<LegacyDeviceInfo> *,std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(
      v15,
      a2,
      v11);
    v13 = a1[1];
    v14 = v12 + 16;
    v15 = a2;
    v19 = v11;
  }
  std::_Uninitialized_move<std::shared_ptr<LegacyDeviceInfo> *,std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(
    v15,
    v13,
    v14);
  std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Change_array(a1, v11, v8, v9, v17, 0LL, v18, v19, v20);
  std::vector<std::shared_ptr<LegacyDeviceInfo>>::_Reallocation_guard::~_Reallocation_guard(&v17);
  return v12;
}
