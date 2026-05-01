/*
 * XREFs of ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@KP6AKKPEAU_XINPUT_VIBRATION@@@_EV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@22V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x18036229C
 * Callers:
 *     ?OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z @ 0x1803502A8 (-OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEAV123@AEAV123@AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@QEAA@AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@1@33AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@1@@Z @ 0x180361D2C (--$-0AEAKAEAP6AKKPEAU_XINPUT_VIBRATION@@@_EAEAV-$duration@_JU-$ratio@$00$0DOI@@std@@@chrono@std@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 GamepadButtonTracker::CreateGamepadButtonTracker(__int64 a1, int a2, ...)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  void *v8; // [rsp+48h] [rbp-30h]
  int v9; // [rsp+88h] [rbp+10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  __int64 v12; // [rsp+98h] [rbp+20h] BYREF
  va_list va1; // [rsp+98h] [rbp+20h]
  __int64 v14; // [rsp+A0h] [rbp+28h] BYREF
  va_list va2; // [rsp+A0h] [rbp+28h]
  __int64 v16; // [rsp+A8h] [rbp+30h] BYREF
  va_list va3; // [rsp+A8h] [rbp+30h]
  __int64 v18; // [rsp+B0h] [rbp+38h]
  va_list va4; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va4, a2);
  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v16 = va_arg(va4, _QWORD);
  v18 = va_arg(va4, _QWORD);
  v9 = a2;
  v3 = v18;
  v8 = operator new(0xD0uLL);
  v4 = ____0AEAKAEAP6AKKPEAU_XINPUT_VIBRATION____EAEAV__duration__JU__ratio__00_0DOI__std___chrono_std__AEAV123_AEAV123_AEAV__function___A6AXAEBUAPP_LOCAL_DEVICE_ID__W4GamepadButtonEventKind___Z_3_____Ref_count_obj2_UGamepadButtonTracker___std__QEAA_AEAKAEAP6AKKPEAU_XINPUT_VIBRATION____EAEAV__duration__JU__ratio__00_0DOI__std___chrono_1_33AEAV__function___A6AXAEBUAPP_LOCAL_DEVICE_ID__W4GamepadButtonEventKind___Z_1__Z(
         (__int64)v8,
         &v9,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2,
         (__int64 *)va3,
         v3);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v4 + 16;
  *(_QWORD *)(a1 + 8) = v4;
  v5 = *(__int64 **)(v3 + 56);
  if ( v5 )
  {
    v6 = *v5;
    LOBYTE(v6) = v5 != (__int64 *)v3;
    (*(void (__fastcall **)(__int64 *, __int64))(*v5 + 32))(v5, v6);
    *(_QWORD *)(v3 + 56) = 0LL;
  }
  return a1;
}
