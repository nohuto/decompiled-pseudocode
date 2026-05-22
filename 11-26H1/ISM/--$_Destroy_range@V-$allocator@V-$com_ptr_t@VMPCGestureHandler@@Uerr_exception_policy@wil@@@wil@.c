/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180065488
 * Callers:
 *     ??1?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18006527C (--1-$vector@V-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ?OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ @ 0x1800652D0 (-OnHeadEventOccurredWorkerThread@MPCHeadUpdateListener@@QEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@_K1@Z @ 0x18008A168 (-_Change_array@-$vector@V-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V-$allocato.c)
 *     ??$_Uninitialized_move@PEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAV12@0PEAV12@AEAV?$allocator@V?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180096D94 (--$_Uninitialized_move@PEAV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@V-$alloca.c)
 *     ??1MPCGestureHandlerManager@@UEAA@XZ @ 0x1800B1BE0 (--1MPCGestureHandlerManager@@UEAA@XZ.c)
 *     ??1_Reallocation_guard@?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800B1C50 (--1_Reallocation_guard@-$vector@V-$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x1800BD044 (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??1PenDevice@@UEAA@XZ @ 0x180194B6C (--1PenDevice@@UEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
