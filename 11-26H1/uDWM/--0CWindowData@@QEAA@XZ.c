/*
 * XREFs of ??0CWindowData@@QEAA@XZ @ 0x18007FC1C
 * Callers:
 *     ?GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180018CC0 (-GetSyncedWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180034670 (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800C4C10 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 *     ?CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800E03A0 (-CreateWindow@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000D1E0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$com_ptr_t@VCBitmapSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x180030030 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180030030.c)
 *     IsOpenThemeDataPresent @ 0x18008F41C (IsOpenThemeDataPresent.c)
 */

// Hidden C++ exception states: #wind=6
CWindowData *__fastcall CWindowData::CWindowData(CWindowData *this)
{
  char *v2; // rbx
  _QWORD *v3; // rax
  char v4; // al

  *((_QWORD *)this + 2) = (char *)this + 868;
  *((_OWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 40) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 82) = 96;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_DWORD *)this + 148) = 0;
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 158) = 0;
  v2 = (char *)this + 672;
  *((_DWORD *)this + 168) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits>(0x20uLL);
  *v3 = v3;
  v3[1] = v3;
  *((_QWORD *)v2 + 1) = v3;
  *((_QWORD *)v2 + 3) = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 7LL;
  *((_QWORD *)v2 + 7) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,wil::com_ptr_t<CBitmapSource,wil::err_returncode_policy>>>>>>>::_Assign_grow(
    (__int64)(v2 + 24),
    0x10uLL,
    *((_QWORD *)v2 + 1));
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  v4 = IsOpenThemeDataPresent();
  *((_BYTE *)this + 736) &= ~8u;
  *((_BYTE *)this + 736) |= v4 != 0 ? 8 : 0;
  *((_DWORD *)this + 83) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  *((_DWORD *)this + 54) = 1065353216;
  *((_BYTE *)this + 408) = -1;
  *((_BYTE *)this + 737) |= 0x40u;
  *((_DWORD *)this + 186) = 4095;
  *((_BYTE *)this + 740) |= 0x10u;
  *(_QWORD *)((char *)this + 196) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *(_QWORD *)((char *)this + 204) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  return this;
}
