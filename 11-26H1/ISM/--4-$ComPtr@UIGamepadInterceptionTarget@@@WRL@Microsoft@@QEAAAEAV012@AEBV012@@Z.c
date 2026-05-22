/*
 * XREFs of ??4?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180109A6C
 * Callers:
 *     ?ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@@Z @ 0x180109AFC (-ClearGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAAXPEAUIGamepadInterceptionTarget@@.c)
 * Callees:
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    v6 = *a2;
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>(&v6);
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
