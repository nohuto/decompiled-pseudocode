/*
 * XREFs of ??1DeviceState@MagnifierProcessor@@UEAA@XZ @ 0x1801B1D88
 * Callers:
 *     ??_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z @ 0x1801B1F60 (--_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180182F08 (--1-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std@@V-$allocator@U-$pa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MagnifierProcessor::DeviceState::~DeviceState(MagnifierProcessor::DeviceState *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    *((_QWORD *)this + 15) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 16) + 8LL))(v3 + 16);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 14);
  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::~_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>((void **)this + 6);
  *((_DWORD *)this + 3) = -1073741823;
}
