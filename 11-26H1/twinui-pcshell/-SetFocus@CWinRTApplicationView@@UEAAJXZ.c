/*
 * XREFs of ?SetFocus@CWinRTApplicationView@@UEAAJXZ @ 0x18008B0A0
 * Callers:
 *     ?SwitchTo@CWinRTApplicationView@@UEAAJXZ @ 0x18008AF50 (-SwitchTo@CWinRTApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___ @ 0x18008BA2C (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_45f761d2d247477984b20.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CWinRTApplicationView::SetFocus(CWinRTApplicationView *this)
{
  __int64 (__fastcall ***v2)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rdi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v11)(_QWORD, _QWORD, _QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp+28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF

  v13 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_45f761d2d247477984b20cf6ec7ae807___(&v13);
  v2 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
  if ( !v13 )
  {
    v5 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)0x8007000CLL);
    v11 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
    if ( v13 )
    {
      v13 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v11)[2])(v11);
    }
    return v5;
  }
  v14 = 0LL;
  v3 = **v13;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  v4 = v3(v2, &GUID_bf63999f_7411_40da_861c_df72c0ffee84, &v14);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4A,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\winrtappview.cpp",
      (const char *)(unsigned int)v4);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
    return v5;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 64LL))(v14, *((_QWORD *)this + 26), 0LL);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
    if ( v13 )
    {
      v13 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v7)[2])(v7);
    }
    return v5;
  }
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v13;
  if ( v13 )
  {
    v13 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v10)[2])(v10);
  }
  return 0LL;
}
