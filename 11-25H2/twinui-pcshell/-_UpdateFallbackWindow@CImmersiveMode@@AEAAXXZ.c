/*
 * XREFs of ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x18017E848
 * Callers:
 *     ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x180025390 (-HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z.c)
 *     ?_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z @ 0x18017E65C (-_HandleDesktopVisibilityChange@CImmersiveMode@@AEAAXPEAUIImmersiveMonitor@@_N1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveMode::_UpdateFallbackWindow(CImmersiveMode *this)
{
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 41) + 48LL))(
    *((_QWORD *)this + 41),
    (unsigned int)(*((_DWORD *)this + 80) == 1) + 1);
}
