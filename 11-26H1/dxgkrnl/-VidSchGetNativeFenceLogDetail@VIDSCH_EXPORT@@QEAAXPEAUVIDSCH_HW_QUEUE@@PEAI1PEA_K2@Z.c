/*
 * XREFs of ?VidSchGetNativeFenceLogDetail@VIDSCH_EXPORT@@QEAAXPEAUVIDSCH_HW_QUEUE@@PEAI1PEA_K2@Z @ 0x14007C7FC
 * Callers:
 *     ?DxgkCreateHwQueueForUserModeSubmissionInternal@@YAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSION@@_N@Z @ 0x1401E1F3C (-DxgkCreateHwQueueForUserModeSubmissionInternal@@YAJPEAU_D3DKMT_CREATEHWQUEUEFORUSERMODESUBMISSI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchGetNativeFenceLogDetail(
        VIDSCH_EXPORT *this,
        struct VIDSCH_HW_QUEUE *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6)
{
  (*(void (__fastcall **)(struct VIDSCH_HW_QUEUE *, unsigned int *, unsigned int *, unsigned __int64 *, unsigned __int64 *))(*((_QWORD *)this + 1) + 1144LL))(
    a2,
    a3,
    a4,
    a5,
    a6);
}
