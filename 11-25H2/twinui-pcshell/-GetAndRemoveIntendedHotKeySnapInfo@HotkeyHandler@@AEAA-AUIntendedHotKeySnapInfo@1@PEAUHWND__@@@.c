/*
 * XREFs of ?GetAndRemoveIntendedHotKeySnapInfo@HotkeyHandler@@AEAA?AUIntendedHotKeySnapInfo@1@PEAUHWND__@@@Z @ 0x18058AE70
 * Callers:
 *     ?HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x18058C080 (-HandleSnapHotKeyNarratorAnnouncements@HotkeyHandler@@UEAAXPEAUHWND__@@W4ARRANGEMENT_COMPLETED_R.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z @ 0x18058A308 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@$$QEAU01@@Z.c)
 *     ??0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z @ 0x18058A360 (--0IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@AEBU01@@Z.c)
 *     ??1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ @ 0x18058A4E0 (--1IntendedHotKeySnapInfo@HotkeyHandler@@QEAA@XZ.c)
 *     ?erase@?$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@@2@@Z @ 0x18058D3C8 (-erase@-$vector@UIntendedHotKeySnapInfo@HotkeyHandler@@V-$allocator@UIntendedHotKeySnapInfo@Hotk.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall HotkeyHandler::GetAndRemoveIntendedHotKeySnapInfo(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r15
  const struct HotkeyHandler::IntendedHotKeySnapInfo *v7; // r14
  const struct HotkeyHandler::IntendedHotKeySnapInfo *i; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  char v11; // bl
  __int64 v13[2]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v14[56]; // [rsp+30h] [rbp-78h] BYREF

  v13[0] = (__int64)a2;
  v6 = a1 + 424;
  v7 = *(const struct HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 432);
  for ( i = *(const struct HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 424);
        i != v7;
        i = (const struct HotkeyHandler::IntendedHotKeySnapInfo *)((char *)i + 56) )
  {
    v9 = *(_QWORD *)i;
    v13[0] = v9;
    if ( !v9
      || ((*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9),
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 80LL))(v9),
          v11 = 1,
          v10 != a3) )
    {
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v13);
    if ( v11 )
      break;
  }
  if ( i == *(const struct HotkeyHandler::IntendedHotKeySnapInfo **)(a1 + 432) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    a2[3] = 0LL;
    a2[4] = 0LL;
    a2[5] = 0LL;
    a2[6] = 0LL;
  }
  else
  {
    HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)v14, i);
    std::vector<HotkeyHandler::IntendedHotKeySnapInfo>::erase(v6, v13, i);
    HotkeyHandler::IntendedHotKeySnapInfo::IntendedHotKeySnapInfo((__int64)a2, (__int64)v14);
    HotkeyHandler::IntendedHotKeySnapInfo::~IntendedHotKeySnapInfo((HotkeyHandler::IntendedHotKeySnapInfo *)v14);
  }
  return a2;
}
