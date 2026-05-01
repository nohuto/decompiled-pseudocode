/*
 * XREFs of ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x1805AF000
 * Callers:
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x1805B01D0 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_HotkeyHandler::IntendedHotKeySnapInfo_______lambda_a0a5f8761721dd83cfa02b3467d33818___ @ 0x1805AE2C4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_HotkeyHandler--IntendedHo.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z @ 0x1805AE444 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z @ 0x1805AE4A0 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z.c)
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x1805AE62C (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 *     ?erase@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@@Z @ 0x1805B15F0 (-erase@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 */

struct HotkeyHandler::IntendedHotKeySnapInfo *__fastcall HotkeyHandler::GetAndRemoveIntendedHotKeySnapInfo(
        __int64 a1,
        struct HotkeyHandler::IntendedHotKeySnapInfo *a2,
        __int64 a3)
{
  __int64 v3; // r14
  struct HotkeyHandler::IntendedHotKeySnapInfo *v6; // rbx
  struct HotkeyHandler::IntendedHotKeySnapInfo *v8[2]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v9[56]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+18h] BYREF

  v10 = a3;
  v3 = a1 + 432;
  v8[0] = a2;
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_HotkeyHandler::IntendedHotKeySnapInfo_______lambda_a0a5f8761721dd83cfa02b3467d33818___(
    (__int64 **)v8,
    *(__int64 **)(a1 + 432),
    *(__int64 **)(a1 + 440),
    &v10);
  v6 = v8[0];
  if ( v8[0] == *(struct HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 440) )
  {
    *(_QWORD *)a2 = 0LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_QWORD *)a2 + 2) = 0LL;
    *((_QWORD *)a2 + 3) = 0LL;
    *((_QWORD *)a2 + 4) = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 6) = 0LL;
  }
  else
  {
    HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)v9, v8[0]);
    std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::erase(v3, v8, v6);
    HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo((__int64)a2, (__int64)v9);
    HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)v9);
  }
  return a2;
}
