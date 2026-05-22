/*
 * XREFs of ??$MakeAndInitialize@VHotkeyRegistrationForwarder@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyRegistrationForwarder@@@Z @ 0x180075778
 * Callers:
 *     ?Create@HotkeyRegistrationForwarder@@SA?AV?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@XZ @ 0x18010811C (-Create@HotkeyRegistrationForwarder@@SA-AV-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ @ 0x180075830 (-RuntimeClassInitialize@HotkeyRegistrationForwarder@@QEAAJXZ.c)
 *     ??0HotkeyRegistrationForwarder@@QEAA@XZ @ 0x180075968 (--0HotkeyRegistrationForwarder@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800808F0 (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<HotkeyRegistrationForwarder,HotkeyRegistrationForwarder,>(
        HotkeyRegistrationForwarder **a1)
{
  unsigned int v2; // ebx
  HotkeyRegistrationForwarder *v3; // rax
  HotkeyRegistrationForwarder *v4; // rdi
  int v5; // esi
  HotkeyRegistrationForwarder *v7; // [rsp+40h] [rbp+8h] BYREF
  HotkeyRegistrationForwarder *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v3 = (HotkeyRegistrationForwarder *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v3;
  if ( !v3 )
  {
    v2 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v7);
    return v2;
  }
  v4 = HotkeyRegistrationForwarder::HotkeyRegistrationForwarder(v3);
  v8 = v4;
  v7 = 0LL;
  v5 = HotkeyRegistrationForwarder::RuntimeClassInitialize(v4);
  if ( v5 >= 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(HotkeyRegistrationForwarder *))(*(_QWORD *)v4 + 8LL))(v4);
    *a1 = v4;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    goto LABEL_10;
  }
  if ( v4 )
    (*(void (__fastcall **)(HotkeyRegistrationForwarder *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
