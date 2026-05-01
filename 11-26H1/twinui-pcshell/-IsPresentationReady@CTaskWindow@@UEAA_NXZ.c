/*
 * XREFs of ?IsPresentationReady@CTaskWindow@@UEAA_NXZ @ 0x180021C60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CTaskWindow::IsPresentationReady(CTaskWindow *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v2)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v3; // rcx
  char v4; // al
  char v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  if ( v1 )
  {
    v6 = 0;
    v7 = 0LL;
    v2 = **v1;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    v2(v1, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v7);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 72LL))(v7, &v6);
    v3 = v7;
    if ( v7 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    v4 = v6;
  }
  else
  {
    v4 = 1;
  }
  return v4 != 0;
}
