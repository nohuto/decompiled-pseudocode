/*
 * XREFs of HUBMISC_GenerateUserNotificationForPersistentOverCurrent @ 0x1400869EC
 * Callers:
 *     HUBPSM20_NotifyingUserAboutPersistentOverCurrent @ 0x140012F90 (HUBPSM20_NotifyingUserAboutPersistentOverCurrent.c)
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1400122B4 (WPP_RECORDER_SF_qqd.c)
 *     Feature_UH3WET__private_IsEnabledDeviceUsageNoInline @ 0x140014B8C (Feature_UH3WET__private_IsEnabledDeviceUsageNoInline.c)
 *     WMI_FireNotification @ 0x14008FAC0 (WMI_FireNotification.c)
 *     WMI_FireNotificationOld @ 0x140090190 (WMI_FireNotificationOld.c)
 */

__int64 __fastcall HUBMISC_GenerateUserNotificationForPersistentOverCurrent(_QWORD *a1)
{
  unsigned __int16 *v2; // rdi
  int v4; // [rsp+38h] [rbp-10h]

  _InterlockedOr((volatile signed __int32 *)a1 + 334, 4u);
  v2 = (unsigned __int16 *)(a1 + 25);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *v2;
    WPP_RECORDER_SF_qqd(a1[179], 2u, 4u, 0x71u, (__int64)&WPP_dde998bf8bb3310d95d4227a99ba80b7_Traceguids, *a1, a1, v4);
  }
  if ( (unsigned int)Feature_UH3WET__private_IsEnabledDeviceUsageNoInline() )
    return WMI_FireNotification(a1, 3LL);
  else
    return WMI_FireNotificationOld(*a1, *v2, 3LL);
}
