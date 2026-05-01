/*
 * XREFs of ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034E7E0
 * Callers:
 *     ?OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDevice@@0W4GameInputSystemButtons@@3@Z @ 0x18034EAE0 (-OnGameInputSystemButtonCallbackStatic@GamingOverlayExperienceManager@@CAX_KPEAXPEAUIGameInputDe.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028A2A0 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     memcmp_0 @ 0x1802CE1FE (memcmp_0.c)
 *     ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x18033D71C (--$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@-$vector@UGamepadButtonCollectionTra.c)
 *     ??0?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIGameInputDevice@@@Z @ 0x180341600 (--0-$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIGameInputDevice@@@Z.c)
 *     ??0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z @ 0x1803419FC (--0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z.c)
 *     ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x1803425F0 (--1GamepadButtonCollectionTracker@@QEAA@XZ.c)
 *     ?HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z @ 0x18034ACB8 (-HandleButtonEvent@GamingOverlayExperienceManager@@AEAAX_N0_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprovements@@@details@wil@@QEAA_NXZ @ 0x180358B40 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Gamepad_NexusImprove_ea_180358B40.c)
 *     ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@AEBV?$com_ptr_t@UIGameInputDevice@@Uerr_exception_policy@wil@@@wil@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@11V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x1803621D0 (-CreateGamepadButtonTracker@GamepadButtonTracker@@SA-AV-$shared_ptr@UGamepadButtonTracker@@@std@.c)
 *     ?HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z @ 0x1803626A0 (-HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int8 v19; // [rsp+38h] [rbp-99h]
  __int128 v20; // [rsp+40h] [rbp-91h] BYREF
  __int64 v21; // [rsp+50h] [rbp-81h] BYREF
  __m256i v22; // [rsp+58h] [rbp-79h] BYREF
  __int64 v23; // [rsp+78h] [rbp-59h] BYREF
  __int64 v24; // [rsp+88h] [rbp-49h] BYREF
  __m256i *v25; // [rsp+90h] [rbp-41h]
  RTL_SRWLOCK *v26; // [rsp+98h] [rbp-39h] BYREF
  _OWORD Buf2[2]; // [rsp+A0h] [rbp-31h] BYREF
  unsigned __int64 v28; // [rsp+C0h] [rbp-11h]
  std::_Ref_count_base *v29[2]; // [rsp+C8h] [rbp-9h] BYREF

  v28 = a3;
  v21 = a2;
  v7 = a4 & 1;
  v8 = (a4 & 2) != 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Gamepad_NexusImprovements>::GetImpl'::`2'::impl) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
    v10 = *(_OWORD *)(v9 + 32);
    Buf2[0] = v10;
    v11 = *(_OWORD *)(v9 + 48);
    Buf2[1] = v11;
    v26 = 0LL;
    wil::AcquireSRWLockExclusive(&v26, (RTL_SRWLOCK *)(a1 + 352));
    for ( i = *(GamepadButtonTracker ***)(a1 + 360); i != *(GamepadButtonTracker ***)(a1 + 368); i += 8 )
    {
      if ( !memcmp_0(i, Buf2, 0x20uLL) )
      {
        if ( i )
          goto LABEL_15;
        break;
      }
    }
    Buf2[0] = 0LL;
    *(_QWORD *)&v20 = GamingOverlayExperienceManager::HandleNexusButtonEvent;
    *((_QWORD *)&v20 + 1) = 0LL;
    v22.m256i_i64[0] = (__int64)&std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
    *(_OWORD *)&v22.m256i_u64[1] = (unsigned __int64)GamingOverlayExperienceManager::HandleNexusButtonEvent;
    v22.m256i_i8[24] = v19;
    v22.m256i_i8[25] = v19;
    v23 = a1;
    v25 = &v22;
    v13 = *(_QWORD *)(a1 + 400);
    v14 = *(_QWORD *)(a1 + 392);
    v15 = *(_QWORD *)(a1 + 384);
    wil::com_ptr_t<IGameInputDevice,wil::err_exception_policy>::com_ptr_t<IGameInputDevice,wil::err_exception_policy>(
      &v20,
      v21);
    GamepadButtonTracker::CreateGamepadButtonTracker(
      (unsigned int)Buf2,
      (unsigned int)&v20,
      v15,
      v14,
      v13,
      (__int64)&v22);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>((__int64 *)&v20);
    *(_OWORD *)v29 = 0LL;
    *(_QWORD *)&v20 = GamingOverlayExperienceManager::HandleShareButtonEvent;
    DWORD2(v20) = 0;
    HIDWORD(v20) = HIDWORD(Buf2[0]);
    v22.m256i_i64[0] = (__int64)&std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
    *(_OWORD *)&v22.m256i_u64[1] = v20;
    v22.m256i_i8[24] = v19;
    v22.m256i_i8[25] = v19;
    v23 = a1;
    v25 = &v22;
    v16 = *(_QWORD *)(a1 + 400);
    v17 = *(_QWORD *)(a1 + 392);
    v18 = *(_QWORD *)(a1 + 384);
    wil::com_ptr_t<IGameInputDevice,wil::err_exception_policy>::com_ptr_t<IGameInputDevice,wil::err_exception_policy>(
      &v21,
      v21);
    GamepadButtonTracker::CreateGamepadButtonTracker(
      (unsigned int)v29,
      (unsigned int)&v21,
      v18,
      v17,
      v16,
      (__int64)&v22);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v21);
    *(_OWORD *)v22.m256i_i8 = v10;
    *(_OWORD *)&v22.m256i_u64[2] = v11;
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v23, Buf2);
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v24, v29);
    if ( *(_QWORD *)(a1 + 368) == *(_QWORD *)(a1 + 376) )
    {
      std::vector<GamepadButtonCollectionTracker>::_Emplace_reallocate<GamepadButtonCollectionTracker const &>(
        (_QWORD *)(a1 + 360),
        *(_QWORD *)(a1 + 368),
        (const struct GamepadButtonCollectionTracker *)&v22);
    }
    else
    {
      GamepadButtonCollectionTracker::GamepadButtonCollectionTracker(
        *(GamepadButtonCollectionTracker **)(a1 + 368),
        (const struct GamepadButtonCollectionTracker *)&v22);
      *(_QWORD *)(a1 + 368) += 64LL;
    }
    i = (GamepadButtonTracker **)(*(_QWORD *)(a1 + 368) - 64LL);
    GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker((GamepadButtonCollectionTracker *)&v22);
    if ( v29[1] )
      std::_Ref_count_base::_Decref(v29[1]);
    if ( *((_QWORD *)&Buf2[0] + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&Buf2[0] + 1));
LABEL_15:
    GamepadButtonTracker::HandleButtonEvent(i[4], v7, v28);
    GamepadButtonTracker::HandleButtonEvent(i[6], v8, v28);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v26);
  }
  else
  {
    GamingOverlayExperienceManager::HandleButtonEvent((RTL_SRWLOCK *)a1, v7, v8, a3);
  }
}
