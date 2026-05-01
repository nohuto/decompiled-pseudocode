/*
 * XREFs of _lambda_d2f504444b1331544961ef61763d2cb7_::_lambda_d2f504444b1331544961ef61763d2cb7_ @ 0x1803044E0
 * Callers:
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800600F8 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_d2f504444b1331544961ef61763d2cb7_::_lambda_d2f504444b1331544961ef61763d2cb7_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _BYTE *a4)
{
  __int64 *v5; // rcx

  *(_QWORD *)a1 = a2;
  v5 = (__int64 *)(a1 + 8);
  *v5 = *a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v5);
  *(_BYTE *)(a1 + 16) = *a4;
  return a1;
}
