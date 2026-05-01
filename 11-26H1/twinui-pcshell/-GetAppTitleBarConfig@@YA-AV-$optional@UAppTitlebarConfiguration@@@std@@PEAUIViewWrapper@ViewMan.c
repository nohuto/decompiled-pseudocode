/*
 * XREFs of ?GetAppTitleBarConfig@@YA?AV?$optional@UAppTitlebarConfiguration@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801CC58C
 * Callers:
 *     ?_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E74C8 (-_HandleUniversalTitleBarVisibilityChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@View.c)
 *     ?IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z @ 0x1802FE520 (-IsTitleBarHiddenByApp@CImmersiveApp@@UEAAJPEAH@Z.c)
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x180304CD0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppTitleBarConfig(__int64 a1, __int64 a2, unsigned int a3)
{
  int (__fastcall *v5)(__int64, HSTRING, int *); // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // eax
  UINT32 v8; // edx
  HRESULT v9; // eax
  int v10; // edx
  unsigned int v11; // r8d
  bool v12; // zf
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  HSTRING string; // [rsp+40h] [rbp-38h] BYREF

  v14 = 0;
  v5 = *(int (__fastcall **)(__int64, HSTRING, int *))(*(_QWORD *)a2 + 360LL);
  string = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( aTitlebarvisibl[v6] );
  if ( v6 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    __debugbreak();
  }
  v7 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v6, a2, a3);
  v8 = v7 - 1;
  if ( (unsigned int)v6 < v7 )
    v8 = v6;
  v9 = WindowsCreateStringReference(L"TitleBarVisible", v8, &hstringHeader, &string);
  if ( v9 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9, v10, v11);
    __debugbreak();
  }
  v12 = v5(a2, string, &v14) < 0;
  result = a1;
  if ( v12 )
  {
    *(_BYTE *)(a1 + 2) = 0;
  }
  else
  {
    LOBYTE(v14) = v14 == 1;
    BYTE1(v14) = v14;
    *(_WORD *)a1 = v14;
    *(_BYTE *)(a1 + 2) = 1;
  }
  return result;
}
