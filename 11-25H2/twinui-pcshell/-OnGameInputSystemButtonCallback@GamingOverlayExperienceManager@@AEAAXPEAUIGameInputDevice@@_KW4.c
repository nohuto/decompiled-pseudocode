/*
 * XREFs of ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034AC28
 * Callers:
 *     ?OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDevice@@0W4GameInputSystemButtons@@3@Z @ 0x18034AF30 (-OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDe.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180029A94 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x18002A564 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x180048190 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x180142B80 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180293F84 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x18033D980 (--$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@-$vector@UGamepadButtonCollectionTra.c)
 *     ??0?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIGameInputDevice@@@Z @ 0x18034095C (--0-$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIGameInputDevice@@@Z.c)
 *     ??0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z @ 0x180340B6C (--0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z.c)
 *     ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x1803415B8 (--1GamepadButtonCollectionTracker@@QEAA@XZ.c)
 *     ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x1803479E8 (-HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180352AF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@detai.c)
 *     ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@11V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x18035B690 (-CreateGamepadButtonTracker@GamepadButtonTracker@@SA-AV-$shared_ptr@UGamepadButtonTracker@@@std@.c)
 *     ?HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z @ 0x18035B9FC (-HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z.c)
 *     memcmp_0 @ 0x1806A4B00 (memcmp_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall GamingOverlayExperienceManager::OnGameInputSystemButtonCallback(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4)
{
  char v7; // r12
  bool v8; // r14
  __int64 v9; // rax
  __int128 v10; // xmm6
  __int128 v11; // xmm7
  GamepadButtonTracker **i; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v21[3]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  __int64 v23; // [rsp+70h] [rbp-98h]
  _QWORD *v24; // [rsp+88h] [rbp-80h]
  unsigned __int64 v25; // [rsp+90h] [rbp-78h]
  std::_Ref_count_base *v26[2]; // [rsp+98h] [rbp-70h] BYREF
  RTL_SRWLOCK *v27; // [rsp+A8h] [rbp-60h] BYREF
  __int128 Buf2; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-48h]
  _OWORD v30[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v31; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v32; // [rsp+108h] [rbp+0h] BYREF

  v25 = a3;
  v19 = a2;
  v7 = a4 & 1;
  v8 = (a4 & 2) != 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
    v10 = *(_OWORD *)(v9 + 32);
    Buf2 = v10;
    v11 = *(_OWORD *)(v9 + 48);
    v29 = v11;
    v27 = 0LL;
    wil::AcquireSRWLockExclusive(&v27, (RTL_SRWLOCK *)(a1 + 312));
    for ( i = *(GamepadButtonTracker ***)(a1 + 320); i != *(GamepadButtonTracker ***)(a1 + 328); i += 8 )
    {
      if ( !memcmp_0(i, &Buf2, 0x20uLL) )
      {
        if ( i )
          goto LABEL_15;
        break;
      }
    }
    Buf2 = 0LL;
    v26[0] = (std::_Ref_count_base *)GamingOverlayExperienceManager::HandleNexusButtonEvent;
    LODWORD(v26[1]) = 0;
    v21[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
    *(_OWORD *)&v21[1] = *(_OWORD *)v26;
    LOWORD(v22) = v29;
    v23 = a1;
    v24 = v21;
    v13 = *(_QWORD *)(a1 + 360);
    v14 = *(_QWORD *)(a1 + 352);
    v15 = *(_QWORD *)(a1 + 344);
    wil::com_ptr_t<IGameInputDevice,wil::err_exception_policy>::com_ptr_t<IGameInputDevice,wil::err_exception_policy>(
      &v20,
      v19);
    GamepadButtonTracker::CreateGamepadButtonTracker(
      (unsigned int)&Buf2,
      (unsigned int)&v20,
      v15,
      v14,
      v13,
      (__int64)v21);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v20);
    *(_OWORD *)v26 = 0LL;
    *(_QWORD *)&v20 = GamingOverlayExperienceManager::HandleShareButtonEvent;
    DWORD2(v20) = 0;
    v21[0] = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
    *(_OWORD *)&v21[1] = v20;
    LOWORD(v22) = v29;
    v23 = a1;
    v24 = v21;
    v16 = *(_QWORD *)(a1 + 360);
    v17 = *(_QWORD *)(a1 + 352);
    v18 = *(_QWORD *)(a1 + 344);
    wil::com_ptr_t<IGameInputDevice,wil::err_exception_policy>::com_ptr_t<IGameInputDevice,wil::err_exception_policy>(
      &v19,
      v19);
    GamepadButtonTracker::CreateGamepadButtonTracker((unsigned int)v26, (unsigned int)&v19, v18, v17, v16, (__int64)v21);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v19);
    v30[0] = v10;
    v30[1] = v11;
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v31, &Buf2);
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v32, v26);
    if ( *(_QWORD *)(a1 + 328) == *(_QWORD *)(a1 + 336) )
    {
      std::vector<GamepadButtonCollectionTracker>::_Emplace_reallocate<GamepadButtonCollectionTracker const &>(
        (__int64 *)(a1 + 320),
        *(_QWORD *)(a1 + 328),
        (const struct GamepadButtonCollectionTracker *)v30);
    }
    else
    {
      GamepadButtonCollectionTracker::GamepadButtonCollectionTracker(
        *(GamepadButtonCollectionTracker **)(a1 + 328),
        (const struct GamepadButtonCollectionTracker *)v30);
      *(_QWORD *)(a1 + 328) += 64LL;
    }
    i = (GamepadButtonTracker **)(*(_QWORD *)(a1 + 328) - 64LL);
    GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker((GamepadButtonCollectionTracker *)v30);
    if ( v26[1] )
      std::_Ref_count_base::_Decref(v26[1]);
    if ( *((_QWORD *)&Buf2 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&Buf2 + 1));
LABEL_15:
    GamepadButtonTracker::HandleButtonEvent(i[4], v7, v25);
    GamepadButtonTracker::HandleButtonEvent(i[6], v8, v25);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v27);
  }
  else
  {
    GamingOverlayExperienceManager::HandleButtonEvent((GamingOverlayExperienceManager *)a1, v7, v8, a3);
  }
}
