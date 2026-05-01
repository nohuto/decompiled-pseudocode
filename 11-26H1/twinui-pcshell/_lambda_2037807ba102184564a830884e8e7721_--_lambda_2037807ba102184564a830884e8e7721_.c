/*
 * XREFs of _lambda_2037807ba102184564a830884e8e7721_::_lambda_2037807ba102184564a830884e8e7721_ @ 0x1803041E0
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___ @ 0x1801B9554 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_d2f504444b1331544961ef61763d2cb7___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_2037807ba102184564a830884e8e7721_::_lambda_2037807ba102184564a830884e8e7721_(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a4;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a4 + 8);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 24));
  *(_BYTE *)(a1 + 32) = *(_BYTE *)(a4 + 16);
  return a1;
}
