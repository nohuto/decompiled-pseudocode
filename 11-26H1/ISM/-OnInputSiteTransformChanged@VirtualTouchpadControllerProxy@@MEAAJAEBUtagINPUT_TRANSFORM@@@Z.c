/*
 * XREFs of ?OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x1801387D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?4AEBUtagINPUT_TRANSFORM@@$0A@@?$optional@UtagINPUT_TRANSFORM@@@std@@QEAAAEAV01@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800608A4 (--$-4AEBUtagINPUT_TRANSFORM@@$0A@@-$optional@UtagINPUT_TRANSFORM@@@std@@QEAAAEAV01@AEBUtagINPUT_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x1801389E0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?ServerTransformChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagINPUT_TRANSFORM@@@Z @ 0x180139754 (-ServerTransformChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnInputSiteTransformChanged(
        VirtualTouchpadControllerProxy *this,
        const struct tagINPUT_TRANSFORM *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::VirtualTouchpad::ServerTransformChanged((char *)this - 128, a2);
  std::optional<tagINPUT_TRANSFORM>::operator=<tagINPUT_TRANSFORM const &,0>((__int64)this + 16, a2);
  v4 = VirtualTouchpadControllerProxy::OnSizeChanged((VirtualTouchpadControllerProxy *)((char *)this - 128));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17D,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontroller\\"
         "server\\virtualtouchpadcontrollerproxy.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
