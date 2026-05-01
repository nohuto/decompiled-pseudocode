/*
 * XREFs of _lambda_95ac369ff7c54e9b7c0e7f066758ab94_::operator() @ 0x18030D8D4
 * Callers:
 *     wistd::__function::__func__lambda_95ac369ff7c54e9b7c0e7f066758ab94__void___cdecl(void)_::operator() @ 0x18030DA70 (wistd--__function--__func__lambda_95ac369ff7c54e9b7c0e7f066758ab94__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801314B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveWindowMessageNotification@@UIImmersiveMonitorNotification@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D8840 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCIm_ea_1801D8840.c)
 *     ??0?$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesktopBlueLightReductionManager@@@Z @ 0x18021CDA4 (--0-$com_ptr_t@VDesktopBlueLightReductionManager@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVDesk.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9a532c669263e40c58353da21e68f0a_____lambda_e9a532c669263e40c58353da21e68f0a___ @ 0x18030D660 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_e9a532c669263.c)
 *     _lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_ @ 0x18030D700 (_lambda_fde1e3dd508437221a89b1c19fd2671f_--_lambda_fde1e3dd508437221a89b1c19fd2671f_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_95ac369ff7c54e9b7c0e7f066758ab94_::operator()(volatile int **a1)
{
  __int64 *v1; // r10
  _QWORD *v2; // rax
  __int64 v3; // r10
  unsigned int v4; // edi
  volatile signed __int32 **v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  volatile int *v8; // rdx
  int v9; // edi
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  volatile signed __int32 *v13; // [rsp+50h] [rbp+8h] BYREF
  volatile int *v14; // [rsp+58h] [rbp+10h] BYREF

  wil::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>::com_ptr_t<DesktopBlueLightReductionManager,wil::err_exception_policy>(
    &v14,
    *a1);
  v2 = (_QWORD *)lambda_fde1e3dd508437221a89b1c19fd2671f_::_lambda_fde1e3dd508437221a89b1c19fd2671f_(
                   (__int64)v10,
                   *v1,
                   &v14);
  v4 = *(_DWORD *)(*(_QWORD *)v3 + 204LL);
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e9a532c669263e40c58353da21e68f0a_____lambda_e9a532c669263e40c58353da21e68f0a___(
         &v13,
         v2);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(v7);
  }
  v9 = SHTaskPoolQueueTask(0LL, 2LL, v4);
  if ( v6 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v11 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
      v11,
      v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x151,
      (int)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v9);
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,IImmersiveWindowMessageNotification,IImmersiveMonitorNotification,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(
      (__int64)v14,
      v8);
}
