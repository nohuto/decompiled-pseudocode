/*
 * XREFs of ??1CAcquireReleaseRundownProtection@@QEAA@XZ @ 0x1401B6954
 * Callers:
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     SendWinlogonPowerMessageWorker @ 0x1401B6BB0 (SendWinlogonPowerMessageWorker.c)
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
