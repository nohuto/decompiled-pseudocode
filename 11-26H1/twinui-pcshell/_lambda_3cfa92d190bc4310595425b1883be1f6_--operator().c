/*
 * XREFs of _lambda_3cfa92d190bc4310595425b1883be1f6_::operator() @ 0x18055CC94
 * Callers:
 *     LambdaCustomPaintProc__lambda_3cfa92d190bc4310595425b1883be1f6__HDC_____ @ 0x18055B7C0 (LambdaCustomPaintProc__lambda_3cfa92d190bc4310595425b1883be1f6__HDC_____.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SelectObject@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@@1@PEAUHDC__@@PEAX@Z @ 0x1802074D4 (-SelectObject@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AXUselect_resu.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1?close@12@SAX0@ZU?$integral_constant@_K$0A@@wistd@@U12@PEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18022A6F8 (--1-$unique_storage@U-$resource_policy@PEAXP6AXUselect_result@wil@@@_E$1-close@12@SAX0@ZU-$integ.c)
 */

__int64 __fastcall lambda_3cfa92d190bc4310595425b1883be1f6_::operator()(__int64 a1, HDC a2, int *a3)
{
  HDC CompatibleDC; // rax
  HDC hdcSrc; // rbx
  HGDIOBJ v9[2]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CompatibleDC = CreateCompatibleDC(a2);
  hdcSrc = CompatibleDC;
  if ( CompatibleDC )
  {
    wil::SelectObject(v9, CompatibleDC, *(void **)(*(_QWORD *)a1 + 16LL));
    BitBlt(a2, 0, 0, *a3, a3[1], hdcSrc, 0, 0, 0xCC0020u);
    __1__unique_storage_U__resource_policy_PEAXP6AXUselect_result_wil____E_1_close_12_SAX0_ZU__integral_constant__K_0A__wistd__U12_PEAX_0A___T_details_wil___details_wil__QEAA_XZ((__int64)v9);
    DeleteDC(hdcSrc);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18C,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
