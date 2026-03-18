/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180295118
 * Callers:
 *     ?ProcessDeviceLost@CDeviceManager@@IEAAXXZ @ 0x180032674 (-ProcessDeviceLost@CDeviceManager@@IEAAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1802953C0 (--$_Uninitialized_move@PEAV-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V-$allocat.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x180295508 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V-$a.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1802956F4 (-_Change_array@-$vector@V-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@V-$allocator.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>>>(
        CD3DDevice **a1,
        CD3DDevice **a2)
{
  CD3DDevice **v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
