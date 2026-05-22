/*
 * XREFs of ?OnTargetWithFocusChanged@InputProviderManager@@QEAAXPEAUIInputTarget@@0@Z @ 0x180028B00
 * Callers:
 *     ?OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z @ 0x1800289F0 (-OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall InputProviderManager::OnTargetWithFocusChanged(
        InputProviderManager *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rcx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)this;
  v6 = *((_QWORD *)this + 1);
  while ( v5 != v6 )
  {
    v10 = 0LL;
    v7 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 16);
    v8 = **v7;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v10);
    if ( v8(v7, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, &v10) >= 0 )
      (*(void (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v10 + 24LL))(
        v10,
        a2,
        a3);
    v9 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v5 += 24LL;
  }
}
