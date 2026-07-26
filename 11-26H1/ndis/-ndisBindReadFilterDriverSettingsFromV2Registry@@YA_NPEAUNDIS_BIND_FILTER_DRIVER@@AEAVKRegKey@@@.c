/*
 * XREFs of ?ndisBindReadFilterDriverSettingsFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@AEAVKRegKey@@@Z @ 0x14014B820
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014B540 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     WPP_RECORDER_SF_S @ 0x140096C80 (WPP_RECORDER_SF_S.c)
 *     ?QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z @ 0x140138160 (-QueryValueBoolean@KRegKey@@QEAAJPEB_WPEAEW4BooleanDisposition@1@@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEB_WAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14016A190 (-QueryValueString@KRegKey@@QEAAJPEB_WAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@R.c)
 */

char __fastcall ndisBindReadFilterDriverSettingsFromV2Registry(struct NDIS_BIND_FILTER_DRIVER *a1, struct KRegKey *a2)
{
  unsigned int i; // ebx
  unsigned __int8 v6; // [rsp+50h] [rbp+8h] BYREF

  a1->FilterBindFlags = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= 5 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(
        (void **)&a1->FilterClass.__ptr_.__value_,
        0LL);
      KRegKey::QueryValueString(a2, L"FilterClass", &a1->FilterClass);
      return 1;
    }
    v6 = 0;
    if ( (int)KRegKey::QueryValueBoolean(a2, (&off_1400F6FD0)[2 * i], &v6, DefaultToFalse) < 0 )
      break;
    if ( v6 )
      a1->FilterBindFlags |= *((_DWORD *)&off_1400F6FD0 + 4 * i + 2);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xAu,
      0xCu,
      (struct _GUID *)&WPP_e6a3feaccfd03f16d83983c6da9abacd_Traceguids,
      (&off_1400F6FD0)[2 * i]);
  return 0;
}
