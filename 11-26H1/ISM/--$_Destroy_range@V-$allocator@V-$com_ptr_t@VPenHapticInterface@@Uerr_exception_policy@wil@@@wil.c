/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018BBE8
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18018BD7C (--$_Uninitialized_move@PEAV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$.c)
 *     ??1?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18018C088 (--1-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$c.c)
 *     ??1PenHapticDevice@@UEAA@XZ @ 0x18018C0DC (--1PenHapticDevice@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18018C1B8 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wi.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18018C684 (-_Change_array@-$vector@V-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@V-$al.c)
 * Callees:
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018C060 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
