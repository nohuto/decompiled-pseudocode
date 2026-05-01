/*
 * XREFs of ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x1805AE0EC
 * Callers:
 *     ?HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1805AF390 (-HandleHotkey@HotkeyHandler@@UEAAJIIW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z.c)
 * Callees:
 *     ?_Xlength@?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@CAXXZ @ 0x180285304 (-_Xlength@-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationVi.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180285C8C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@0PEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AE27C (--$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySna.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z @ 0x1805AE4A0 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z.c)
 *     ??1_Reallocation_guard@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA@XZ @ 0x1805AE6D4 (--1_Reallocation_guard@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHot.c)
 *     ?_Change_array@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAXQEAUIntendedHotKeySnapInfo@HotkeyHandler@@_K1@Z @ 0x1805B13A0 (-_Change_array@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapI.c)
 */

HotkeyHandler::IntendedHotKeySnapInfo *__fastcall std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Emplace_reallocate<HotkeyHandler::IntendedHotKeySnapInfo const &>(
        _QWORD *a1,
        __int64 a2,
        const struct HotkeyHandler::IntendedHotKeySnapInfo *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  HotkeyHandler::IntendedHotKeySnapInfo *v13; // rax
  HotkeyHandler::IntendedHotKeySnapInfo *v14; // r14
  HotkeyHandler::IntendedHotKeySnapInfo *v15; // rdi
  __int64 v16; // rdx
  HotkeyHandler::IntendedHotKeySnapInfo *v17; // r8
  __int64 v18; // rcx
  _QWORD *v20; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  HotkeyHandler::IntendedHotKeySnapInfo *v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v4 = 0x492492492492492LL;
  v7 = (a2 - *a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::vector<winrt::com_ptr<IApplicationView>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(a1[2] - *a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v13 = (HotkeyHandler::IntendedHotKeySnapInfo *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  v20 = a1;
  v14 = (HotkeyHandler::IntendedHotKeySnapInfo *)((char *)v13 + 56 * v7);
  v21 = v4;
  v15 = v13;
  v23 = (char *)v14 + 56;
  HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  v22 = v14;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<HotkeyHandler::IntendedHotKeySnapInfo *>(v18, a2, v15);
    v16 = a1[1];
    v17 = (HotkeyHandler::IntendedHotKeySnapInfo *)((char *)v14 + 56);
    v18 = a2;
    v22 = v15;
  }
  std::_Uninitialized_move<HotkeyHandler::IntendedHotKeySnapInfo *>(v18, v16, v17);
  std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Change_array(a1, v15, v9, v4, v20, 0LL, v21, v22, v23);
  std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::_Reallocation_guard::~_Reallocation_guard(&v20);
  return v14;
}
