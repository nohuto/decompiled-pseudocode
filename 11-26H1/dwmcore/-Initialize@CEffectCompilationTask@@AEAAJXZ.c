/*
 * XREFs of ?Initialize@CEffectCompilationTask@@AEAAJXZ @ 0x18014DCB0
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x18014D028 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     <none>
 */

signed int __fastcall CEffectCompilationTask::Initialize(PVOID pv)
{
  PTP_WORK ThreadpoolWork; // rax
  signed int result; // eax

  ThreadpoolWork = CreateThreadpoolWork(
                     CEffectCompilationTask::Initialize_::_2_::_lambda_1_::_lambda_invoker_cdecl_,
                     pv,
                     0LL);
  *((_QWORD *)pv + 8) = ThreadpoolWork;
  if ( ThreadpoolWork )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
