/*
 * XREFs of ??1_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@XZ @ 0x180067EE0
 * Callers:
 *     ??1?$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@UEAA@XZ @ 0x180067F10 (--1-$CTaskWrapper@V_lambda_9381c80c14e95fe77b42b10959c65c30_@@@ComTaskPool@Internal@Windows@@UEA.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180069FE8 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180029CB0 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall _lambda_9381c80c14e95fe77b42b10959c65c30_::~_lambda_9381c80c14e95fe77b42b10959c65c30_(
        _lambda_9381c80c14e95fe77b42b10959c65c30_ *this)
{
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 4);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>::~com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>(this);
}
