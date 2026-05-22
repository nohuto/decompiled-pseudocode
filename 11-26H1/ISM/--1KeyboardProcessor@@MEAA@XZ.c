/*
 * XREFs of ??1KeyboardProcessor@@MEAA@XZ @ 0x180094464
 * Callers:
 *     ??_GKeyboardProcessor@@MEAAPEAXI@Z @ 0x180081390 (--_GKeyboardProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Destroy_range@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInfo@KeyboardProcessor@@QEAU12@AEAV?$allocator@UTargetingInfo@KeyboardProcessor@@@0@@Z @ 0x180012958 (--$_Destroy_range@V-$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@YAXPEAUTargetingInf.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall KeyboardProcessor::~KeyboardProcessor(KeyboardProcessor *this)
{
  KeyboardProcessor::TargetingInfo *v2; // rcx

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &KeyboardProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 1) = &KeyboardProcessor::`vftable'{for `RefCountedObject'};
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  v2 = (KeyboardProcessor::TargetingInfo *)*((_QWORD *)this + 8);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<KeyboardProcessor::TargetingInfo>>(
      v2,
      *((KeyboardProcessor::TargetingInfo **)this + 9));
    std::_Deallocate<16>(
      *((void **)this + 8),
      (struct std::nothrow_t *)((__int64)(*((_QWORD *)this + 10) - *((_QWORD *)this + 8)) >> 7 << 7));
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
