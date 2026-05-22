/*
 * XREFs of ?AttachInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180194C8C
 * Callers:
 *     ?EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@AEBU_GUID@@@Z @ 0x18018ED88 (-EnsureInterfaceAttached@HapticDeviceManager@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_po.c)
 * Callees:
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1800BCAF0 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@-$vector.c)
 *     ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180195658 (-UpdateBamoProperties@PenDevice@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDevice::AttachInterface(__int64 **this, __int64 *a2)
{
  if ( this[11] == this[12] )
    std::vector<wil::com_ptr_t<PenInterface,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<PenInterface,wil::err_exception_policy> const &>(
      (__int64)(this + 10),
      this[11],
      a2);
  else
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(this[11]++, *a2);
  PenDevice::UpdateBamoProperties((PenDevice *)this);
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
