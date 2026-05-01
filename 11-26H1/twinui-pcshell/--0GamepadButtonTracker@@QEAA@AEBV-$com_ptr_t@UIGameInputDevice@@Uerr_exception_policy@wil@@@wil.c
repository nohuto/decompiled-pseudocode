/*
 * XREFs of ??0GamepadButtonTracker@@QEAA@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@11V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@5@@Z @ 0x180361EFC
 * Callers:
 *     ??$?0AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@AEAV234@AEAV234@AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@4@@?$_Ref_count_obj2@UGamepadButtonTracker@@@std@@QEAA@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@1@11AEAV?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@1@@Z @ 0x180361DD0 (--$-0AEBV-$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@AEAV-$duration@_JU-$rat.c)
 * Callees:
 *     ??0?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIGameInputDevice@@@Z @ 0x180341600 (--0-$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIGameInputDevice@@@Z.c)
 *     ??0?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z @ 0x180361EBC (--0-$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GamepadButtonTracker::GamepadButtonTracker(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 40) = a4;
  *(_QWORD *)(a1 + 48) = a5;
  std::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>::function<void (APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind)>(
    a1 + 56,
    a6);
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  wil::com_ptr_t<IGameInputDevice,wil::err_exception_policy>::com_ptr_t<IGameInputDevice,wil::err_exception_policy>(
    (_QWORD *)(a1 + 136),
    *a2);
  *(_OWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  v9 = *(_QWORD *)(a1 + 136);
  if ( v9 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9);
    if ( v10 )
    {
      *(_OWORD *)(a1 + 144) = *(_OWORD *)(v10 + 32);
      *(_OWORD *)(a1 + 160) = *(_OWORD *)(v10 + 48);
    }
  }
  v11 = *(_QWORD *)(a6 + 56);
  if ( v11 )
  {
    LOBYTE(v8) = v11 != a6;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v8);
    *(_QWORD *)(a6 + 56) = 0LL;
  }
  return a1;
}
