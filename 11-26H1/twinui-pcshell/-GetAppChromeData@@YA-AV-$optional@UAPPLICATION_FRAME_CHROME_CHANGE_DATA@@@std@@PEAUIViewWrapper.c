/*
 * XREFs of ?GetAppChromeData@@YA?AV?$optional@UAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@std@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801F8874
 * Callers:
 *     ?_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E72CC (-_HandleUniversalFrameChangeRequest@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerIntero.c)
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x180304CD0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003A59C (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802AF344 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetAppChromeData(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // ebx
  int (__fastcall *v6)(__int64, HSTRING, __int64 *); // r15
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  UINT32 v9; // edx
  HRESULT v10; // eax
  int v11; // edx
  unsigned int v12; // r8d
  __int64 v14; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+28h] [rbp-50h] BYREF
  HSTRING string; // [rsp+40h] [rbp-38h] BYREF

  v5 = 0;
  LODWORD(v14) = 0;
  v6 = *(int (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)a2 + 360LL);
  string = 0LL;
  v7 = -1LL;
  do
    ++v7;
  while ( aWindowframesty[v7] );
  if ( v7 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, a2, a3);
    JUMPOUT(0x1801F897BLL);
  }
  v8 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v7, a2, a3);
  v9 = v8 - 1;
  if ( (unsigned int)v7 < v8 )
    v9 = v7;
  v10 = WindowsCreateStringReference(L"WindowFrameStyle", v9, &hstringHeader, &string);
  if ( v10 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10, v11, v12);
  if ( v6(a2, string, &v14) < 0 )
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  else
  {
    if ( (_DWORD)v14 == 1 )
      v5 = 129;
    v14 = v5 | 0x8000000000LL;
    *(_QWORD *)a1 = v14;
    *(_BYTE *)(a1 + 8) = 1;
  }
  return a1;
}
