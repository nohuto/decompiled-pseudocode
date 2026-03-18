/*
 * XREFs of ??$emplace_back@AEAPEAVCD3DDevice@@@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@AEAPEAVCD3DDevice@@@Z @ 0x180295468
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProducer@@@Z @ 0x1801D3C5C (--0-$com_ptr_t@VCShadowMaskProducer@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCShadowMaskProdu.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x180295150 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_po.c)
 */

char *__fastcall std::vector<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>::emplace_back<CD3DDevice * &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rcx

  if ( a1[1] == a1[2] )
    return std::vector<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>::_Emplace_reallocate<CD3DDevice * &>(
             a1,
             a1[1],
             a2);
  wil::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>::com_ptr_t<CShadowMaskProducer,wil::err_returncode_policy>(
    (_QWORD *)a1[1],
    *a2);
  v3 = a1[1];
  a1[1] = v3 + 8;
  return (char *)v3;
}
