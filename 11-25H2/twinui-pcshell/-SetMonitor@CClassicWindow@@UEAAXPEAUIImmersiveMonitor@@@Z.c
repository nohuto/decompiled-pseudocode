/*
 * XREFs of ?SetMonitor@CClassicWindow@@UEAAXPEAUIImmersiveMonitor@@@Z @ 0x180027190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CClassicWindow::SetMonitor(
        CClassicWindow *this,
        void (__fastcall ***a2)(struct IImmersiveMonitor *, GUID *, __int64 *))
{
  __int64 *v3; // rdi
  __int64 v4; // rcx
  void (__fastcall *v5)(struct IImmersiveMonitor *, GUID *, __int64 *); // rbx

  v3 = (__int64 *)((char *)this + 24);
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  if ( a2 )
  {
    v5 = **a2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
    v5((struct IImmersiveMonitor *)a2, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v3);
  }
}
