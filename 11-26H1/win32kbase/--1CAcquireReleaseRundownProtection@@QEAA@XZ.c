/*
 * XREFs of ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401D9508
 * Callers:
 *     SendWinlogonPowerMessageWorker @ 0x1401C0344 (SendWinlogonPowerMessageWorker.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall CAcquireReleaseRundownProtection::~CAcquireReleaseRundownProtection(struct _EX_RUNDOWN_REF **this)
{
  struct _EX_RUNDOWN_REF *v1; // rcx

  v1 = *this;
  if ( v1 )
    ExReleaseRundownProtection(v1);
}
