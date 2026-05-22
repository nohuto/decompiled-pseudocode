/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIHeadEventHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18006527C
 * Callers:
 *     _MPCHeadUpdateListener::OnHeadEventOccurredWorkerThread_::_1_::dtor$2 @ 0x1801D7919 (_MPCHeadUpdateListener--OnHeadEventOccurredWorkerThread_--_1_--dtor$2.c)
 *     _MPCGestureHandler::MPCGestureHandler_::_1_::dtor$5 @ 0x1801D9028 (_MPCGestureHandler--MPCGestureHandler_--_1_--dtor$5.c)
 *     _PenDevice::PenDevice_::_1_::dtor$1 @ 0x1801DC7D2 (_PenDevice--PenDevice_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x180065488 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<IHeadEventHandler,wil::err_exception_policy>>(
        _QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(v2, a1[1]);
    result = std::_Deallocate<16>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
