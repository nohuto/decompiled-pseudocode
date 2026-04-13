/*
 * XREFs of ??0ActivityWrapper@MobilityExperience@@QEAA@AEBV01@@Z @ 0x180067E5C
 * Callers:
 *     ??0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV?$com_ptr_t@VActivityToastNotificationCallback@ToastNotification@@Uerr_exception_policy@wil@@@wil@@PEAVActivityToastNotificationCallback@ToastNotification@@AEBVActivityWrapper@MobilityExperience@@AEBV?$com_ptr_t@VICDPActivityStore@@Uerr_exception_policy@wil@@@2@@Z @ 0x180067968 (--0_lambda_9381c80c14e95fe77b42b10959c65c30_@@QEAA@AEBV-$com_ptr_t@VActivityToastNotificationCal.c)
 *     ??R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ @ 0x180068270 (--R_lambda_f0f613184e0e47442428064dff914436_@@QEBA@XZ.c)
 * Callees:
 *     ??0?$com_ptr_t@U?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@@Z @ 0x180067C68 (--0-$com_ptr_t@U-$IMapView@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@.c)
 */

MobilityExperience::ActivityWrapper *__fastcall MobilityExperience::ActivityWrapper::ActivityWrapper(
        MobilityExperience::ActivityWrapper *this,
        const struct MobilityExperience::ActivityWrapper *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>::com_ptr_t<Windows::Foundation::Collections::IMapView<enum ContentManagement::WindowPosition,unsigned int>,wil::err_exception_policy>(
    (_QWORD *)this + 1,
    *((_QWORD *)a2 + 1));
  return this;
}
