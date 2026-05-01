/*
 * XREFs of ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@PEAPEAU2@@Z @ 0x1801EC790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800679E8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig *a2,
        struct IWindowingEnvironmentConfig **a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rsi
  __int64 (__fastcall *v6)(CImmersiveApp *, __int64 *); // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v13; // [rsp+58h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3D,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)0x80070057LL);
    return v4;
  }
  v5 = (_QWORD *)((char *)this + 664);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 83, (__int64)a2);
  v11[0] = 0LL;
  v6 = *(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 464LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
  v7 = v6(this, v11);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA45,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v7);
LABEL_12:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11);
    return v4;
  }
  if ( !v11[0] )
  {
LABEL_11:
    v4 = 0;
    goto LABEL_12;
  }
  v13 = 0;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v5 + 80LL))(*v5, v11[0], &v13);
  v4 = v8;
  if ( v8 >= 0 )
  {
    *((_DWORD *)this + 168) = v13;
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA4A,
    (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)(unsigned int)v8);
  v9 = v11[0];
  if ( v11[0] )
  {
    v11[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v4;
}
