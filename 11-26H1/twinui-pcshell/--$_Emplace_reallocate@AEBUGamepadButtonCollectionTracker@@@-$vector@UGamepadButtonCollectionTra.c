/*
 * XREFs of ??$_Emplace_reallocate@AEBUGamepadButtonCollectionTracker@@@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAPEAUGamepadButtonCollectionTracker@@QEAU2@AEBU2@@Z @ 0x18033D71C
 * Callers:
 *     ?OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4GameInputSystemButtons@@@Z @ 0x18034E7E0 (-OnGameInputSystemButtonCallback@GamingOverlayExperienceManager@@AEAAXPEAUIGameInputDevice@@_KW4.c)
 *     ?OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z @ 0x1803502A8 (-OnXInputSystemButtonsChanged@GamingOverlayExperienceManager@@AEAAXK_N0@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x1802B953C (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAPEAUGamepadButtonCollectionTracker@@QEAU1@0PEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x18033EA6C (--$_Uninitialized_move@PEAUGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollection.c)
 *     ??0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z @ 0x1803419FC (--0GamepadButtonCollectionTracker@@QEAA@AEBU0@@Z.c)
 *     ??1_Reallocation_guard@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@QEAA@XZ @ 0x180342D3C (--1_Reallocation_guard@-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonColl.c)
 *     ?_Change_array@?$vector@UGamepadButtonCollectionTracker@@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@AEAAXQEAUGamepadButtonCollectionTracker@@_K1@Z @ 0x180357B0C (-_Change_array@-$vector@UGamepadButtonCollectionTracker@@V-$allocator@UGamepadButtonCollectionTr.c)
 */

GamepadButtonCollectionTracker *__fastcall std::vector<GamepadButtonCollectionTracker>::_Emplace_reallocate<GamepadButtonCollectionTracker const &>(
        _QWORD *a1,
        __int64 a2,
        const struct GamepadButtonCollectionTracker *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v6; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  GamepadButtonCollectionTracker *v13; // rax
  GamepadButtonCollectionTracker *v14; // r15
  GamepadButtonCollectionTracker *v15; // rdi
  __int64 v16; // rdx
  GamepadButtonCollectionTracker *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-58h]
  GamepadButtonCollectionTracker *v22; // [rsp+38h] [rbp-50h]
  char *v23; // [rsp+40h] [rbp-48h]

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (__int64)(a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v6 + 1;
  v10 = (__int64)(a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v9;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v13 = (GamepadButtonCollectionTracker *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20 = a1;
  v14 = (GamepadButtonCollectionTracker *)((char *)v13 + (v4 & 0xFFFFFFFFFFFFFFC0uLL));
  v21 = v3;
  v15 = v13;
  v23 = (char *)v14 + 64;
  GamepadButtonCollectionTracker::GamepadButtonCollectionTracker(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  v22 = v14;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<GamepadButtonCollectionTracker *>(v18, a2, v15);
    v16 = a1[1];
    v17 = (GamepadButtonCollectionTracker *)((char *)v14 + 64);
    v18 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<GamepadButtonCollectionTracker *>(v18, v16, v17);
  std::vector<GamepadButtonCollectionTracker>::_Change_array(a1, v15, v9, v3, v20, 0LL, v21, v22, v23);
  std::vector<GamepadButtonCollectionTracker>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
