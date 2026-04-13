/*
 * XREFs of ??1?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180067F68
 * Callers:
 *     ??1_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@XZ @ 0x180067EE0 (--1_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@XZ.c)
 *     ?PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAVICDPActivityStore@@@Z @ 0x180069FE8 (-PublishCompletedActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWra.c)
 *     _ToastNotification::ActivityToastNotificationCallback::PublishCompletedActivity_::_1_::dtor$2 @ 0x1800BBEE1 (_ToastNotification--ActivityToastNotificationCallback--PublishCompletedActivity_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@VICDPActivityPublishCallback@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006A360 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINoti.c)
 */

__int64 __fastcall wil::com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>::~com_ptr_t<ToastNotification::ActivityToastNotificationCallback,wil::err_exception_policy>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback,ICDPActivityPublishCallback>::Release(v1);
  return result;
}
