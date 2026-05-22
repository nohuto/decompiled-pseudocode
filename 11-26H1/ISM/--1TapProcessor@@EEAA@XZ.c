/*
 * XREFs of ??1TapProcessor@@EEAA@XZ @ 0x1801B66F8
 * Callers:
 *     ??_ETapProcessor@@EEAAPEAXI@Z @ 0x1801B67A0 (--_ETapProcessor@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TapProcessor::~TapProcessor(TapProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &TapProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &TapProcessor::`vftable'{for `IInputServiceProxyOwner'};
  *((_QWORD *)this + 2) = &TapProcessor::`vftable'{for `RefCountedObject'};
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    DestroyInteractionContext(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
}
