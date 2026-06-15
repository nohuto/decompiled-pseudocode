/*
 * XREFs of ?ScheduleDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x180014F88
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcess::ScheduleDeferredBamExemptionRelease(_QWORD *pv)
{
  struct _TP_TIMER *ThreadpoolTimer; // rax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  ThreadpoolTimer = (struct _TP_TIMER *)pv[73];
  if ( ThreadpoolTimer
    || (ThreadpoolTimer = CreateThreadpoolTimer(
                            lambda_27ffc4f27c89750b73dd50f8af6b1d3e_::_lambda_invoker_cdecl_,
                            pv,
                            0LL),
        (pv[73] = ThreadpoolTimer) != 0LL) )
  {
    pftDueTime = (struct _FILETIME)-200000000LL;
    SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, 0, 0);
  }
}
