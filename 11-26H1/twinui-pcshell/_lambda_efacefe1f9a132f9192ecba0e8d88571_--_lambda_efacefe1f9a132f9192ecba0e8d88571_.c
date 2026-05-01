/*
 * XREFs of _lambda_efacefe1f9a132f9192ecba0e8d88571_::_lambda_efacefe1f9a132f9192ecba0e8d88571_ @ 0x180297B5C
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_725b3a637bab541e8e61b969de3d5fdf___ @ 0x180297A44 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_725b3a637bab541e8e61b969de3d5fdf___.c)
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___ @ 0x180303FA4 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_f3e3e2fda0c649fac664c2d9a1540e88___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_efacefe1f9a132f9192ecba0e8d88571_::_lambda_efacefe1f9a132f9192ecba0e8d88571_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        __int64 *a4)
{
  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = a3;
  a1[2] = *a4;
  return a1;
}
