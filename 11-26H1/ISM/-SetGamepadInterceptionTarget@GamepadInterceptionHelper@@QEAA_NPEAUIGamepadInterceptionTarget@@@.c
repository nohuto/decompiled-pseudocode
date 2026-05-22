/*
 * XREFs of ?SetGamepadInterceptionTarget@GamepadInterceptionHelper@@QEAA_NPEAUIGamepadInterceptionTarget@@@Z @ 0x180109F14
 * Callers:
 *     ?OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180136590 (-OnGamepadInterceptionEnabledChanged@InputDelegationInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8028 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180108B7C (--$_Emplace_reallocate@AEBV-$ComPtr@UIGamepadInterceptionTarget@@@WRL@Microsoft@@@-$vector@V-$Co.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall GamepadInterceptionHelper::SetGamepadInterceptionTarget(
        GamepadInterceptionHelper *this,
        struct IGamepadInterceptionTarget *a2)
{
  struct IGamepadInterceptionTarget *v2; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rbp
  __int64 *j; // r14
  __int64 v7; // rsi
  void (__fastcall *v8)(__int64, _QWORD); // rdi
  unsigned int v9; // eax
  const char *v11; // r9
  struct IGamepadInterceptionTarget **i; // rax
  char v13; // al
  __int64 *v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IGamepadInterceptionTarget *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *((_QWORD *)this + 2) )
  {
    v16 = a2;
    wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v16);
    for ( i = (struct IGamepadInterceptionTarget **)*((_QWORD *)this + 3); ; ++i )
    {
      if ( i == *((struct IGamepadInterceptionTarget ***)this + 4) )
      {
        v13 = 0;
        goto LABEL_14;
      }
      if ( *i == v2 )
        break;
    }
    v13 = 1;
LABEL_14:
    if ( v13 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x39,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\gamepadinterceptionhelper\\gamepadinterceptionhelper.cpp",
        v11);
    v14 = (__int64 *)*((_QWORD *)this + 4);
    if ( v14 == *((__int64 **)this + 5) )
    {
      std::vector<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IGamepadInterceptionTarget> const &>(
        (_QWORD *)this + 3,
        (__int64)v14,
        (__int64 *)&v16);
      v2 = v16;
    }
    else
    {
      *v14 = (__int64)v2;
      wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>(v14);
      *((_QWORD *)this + 4) += 8LL;
    }
    if ( v2 )
      (*(void (__fastcall **)(struct IGamepadInterceptionTarget *))(*(_QWORD *)v2 + 16LL))(v2);
    return 0;
  }
  else
  {
    if ( a2 )
    {
      v16 = a2;
      wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v16);
      v4 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 2) = v2;
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    v5 = (__int64 *)*((_QWORD *)this + 7);
    for ( j = (__int64 *)*((_QWORD *)this + 6); j != v5; ++j )
    {
      v7 = *j;
      v8 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*j + 24LL);
      v9 = (*(__int64 (__fastcall **)(struct IGamepadInterceptionTarget *))(*(_QWORD *)v2 + 24LL))(v2);
      v8(v7, v9);
    }
    return 1;
  }
}
