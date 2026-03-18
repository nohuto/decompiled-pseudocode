/*
 * XREFs of ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1802953C0
 * Callers:
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x180295150 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_po.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180295118 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@.c)
 */

CD3DDevice **__fastcall std::_Uninitialized_move<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy> *,std::allocator<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>>(
        CD3DDevice **a1,
        CD3DDevice **a2,
        CD3DDevice **a3)
{
  CD3DDevice *v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>>(a3, a3);
  return a3;
}
