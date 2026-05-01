/*
 * XREFs of ??0?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIGameInputDevice@@@Z @ 0x18034095C
 * Callers:
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034AC28 (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 *     ??0GamepadButtonTracker@@QEAA@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@11V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@5@@Z @ 0x18035B44C (--0GamepadButtonTracker@@QEAA@AEBV-$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IGameInputDevice,wil::err_exception_policy>::com_ptr_t<IGameInputDevice,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
