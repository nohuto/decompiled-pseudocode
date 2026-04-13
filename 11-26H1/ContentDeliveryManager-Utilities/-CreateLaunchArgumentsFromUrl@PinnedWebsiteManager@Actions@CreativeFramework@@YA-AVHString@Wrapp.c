/*
 * XREFs of ?CreateLaunchArgumentsFromUrl@PinnedWebsiteManager@Actions@CreativeFramework@@YA?AVHString@Wrappers@WRL@Microsoft@@PEB_W@Z @ 0x1800A6848
 * Callers:
 *     _lambda_201f500c0b3e8aa9f89acabd232435e5_::operator() @ 0x1800A607C (_lambda_201f500c0b3e8aa9f89acabd232435e5_--operator().c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023724 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E0D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
WCHAR *__fastcall CreativeFramework::Actions::PinnedWebsiteManager::CreateLaunchArgumentsFromUrl(
        WCHAR *a1,
        const WCHAR *a2)
{
  unsigned int v3; // r8d
  HSTRING Reserved1; // rbx
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  HRESULT v7; // eax
  const WCHAR *v9[2]; // [rsp+28h] [rbp-60h] BYREF
  HSTRING_HEADER v10; // [rsp+38h] [rbp-50h] BYREF
  HSTRING_HEADER v11; // [rsp+58h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v9[1] = a1;
  v9[0] = a2;
  *(_QWORD *)a1 = 0LL;
  WindowsDeleteString(0LL);
  *(_QWORD *)a1 = 0LL;
  Reserved1 = (HSTRING)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v10, v9, v3)[1].Reserved.Reserved1;
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v11, (const WCHAR **)off_1800DF3E8, v5);
  v7 = WindowsConcatString((HSTRING)v6[1].Reserved.Reserved1, Reserved1, (HSTRING *)a1);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      105LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\pinnedwebsitemanager.cpp",
      (const char *)(unsigned int)v7,
      1);
  return a1;
}
