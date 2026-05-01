/*
 * XREFs of ?GetMonitor@SwitchItem@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x1804AB8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItem::GetMonitor(SwitchItem *this, HMONITOR *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // ebx
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  v3 = *((_QWORD *)this + 3);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 80LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  v5 = v4(v3, &v9);
  if ( v5 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v9 + 40LL))(v9, a2);
    v5 = v6;
    if ( v6 >= 0 )
      v5 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitem.cpp",
        (const char *)(unsigned int)v6);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  return (unsigned int)v5;
}
