/*
 * XREFs of ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x18058A000
 * Callers:
 *     ??$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU23@AEBU23@@Z @ 0x18058A038 (--$_Emplace_reallocate@AEBUIntendedHotKeySnapInfo@HotkeyHandler@@@-$vector@UIntendedHotKeySnapIn.c)
 *     ??$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@0PEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x18058A1EC (--$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySna.c)
 *     ?_Tidy@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAXXZ @ 0x18058D36C (-_Tidy@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 *     _std::vector_HotkeyHandler::IntendedHotKeySnapInfo_std::allocator_HotkeyHandler::IntendedHotKeySnapInfo___::_Emplace_reallocate_HotkeyHandler::IntendedHotKeySnapInfo_const_&__::_1_::catch$0 @ 0x1806D048E (_std--vector_HotkeyHandler--IntendedHotKeySnapInfo_std--allocator_HotkeyHandler--IntendedHotKeyS.c)
 * Callees:
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x18058A4E0 (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<HotkeyHandler::IntendedHotKeySnapInfo>>(
        HotkeyHandler::IntendedHotKeySnapInfo *this,
        HotkeyHandler::IntendedHotKeySnapInfo *a2)
{
  HotkeyHandler::IntendedHotKeySnapInfo *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo(v3);
      v3 = (HotkeyHandler::IntendedHotKeySnapInfo *)((char *)v3 + 56);
    }
    while ( v3 != a2 );
  }
}
