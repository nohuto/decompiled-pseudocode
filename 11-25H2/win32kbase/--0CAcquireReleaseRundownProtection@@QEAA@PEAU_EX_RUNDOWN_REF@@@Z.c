/*
 * XREFs of ??0CAcquireReleaseRundownProtection@@QEAA@PEAU_EX_RUNDOWN_REF@@@Z @ 0x1401B6914
 * Callers:
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     SendWinlogonPowerMessageWorker @ 0x1401B6BB0 (SendWinlogonPowerMessageWorker.c)
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
