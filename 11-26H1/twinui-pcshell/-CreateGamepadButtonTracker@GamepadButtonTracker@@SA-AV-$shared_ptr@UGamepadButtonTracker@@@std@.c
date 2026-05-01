/*
 * XREFs of ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@11V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x1803621D0
 * Callers:
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034E7E0 (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802C9924 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEAV234@AEAV234@AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@4@@?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@QEAA@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@1@11AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@1@@Z @ 0x180361DD0 (--$-0AEBV-$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV-$duration@_JU-$rat.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 GamepadButtonTracker::CreateGamepadButtonTracker(__int64 a1, int a2, ...)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 *v6; // rcx
  __int64 v7; // rdx
  void *v9; // [rsp+38h] [rbp-30h]
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  __int64 v12; // [rsp+88h] [rbp+20h] BYREF
  va_list va1; // [rsp+88h] [rbp+20h]
  __int64 v14; // [rsp+90h] [rbp+28h] BYREF
  va_list va2; // [rsp+90h] [rbp+28h]
  __int64 v16; // [rsp+98h] [rbp+30h]
  va_list va3; // [rsp+A0h] [rbp+38h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v12 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v14 = va_arg(va3, _QWORD);
  v16 = va_arg(va3, _QWORD);
  v4 = v16;
  v9 = operator new(0xD0uLL);
  v5 = std::_Ref_count_obj2<GamepadButtonTracker>::_Ref_count_obj2<GamepadButtonTracker>(
         (__int64)v9,
         a2,
         (__int64 *)va,
         (__int64 *)va1,
         (__int64 *)va2,
         v4);
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)a1 = v5 + 16;
  *(_QWORD *)(a1 + 8) = v5;
  v6 = *(__int64 **)(v4 + 56);
  if ( v6 )
  {
    v7 = *v6;
    LOBYTE(v7) = v6 != (__int64 *)v4;
    (*(void (__fastcall **)(__int64 *, __int64))(*v6 + 32))(v6, v7);
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  return a1;
}
