/*
 * XREFs of ??1?$com_ptr_t@VKernelContextProvider@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800954A0
 * Callers:
 *     ?Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z @ 0x18010C380 (-Create@InputConfigContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 *     ?Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z @ 0x1801A5790 (-Create@VirtualTouchpadContextProvider@@CAJPEAPEAV1@@Z.c)
 *     ?Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z @ 0x1801A6350 (-Create@DisplayOcclusionContextProvider@@CAJPEAPEAV1@@Z.c)
 *     _DisplayOcclusionContextProvider::Create_::_1_::dtor$0 @ 0x1801D7D2D (_DisplayOcclusionContextProvider--Create_--_1_--dtor$0.c)
 *     _InputConfigContextProvider::Create_::_1_::dtor$0 @ 0x1801DAE06 (_InputConfigContextProvider--Create_--_1_--dtor$0.c)
 *     _DeviceDockServer::OnDockInput_::_1_::dtor$3 @ 0x1801DC1CF (_DeviceDockServer--OnDockInput_--_1_--dtor$3.c)
 * Callees:
 *     ?Release@InputContext@@UEAAKXZ @ 0x180021CF0 (-Release@InputContext@@UEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<KernelContextProvider,wil::err_exception_policy>::~com_ptr_t<KernelContextProvider,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return InputContext::Release((InputContext *)(v1 + 8));
  return result;
}
