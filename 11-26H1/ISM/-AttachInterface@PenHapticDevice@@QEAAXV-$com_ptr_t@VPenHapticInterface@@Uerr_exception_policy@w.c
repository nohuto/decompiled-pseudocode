/*
 * XREFs of ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C25C
 * Callers:
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180195658 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 * Callees:
 *     ??$_Emplace_back_with_unused_capacity@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAAEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@AEBV23@@Z @ 0x18018BC20 (--$_Emplace_back_with_unused_capacity@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18018BC4C (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$.c)
 *     ??$emplace@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@1@AEBV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018BED0 (--$emplace@AEBV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector@V-$co.c)
 *     ?UpdateBamoProperties@PenHapticDevice@@QEAAXXZ @ 0x18018C560 (-UpdateBamoProperties@PenHapticDevice@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::AttachInterface(PenHapticDevice *this, __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = (__int64 *)((char *)this + 88);
  if ( *(_BYTE *)(*a2 + 264) )
  {
    v5 = v4[1];
    if ( v5 == v4[2] )
      std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> const &>(
        v4,
        v5,
        a2);
    else
      std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::_Emplace_back_with_unused_capacity<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> const &>(
        (__int64)v4,
        a2);
  }
  else
  {
    std::vector<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>::emplace<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy> const &>(
      v4,
      &v7,
      *v4,
      a2);
  }
  PenHapticDevice::UpdateBamoProperties(this);
  return wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(a2);
}
