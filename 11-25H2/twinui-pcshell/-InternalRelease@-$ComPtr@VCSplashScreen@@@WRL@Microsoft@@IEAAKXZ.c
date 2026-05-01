/*
 * XREFs of ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x180183220
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180136E24 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z @ 0x18018290C (-OnSystemVisualChanged@CSplashScreen@@QEAAXW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180182C4C (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     _lambda_ca324c265ed58b3d9541d2204f682216_::operator() @ 0x180183034 (_lambda_ca324c265ed58b3d9541d2204f682216_--operator().c)
 *     ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x1802C5E20 (--1-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ.c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_::_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&_ @ 0x1802CCDC4 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-_--_CAsyncCallbackWithLambda.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___::_CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___ @ 0x1802CD254 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd___--_CTask.c)
 *     ??$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@PEAUIInspectable@@@Details@WRL@Microsoft@@YAJPEAPEAVCSplashScreen@@AEAPEAUHWND__@@AEA_N$$QEAPEAUIApplicationPresentationLayer@@$$QEAPEAUIInspectable@@@Z @ 0x180300194 (--$MakeAndInitialize@VCSplashScreen@@V1@AEAPEAUHWND__@@AEA_NPEAUIApplicationPresentationLayer@@P.c)
 *     ??1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ @ 0x180300A34 (--1CImmersiveWindowCollection@CImmersiveApp@@QEAA@XZ.c)
 *     _lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x18030A700 (_lambda_639d6738ffd80580db82ce4ed229ae7f_--__lambda_639d6738ffd80580db82ce4ed229ae7f_.c)
 *     ?add_Dismissed@CSplashScreen@@UEAAJPEAU?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18030B020 (-add_Dismissed@CSplashScreen@@UEAAJPEAU-$ITypedEventHandler@PEAVSplashScreen@Activation@Applicat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180183250 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Act.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::Release(v1);
  }
  return result;
}
