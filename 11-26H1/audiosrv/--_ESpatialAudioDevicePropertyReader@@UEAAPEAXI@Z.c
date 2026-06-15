/*
 * XREFs of ??_ESpatialAudioDevicePropertyReader@@UEAAPEAXI@Z @ 0x18004F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18004F328 (--1-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00U-$ImplementsMarker@VFtmBase@WR.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
SpatialAudioDevicePropertyReader *__fastcall SpatialAudioDevicePropertyReader::`vector deleting destructor'(
        SpatialAudioDevicePropertyReader *this,
        char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 106) = 0;
  v4 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    _aligned_free(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 7);
  if ( v5 )
  {
    _aligned_free(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 63);
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v6);
  *((_QWORD *)this + 63) = 0LL;
  v8 = *((_QWORD *)this + 52);
  if ( v8 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)this + 51);
  v9 = *((_QWORD *)this + 50);
  if ( v9 )
  {
    *((_QWORD *)this + 50) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
