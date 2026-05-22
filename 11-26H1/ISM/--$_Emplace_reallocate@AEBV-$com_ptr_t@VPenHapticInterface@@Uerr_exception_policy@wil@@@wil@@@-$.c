/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18018BC4C
 * Callers:
 *     ??$emplace@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018BED0 (--$emplace@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$co.c)
 *     ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C25C (-AttachInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18002B550 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@CAXXZ @ 0x180075758 (-_Xlength@-$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V-$allocator@UContext.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010D2DC (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018BD7C (--$_Uninitialized_move@PEAV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18018C1B8 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wi.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18018C684 (-_Change_array@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$al.c)
 */

__int64 *__fastcall std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> const &>(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  __int64 *v13; // rsi
  __int64 *v14; // r15
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  _QWORD *v19; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 *v21; // [rsp+38h] [rbp-40h]
  __int64 *v22; // [rsp+40h] [rbp-38h]

  v3 = 0x1FFFFFFFFFFFFFFFLL;
  v5 = (a2 - *a1) >> 3;
  v7 = (__int64)(a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Xlength();
  v9 = v7 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v3);
  v19 = a1;
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20 = v3;
  v14 = &v13[v5];
  v22 = v14 + 1;
  wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
    v14,
    a3);
  v15 = a1[1];
  v16 = v13;
  v17 = *a1;
  v21 = v14;
  if ( a2 != v15 )
  {
    std::_Uninitialized_move<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>>(
      v17,
      a2,
      v13);
    v15 = a1[1];
    v16 = v14 + 1;
    v17 = a2;
    v21 = v13;
  }
  std::_Uninitialized_move<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> *,std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>>(
    v17,
    v15,
    v16);
  std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::_Change_array(
    a1,
    v13,
    v9,
    v3,
    v19,
    0LL,
    v20,
    v21,
    v22);
  std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::_Reallocation_guard::~_Reallocation_guard(&v19);
  return v14;
}
