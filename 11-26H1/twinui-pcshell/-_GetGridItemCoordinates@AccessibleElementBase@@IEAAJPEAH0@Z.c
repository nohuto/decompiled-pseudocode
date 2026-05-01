/*
 * XREFs of ?_GetGridItemCoordinates@AccessibleElementBase@@IEAAJPEAH0@Z @ 0x1804D2050
 * Callers:
 *     ?get_Column@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804D2580 (-get_Column@AccessibleElementBase@@UEAAJPEAH@Z.c)
 *     ?get_Row@AccessibleElementBase@@UEAAJPEAH@Z @ 0x1804D2B80 (-get_Row@AccessibleElementBase@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1804D2004 (-_GetElement@AccessibleElementBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z @ 0x1804D2164 (-_GetParentGrid@AccessibleElementBase@@IEAAJPEAPEAUISwitchItemGrid@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AccessibleElementBase::_GetGridItemCoordinates(AccessibleElementBase *this, int *a2, int *a3)
{
  int Element; // ebx
  int v7; // eax
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct ISwitchItemGrid *v11; // [rsp+78h] [rbp+38h] BYREF
  void *v12; // [rsp+80h] [rbp+40h] BYREF
  __int64 v13; // [rsp+88h] [rbp+48h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  Element = AccessibleElementBase::_GetElement(this, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v12);
  if ( Element >= 0 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    Element = AccessibleElementBase::_GetParentGrid(this, &v11);
    if ( Element < 0 )
    {
LABEL_7:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
      goto LABEL_15;
    }
    v13 = 0LL;
    v9 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct ISwitchItemGrid *, void *, __int64 *, __int64 *))(*(_QWORD *)v11 + 80LL))(
           v11,
           v12,
           &v13,
           &v9);
    Element = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x301,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)(unsigned int)v7);
      goto LABEL_7;
    }
    if ( a2 )
      *a2 = v13;
    if ( a3 )
      *a3 = v9;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v11);
    Element = 0;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  return (unsigned int)Element;
}
