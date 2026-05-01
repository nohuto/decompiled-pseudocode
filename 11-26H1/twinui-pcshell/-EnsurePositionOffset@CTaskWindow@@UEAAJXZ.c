/*
 * XREFs of ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x18005F3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CTaskWindow::EnsurePositionOffset(CTaskWindow *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v2)(_QWORD, GUID *, __int64 *); // rbx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  v2 = **v1;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  v2(v1, &GUID_9230a21d_831d_414f_87f1_f0131a16a75a, &v6);
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 72LL))(v6);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
