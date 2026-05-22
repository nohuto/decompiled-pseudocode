/*
 * XREFs of ??1InputSite@@UEAA@XZ @ 0x18003F9DC
 * Callers:
 *     ??_EInputSite@@UEAAPEAXI@Z @ 0x18003F9A0 (--_EInputSite@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ??1?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAA@XZ @ 0x18003FAB4 (--1-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAA@XZ.c)
 *     ??1?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@QEAA@XZ @ 0x18003FAD4 (--1-$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V-$allocator@UTouchInjectionContac.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@@std@@YAXPEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@0@QEAU10@AEAV?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@0@@Z @ 0x18003FE48 (--$_Destroy_range@V-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z @ 0x1800A9658 (--$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InputSite::~InputSite(InputSite *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &InputSite::`vftable';
  v2 = *((_QWORD *)this + 64);
  v3 = std::_Find_vectorized<InputSite * const,InputSite *>(*(_QWORD *)(v2 + 56), *(_QWORD *)(v2 + 64));
  std::_Copy_memmove<enum _Button *,enum _Button *>((void *)(v3 + 8), *(_QWORD *)(v2 + 64), (void *)v3);
  *(_QWORD *)(v2 + 64) -= 8LL;
  v4 = *((_QWORD *)this + 64);
  if ( v4 )
  {
    *((_QWORD *)this + 64) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  v5 = *((_QWORD *)this + 61);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>>(
      v5,
      *((_QWORD *)this + 62));
    std::_Deallocate<16>(
      *((_QWORD *)this + 61),
      (*((_QWORD *)this + 63) - *((_QWORD *)this + 61)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
  }
  std::_Optional_destruct_base<LegacyInputSinkData,0>::~_Optional_destruct_base<LegacyInputSinkData,0>((char *)this + 48);
  std::vector<Windows::UI::Internal::Input::TouchInjectionContact>::~vector<Windows::UI::Internal::Input::TouchInjectionContact>((char *)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
