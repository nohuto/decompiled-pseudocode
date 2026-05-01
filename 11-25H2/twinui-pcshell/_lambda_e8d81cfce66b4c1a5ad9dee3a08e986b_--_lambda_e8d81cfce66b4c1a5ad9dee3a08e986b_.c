/*
 * XREFs of _lambda_e8d81cfce66b4c1a5ad9dee3a08e986b_::_lambda_e8d81cfce66b4c1a5ad9dee3a08e986b_ @ 0x180308864
 * Callers:
 *     ?RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ @ 0x180012220 (-RegisterForPresentationEvents@UndockedSearchAppExperienceManager@@AEAAJXZ.c)
 *     ?SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x1801FB2B0 (-SynchronizeWindowTitleAndButtons@CFrameApplicationPresentation@@UEAAJPEAUIImmersiveApplication@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall lambda_e8d81cfce66b4c1a5ad9dee3a08e986b_::_lambda_e8d81cfce66b4c1a5ad9dee3a08e986b_(
        _QWORD *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v3; // rax
  __int64 *v5; // rcx

  v3 = *a3;
  *a1 = a2;
  v5 = a1 + 1;
  *v5 = v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  return a1;
}
