/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@123@PEAKPEAPEAU_GUID@@@Z @ 0x18038BEB0
 * Callers:
 *     ?GetIids@CJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18038D0D0 (-GetIids@CJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x60uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_95fc070d_cc20_44e5_8c0d_75ed8f7100b0;
  v5[1] = GUID_00000038_0000_0000_c000_000000000046;
  v5[2] = GUID_940c223d_5bdc_49db_968c_e4f3ef9b9270;
  v5[3] = GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
  v5[4] = GUID_78c8b458_dd5a_4f32_9d8b_d45a19ae9e1f;
  v5[5] = GUID_f4b0e171_08a9_413c_b179_71d7602d8ef0;
  *a2 = 6;
  *a3 = v5;
  return 0LL;
}
