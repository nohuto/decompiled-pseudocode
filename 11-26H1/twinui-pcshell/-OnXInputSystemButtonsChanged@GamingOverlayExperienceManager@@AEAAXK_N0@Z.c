/*
 * XREFs of ?OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z @ 0x1803502A8
 * Callers:
 *     ?ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z @ 0x180350E74 (-ProcessControllerInput@GamingOverlayExperienceManager@@AEAA_NKPEA_NPEAK@Z.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18001C3D4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180034ACC (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x1800584D8 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x18033D71C (--$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@-$vector@UGamepadButtonCollectionTra.c)
 *     ??0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z @ 0x1803419FC (--0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z.c)
 *     ??1GamepadButtonCollectionTracker@@QEAA@XZ @ 0x1803425F0 (--1GamepadButtonCollectionTracker@@QEAA@XZ.c)
 *     ?CreateGamepadButtonTracker@GamepadButtonTracker@@SA?AV?$shared_ptr@UGamepadButtonTracker@@@std@@KP6AKKPEAU_XINPUT_VIBRATION@@@_EV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@3@22V?$function@$$A6AXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z@3@@Z @ 0x18036229C (-CreateGamepadButtonTracker@GamepadButtonTracker@@SA-AV-$shared_ptr@UGamepadButtonT_ea_18036229C.c)
 *     ?HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z @ 0x1803626A0 (-HandleButtonEvent@GamepadButtonTracker@@QEAAX_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall GamingOverlayExperienceManager::OnXInputSystemButtonsChanged(
        GamingOverlayExperienceManager *this,
        int a2,
        bool a3,
        bool a4)
{
  GamepadButtonTracker **i; // rdi
  unsigned __int64 v9; // rbx
  __int8 v10; // [rsp+48h] [rbp-C0h]
  __int128 v11; // [rsp+50h] [rbp-B8h]
  RTL_SRWLOCK *v12; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v13; // [rsp+68h] [rbp-A0h] BYREF
  std::_Ref_count_base *v14[2]; // [rsp+78h] [rbp-90h] BYREF
  __m256i v15; // [rsp+88h] [rbp-80h] BYREF
  GamingOverlayExperienceManager *v16; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v17[2]; // [rsp+B8h] [rbp-50h] BYREF
  void **v18; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v19; // [rsp+D0h] [rbp-38h]
  __int8 v20; // [rsp+E0h] [rbp-28h]
  __int8 v21; // [rsp+E1h] [rbp-27h]
  GamingOverlayExperienceManager *v22; // [rsp+E8h] [rbp-20h]
  void ***v23; // [rsp+100h] [rbp-8h]
  __int128 v24; // [rsp+108h] [rbp+0h]

  v24 = 0LL;
  LOBYTE(v24) = a2;
  v12 = 0LL;
  wil::AcquireSRWLockExclusive(&v12, (RTL_SRWLOCK *)this + 44);
  for ( i = (GamepadButtonTracker **)*((_QWORD *)this + 45); i != *((GamepadButtonTracker ***)this + 46); i += 8 )
  {
    if ( *(unsigned __int8 *)i == a2 )
      goto LABEL_12;
  }
  v13 = 0LL;
  v18 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
  v19 = (unsigned __int64)GamingOverlayExperienceManager::HandleNexusButtonEvent;
  v20 = v10;
  v21 = v10;
  v22 = this;
  v23 = &v18;
  GamepadButtonTracker::CreateGamepadButtonTracker(
    (unsigned int)&v13,
    a2,
    *((_QWORD *)this + 39),
    *((_QWORD *)this + 48),
    *((_QWORD *)this + 49),
    *((_QWORD *)this + 50),
    (__int64)&v18);
  *(_OWORD *)v14 = 0LL;
  *(_QWORD *)&v11 = GamingOverlayExperienceManager::HandleShareButtonEvent;
  DWORD2(v11) = 0;
  HIDWORD(v11) = HIDWORD(v13);
  v15.m256i_i64[0] = (__int64)&std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (GamingOverlayExperienceManager::*)(APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind),GamingOverlayExperienceManager *,std::_Ph<1> const &,std::_Ph<2> const &>,void,APP_LOCAL_DEVICE_ID const &,enum GamepadButtonEventKind>::`vftable';
  *(_OWORD *)&v15.m256i_u64[1] = v11;
  v15.m256i_i8[24] = v10;
  v15.m256i_i8[25] = v10;
  v16 = this;
  v17[1] = &v15;
  GamepadButtonTracker::CreateGamepadButtonTracker(
    (unsigned int)v14,
    a2,
    *((_QWORD *)this + 39),
    *((_QWORD *)this + 48),
    *((_QWORD *)this + 49),
    *((_QWORD *)this + 50),
    (__int64)&v15);
  *(_OWORD *)v15.m256i_i8 = v24;
  *(_OWORD *)&v15.m256i_u64[2] = 0LL;
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v16, &v13);
  std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(v17, v14);
  if ( *((_QWORD *)this + 46) == *((_QWORD *)this + 47) )
  {
    std::vector<GamepadButtonCollectionTracker>::_Emplace_reallocate<GamepadButtonCollectionTracker const &>(
      (_QWORD *)this + 45,
      *((_QWORD *)this + 46),
      (const struct GamepadButtonCollectionTracker *)&v15);
  }
  else
  {
    GamepadButtonCollectionTracker::GamepadButtonCollectionTracker(
      *((GamepadButtonCollectionTracker **)this + 46),
      (const struct GamepadButtonCollectionTracker *)&v15);
    *((_QWORD *)this + 46) += 64LL;
  }
  i = (GamepadButtonTracker **)(*((_QWORD *)this + 46) - 64LL);
  GamepadButtonCollectionTracker::~GamepadButtonCollectionTracker((GamepadButtonCollectionTracker *)&v15);
  if ( v14[1] )
    std::_Ref_count_base::_Decref(v14[1]);
  if ( *((_QWORD *)&v13 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v13 + 1));
LABEL_12:
  v9 = 1000 * GetTickCount64();
  GamepadButtonTracker::HandleButtonEvent(i[4], a3, v9);
  GamepadButtonTracker::HandleButtonEvent(i[6], a4, v9);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v12);
}
