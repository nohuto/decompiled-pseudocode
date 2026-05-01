/*
 * XREFs of ?GetPersistingStateName@CTaskWindow@@UEAAJPEAPEAG@Z @ 0x1801B3C00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CTaskWindow::GetPersistingStateName(CTaskWindow *this, unsigned __int16 **a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  void (__fastcall *v8)(__int64, HSTRING *); // rdi
  HSTRING v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rcx
  const WCHAR *StringRawBuffer; // rax
  HRESULT v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v16; // [rsp+40h] [rbp+20h] BYREF
  HSTRING string; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v16 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 6);
  v4 = **v3;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
  v5 = v4(v3, &GUID_be4d17af_f213_4ed0_b92b_33a17d72d96d, &v16);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x235,
      (int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v5);
    v12 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v6;
  }
  string = 0LL;
  v7 = v16;
  v8 = *(void (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v16 + 72LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v8(v7, &string);
  v9 = string;
  if ( string )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v14 = SHStrDupW(StringRawBuffer, a2);
    v6 = v14;
    if ( v14 >= 0 )
    {
      v9 = string;
      goto LABEL_3;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23B,
      (int)"pcshell\\twinui\\appmanager\\lib\\taskwindow.cpp",
      (const char *)(unsigned int)v14);
    WindowsDeleteString(string);
    string = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v16);
    return v6;
  }
LABEL_3:
  WindowsDeleteString(v9);
  string = 0LL;
  v10 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
