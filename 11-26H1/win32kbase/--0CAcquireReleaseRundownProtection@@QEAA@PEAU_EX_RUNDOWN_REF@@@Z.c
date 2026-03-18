/*
 * XREFs of ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401D94C4
 * Callers:
 *     SendWinlogonPowerMessageWorker @ 0x1401C0344 (SendWinlogonPowerMessageWorker.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 * Callees:
 *     <none>
 */

CAcquireReleaseRundownProtection *__fastcall CAcquireReleaseRundownProtection::CAcquireReleaseRundownProtection(
        CAcquireReleaseRundownProtection *this,
        struct _EX_RUNDOWN_REF *a2)
{
  *(_QWORD *)this = 0LL;
  if ( ExAcquireRundownProtection(a2) )
    *(_QWORD *)this = a2;
  return this;
}
