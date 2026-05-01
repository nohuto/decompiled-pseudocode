/*
 * XREFs of ??$?0AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEAV123@AEAV123@AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@QEAA@AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@1@33AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@1@@Z @ 0x180361D2C
 * Callers:
 *     ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@KP6AKKPEAU_XINPUT_VIBRATION@@@_EV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@22V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x18036229C (-CreateGamepadButtonTracker@GamepadButtonTracker@@SA-AV-$shared_ptr@UGamepadButtonT_ea_18036229C.c)
 * Callees:
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x180361EBC (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??0GamepadButtonTracker@@QEAA@KP6AKKPEAU_XINPUT_VIBRATION@@@_EV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@22V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@4@@Z @ 0x180362008 (--0GamepadButtonTracker@@QEAA@KP6AKKPEAU_XINPUT_VIBRATION@@@_EV-$duration@_JU-$ratio@$00$0DOI@@s.c)
 */

__int64 __fastcall ____0AEAKAEAP6AKKPEAU_XINPUT_VIBRATION____EAEAV__duration__JU__ratio__00_0DOI__std___chrono_std__AEAV123_AEAV123_AEAV__function___A6AXAEBUAPP_LOCAL_DEVICE_ID__W4GamepadButtonEventKind___Z_3_____Ref_count_obj2_UGamepadButtonTracker___std__QEAA_AEAKAEAP6AKKPEAU_XINPUT_VIBRATION____EAEAV__duration__JU__ratio__00_0DOI__std___chrono_1_33AEAV__function___A6AXAEBUAPP_LOCAL_DEVICE_ID__W4GamepadButtonEventKind___Z_1__Z(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 v12; // [rsp+40h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<GamepadButtonTracker>::`vftable';
  std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
    &v12,
    a7);
  GamepadButtonTracker::GamepadButtonTracker(a1 + 16, *a2, *a3, *a4, *a5, *a6);
  return a1;
}
