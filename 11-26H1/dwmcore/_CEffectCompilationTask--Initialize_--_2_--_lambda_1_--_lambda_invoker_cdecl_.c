/*
 * XREFs of _CEffectCompilationTask::Initialize_::_2_::_lambda_1_::_lambda_invoker_cdecl_ @ 0x180244FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CEffectCompilationTask::Initialize_::_2_::_lambda_1_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        CEffectCompilationTask *Context,
        PTP_WORK Work)
{
  CEffectCompilationTask::Compile_WorkerThread(Context);
}
