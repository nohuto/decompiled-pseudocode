/*
 * XREFs of ??1BroadcastDVRActiveAppInfo@@QEAA@XZ @ 0x18005B960
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@UBroadcastDVRActiveAppInfo@@@std@@EEAAXXZ @ 0x180223BD0 (-_Destroy@-$_Ref_count_obj2@UBroadcastDVRActiveAppInfo@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall BroadcastDVRActiveAppInfo::~BroadcastDVRActiveAppInfo(BroadcastDVRActiveAppInfo *this)
{
  std::wstring::_Tidy_deallocate((void **)this + 9);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  Windows::Internal::String::~String((BroadcastDVRActiveAppInfo *)((char *)this + 48));
}
