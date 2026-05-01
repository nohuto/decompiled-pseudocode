/*
 * XREFs of shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___ @ 0x180600814
 * Callers:
 *     shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_scalar_deleting_destructor_ @ 0x180601200 (shell--TaskScheduler--CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___--_scalar_d.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEAAKXZ @ 0x1802C0D88 (-InternalRelease@-$ComPtr@VCLauncherTipContextMenu@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall shell::TaskScheduler::CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___::_CSimpleRunnableTask__lambda_9bfc867a9c7100a4740d0e4b48179e18___(
        volatile int **this)
{
  Microsoft::WRL::ComPtr<CLauncherTipContextMenu>::InternalRelease(this + 9);
  CRunnableTask::~CRunnableTask((CRunnableTask *)this);
}
