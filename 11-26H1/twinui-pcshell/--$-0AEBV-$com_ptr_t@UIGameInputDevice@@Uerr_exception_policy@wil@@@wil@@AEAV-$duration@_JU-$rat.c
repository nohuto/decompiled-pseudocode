/*
 * XREFs of ??$?0AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEAV234@AEAV234@AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@4@@?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@QEAA@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@1@11AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@1@@Z @ 0x180361DD0
 * Callers:
 *     ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@11V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x1803621D0 (-CreateGamepadButtonTracker@GamepadButtonTracker@@SA-AV-$shared_ptr@UGamepadButtonTracker@@@std@.c)
 * Callees:
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x180361EBC (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ??0GamepadButtonTracker@@QEAA@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@11V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@5@@Z @ 0x180361EFC (--0GamepadButtonTracker@@QEAA@AEBV-$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil.c)
 */

__int64 __fastcall std::_Ref_count_obj2<GamepadButtonTracker>::_Ref_count_obj2<GamepadButtonTracker>(
        __int64 a1,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        __int64 *a5,
        __int64 a6)
{
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj2<GamepadButtonTracker>::`vftable';
  std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
    &v11,
    a6);
  GamepadButtonTracker::GamepadButtonTracker(a1 + 16, a2, *a3, *a4, *a5);
  return a1;
}
