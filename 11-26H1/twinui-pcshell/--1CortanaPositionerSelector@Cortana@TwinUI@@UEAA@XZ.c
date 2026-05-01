/*
 * XREFs of ??1CortanaPositionerSelector@Cortana@TwinUI@@UEAA@XZ @ 0x1803BE754
 * Callers:
 *     ??_ECortanaPositionerSelector@Cortana@TwinUI@@UEAAPEAXI@Z @ 0x1803BE7B0 (--_ECortanaPositionerSelector@Cortana@TwinUI@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TwinUI::Cortana::CortanaPositionerSelector::~CortanaPositionerSelector(
        TwinUI::Cortana::CortanaPositionerSelector *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 5);
  if ( v2 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 1);
}
