/*
 * XREFs of ?ShowContextMenu@AccessibleElementBase@@UEAAJXZ @ 0x1804D1F50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_36f90b150dc01683a198557705191dd2___ @ 0x1804D071C (Windows--Internal--ComTaskPool--QueueTask__lambda_36f90b150dc01683a198557705191dd2___.c)
 *     ?_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z @ 0x1804D2038 (-_GetElement@AccessibleElementBase@@IEAAJPEAPEAUIMultitaskingViewElement@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AccessibleElementBase::ShowContextMenu(AccessibleElementBase *this)
{
  int Element; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IMultitaskingViewElement *v7; // [rsp+38h] [rbp+10h] BYREF
  struct IMultitaskingViewElement *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  Element = AccessibleElementBase::_GetElement(this, &v7);
  if ( Element >= 0 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct IMultitaskingViewElement *))(*(_QWORD *)v7 + 264LL))(v7) )
    {
      Element = -2147220988;
      v3 = 163LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\elementaccessibility.cpp",
        (const char *)(unsigned int)Element);
      goto LABEL_7;
    }
    v8 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    Element = Windows::Internal::ComTaskPool::QueueTask__lambda_36f90b150dc01683a198557705191dd2___(v4, &v8);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v8);
    if ( Element < 0 )
    {
      v3 = 168LL;
      goto LABEL_6;
    }
  }
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
  return (unsigned int)Element;
}
