/*
 * XREFs of ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x18007418C
 * Callers:
 *     ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x180074C00 (-CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIAppl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SetActivationPropertySet(struct IUnknown *a1, struct Windows::Storage::Streams::IBuffer *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  QueryInterface = a1->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v12);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a1,
         &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
         &v12);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, struct Windows::Storage::Streams::IBuffer *))(*(_QWORD *)v12 + 136LL))(
           v12,
           0LL,
           0LL,
           0LL,
           a2);
    v6 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
        (const char *)(unsigned int)v9);
    v10 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24,
      (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)v5);
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  return v6;
}
