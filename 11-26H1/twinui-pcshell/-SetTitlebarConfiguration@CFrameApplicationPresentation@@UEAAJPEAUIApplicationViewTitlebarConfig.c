/*
 * XREFs of ?SetTitlebarConfiguration@CFrameApplicationPresentation@@UEAAJPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1801A1B60
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___ @ 0x1801A1CBC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___.c)
 *     ?ReconcileTitleBarconfiguration@@YA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@AEBUAppTitlebarConfiguration@@PEAUIApplicationViewTitlebarConfiguration@@W4APP_CHROME_CONFIGURATION_POLICY@@@Z @ 0x1801A1E08 (-ReconcileTitleBarconfiguration@@YA-AV-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_e.c)
 *     _lambda_8dfae0f1a0c35483e19f36087ce437d3_::_lambda_8dfae0f1a0c35483e19f36087ce437d3_ @ 0x1803043F0 (_lambda_8dfae0f1a0c35483e19f36087ce437d3_--_lambda_8dfae0f1a0c35483e19f36087ce437d3_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFrameApplicationPresentation::SetTitlebarConfiguration(
        CFrameApplicationPresentation *this,
        struct IApplicationViewTitlebarConfiguration *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  unsigned int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    v4 = *((_QWORD *)this + 73);
    *((_QWORD *)this + 73) = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    ReconcileTitleBarconfiguration(&v11, (char *)this + 592, a2, *((unsigned int *)this + 149));
    v5 = lambda_8dfae0f1a0c35483e19f36087ce437d3_::_lambda_8dfae0f1a0c35483e19f36087ce437d3_(v9, &v11, this);
    v6 = CFrameApplicationPresentation::_AddTaskToQueue__lambda_8dfae0f1a0c35483e19f36087ce437d3___(this, v5);
    if ( v11 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
    result = v6;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5E3,
                           (int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                           v7);
  }
  return result;
}
