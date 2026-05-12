/*
 * XREFs of StorEnablePassiveInitialization @ 0x14007A900
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 */

char __fastcall StorEnablePassiveInitialization(__int64 a1)
{
  __int64 v1; // r11
  PDEVICE_OBJECT v2; // rcx
  unsigned __int16 v3; // dx
  int *v5; // [rsp+40h] [rbp+18h] BYREF
  int *v6; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  RaidpPortGetAdapter(a1, &v5, &v6);
  if ( v5 )
  {
    if ( (v5[26] & 0x10) == 0 )
    {
      v2 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || !BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        return 0;
      }
      v3 = 23;
      goto LABEL_14;
    }
    *((_QWORD *)v5 + 549) = v1;
  }
  else
  {
    if ( !v6 )
      return 0;
    if ( (v6[36] & 0x20) == 0 )
    {
      v2 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) == 0
        || !BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        return 0;
      }
      v3 = 24;
LABEL_14:
      WPP_SF_((__int64)v2->AttachedDevice, v3, (__int64)&WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
      return 0;
    }
    *((_QWORD *)v6 + 123) = v1;
  }
  return 1;
}
