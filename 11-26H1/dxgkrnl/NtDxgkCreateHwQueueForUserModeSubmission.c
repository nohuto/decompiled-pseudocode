/*
 * XREFs of NtDxgkCreateHwQueueForUserModeSubmission @ 0x1401E41C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkCreateHwQueueForUserModeSubmissionInternal@@YAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@_N@Z @ 0x1401E1F3C (-DxgkCreateHwQueueForUserModeSubmissionInternal@@YAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSI.c)
 */

__int64 __fastcall NtDxgkCreateHwQueueForUserModeSubmission(struct _D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION *a1)
{
  return DxgkCreateHwQueueForUserModeSubmissionInternal(a1);
}
