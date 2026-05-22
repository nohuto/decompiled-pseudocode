/*
 * XREFs of ??0HapticDeviceManager@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018D88C
 * Callers:
 *     ??0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800264C0 (--0InputSystem@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ?TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0@Z @ 0x1800CA94C (-TryAttachHapticMouse@HapticProcessor@@AEAAJKAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloca.c)
 *     ?OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DF060 (-OnDeviceAttach@PenDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z @ 0x1801CA22C (-CheckForHapticTouchpadArrival@PTPProcessor@@AEAAXPEBUDeviceInfo@@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x180026AC8 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??0?$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18018D464 (--0-$ListPrincipal@VBamoPenDevicePrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBam.c)
 *     ??0?$ListPrincipal@VBamoSimpleHapticsControllerPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@QEAA@PEAVBamoConnection@1@@Z @ 0x18018D4D4 (--0-$ListPrincipal@VBamoSimpleHapticsControllerPrincipal@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft.c)
 *     ?SetMouseDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180191790 (-SetMouseDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrin.c)
 *     ?SetPenDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180191850 (-SetPenDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_PenDevicePrincipal_Principal@.c)
 *     ?SetTouchpadDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180191960 (-SetTouchpadDevices@BamoHapticDeviceManagerPrincipal@@UEAAXPEAVBamoList_SimpleHapticsControllerP.c)
 */

// Hidden C++ exception states: #wind=8
HapticDeviceManager *__fastcall HapticDeviceManager::HapticDeviceManager(
        HapticDeviceManager *this,
        struct ISMBamos_AutoBamos::BamoConnection *a2)
{
  BamoHapticDeviceManagerPrincipal *v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *v8; // rax
  _QWORD *v9; // rax
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal *v10; // rax
  struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal *v11; // rax
  _QWORD *v13; // [rsp+50h] [rbp+18h]

  *(_QWORD *)this = &BamoHapticDeviceManagerPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  v4 = (HapticDeviceManager *)((char *)this + 8);
  *((_QWORD *)this + 1) = &HapticDeviceManager::`vftable'{for `IHapticDeviceManagerPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((HapticDeviceManager *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoHapticDeviceManagerPrincipalImpl::`vftable';
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *(_QWORD *)this = &HapticDeviceManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *(_QWORD *)v4 = &HapticDeviceManager::`vftable'{for `IHapticDeviceManagerPrincipal'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(0x38uLL);
  *v5 = v5;
  v5[1] = v5;
  v5[2] = v5;
  *((_WORD *)v5 + 12) = 257;
  *((_QWORD *)this + 10) = v5;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  *v6 = v6;
  v6[1] = v6;
  *((_QWORD *)this + 13) = v6;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 7LL;
  *((_QWORD *)this + 19) = 8LL;
  *((_DWORD *)this + 24) = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 15,
    0x10uLL,
    *((_QWORD *)this + 13));
  v7 = operator new(0x50uLL);
  v8 = (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_Principal *)Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoPenDevicePrincipal>::ListPrincipal<BamoPenDevicePrincipal>(
                                                                                                   v7,
                                                                                                   a2);
  BamoHapticDeviceManagerPrincipal::SetPenDevices(v4, v8);
  v9 = operator new(0x50uLL);
  v10 = (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal *)Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoSimpleHapticsControllerPrincipal>::ListPrincipal<BamoSimpleHapticsControllerPrincipal>(v9, a2);
  BamoHapticDeviceManagerPrincipal::SetTouchpadDevices(v4, v10);
  v13 = operator new(0x50uLL);
  v11 = (struct Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal *)Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<BamoSimpleHapticsControllerPrincipal>::ListPrincipal<BamoSimpleHapticsControllerPrincipal>(v13, a2);
  BamoHapticDeviceManagerPrincipal::SetMouseDevices(v4, v11);
  return this;
}
