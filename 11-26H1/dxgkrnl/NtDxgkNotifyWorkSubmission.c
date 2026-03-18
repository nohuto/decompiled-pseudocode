/*
 * XREFs of NtDxgkNotifyWorkSubmission @ 0x1401E4250
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1401E265C (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 */

__int64 __fastcall NtDxgkNotifyWorkSubmission(struct _D3DKMT_NOTIFY_WORK_SUBMISSION *a1)
{
  return DxgkNotifyWorkSubmissionInternal(a1);
}
