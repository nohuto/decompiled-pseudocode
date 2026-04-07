/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18005DC2C
 * Callers:
 *     ??1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x18002E86C (--1TransitionState@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ??1CPrimitiveGroupVisual@@MEAA@XZ @ 0x180065DCC (--1CPrimitiveGroupVisual@@MEAA@XZ.c)
 *     ?Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ @ 0x180087E70 (-Complete@TransitionState@implementation@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x18008AA1C (-_Change_array@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x1800BDA6C (--$_Uninitialized_move@PEAV-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800BDAF8 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@V-$allo.c)
 * Callees:
 *     ??1?$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006344 (--1-$com_ptr_t@VCDisplaySecondaryOnlyToExtendAnimatedVisual@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 */

unsigned int __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<CVisual,wil::err_returncode_policy>>>(
        CBaseObject **a1,
        CBaseObject **a2)
{
  CBaseObject **v3; // rbx
  unsigned int result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>::~com_ptr_t<CDisplaySecondaryOnlyToExtendAnimatedVisual,wil::err_returncode_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
