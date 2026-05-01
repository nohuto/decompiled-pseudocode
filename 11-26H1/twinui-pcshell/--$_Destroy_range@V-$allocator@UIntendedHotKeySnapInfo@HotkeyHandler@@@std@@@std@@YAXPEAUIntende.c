/*
 * XREFs of ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AE0B4
 * Callers:
 *     ??$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@0PEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805AE27C (--$_Uninitialized_move@PEAUIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySna.c)
 *     ??1_Reallocation_guard@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA@XZ @ 0x1805AE6D4 (--1_Reallocation_guard@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHot.c)
 *     ?_Change_array@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAXQEAUIntendedHotKeySnapInfo@HotkeyHandler@@_K1@Z @ 0x1805B13A0 (-_Change_array@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapI.c)
 *     ?_Tidy@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@AEAAXXZ @ 0x1805B158C (-_Tidy@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 * Callees:
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x1805AE62C (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
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
