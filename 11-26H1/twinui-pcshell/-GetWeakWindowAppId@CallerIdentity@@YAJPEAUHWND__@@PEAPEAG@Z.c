/*
 * XREFs of ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C26AC
 * Callers:
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x1800C1C60 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_s @ 0x1800C2818 (memcpy_s.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CallerIdentity::GetWeakWindowAppId(CallerIdentity *this, _QWORD *a2, unsigned __int16 **a3)
{
  ATOM PropW; // ax
  UINT AtomNameW; // eax
  __int64 v7; // rbp
  __int64 v8; // rcx
  WCHAR *v9; // rbx
  __int64 v10; // rbx
  _WORD *v11; // rax
  _WORD *v12; // rdi
  rsize_t v13; // rbx
  WCHAR Buffer[256]; // [rsp+20h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *a2 = 0LL;
  PropW = (unsigned __int16)GetPropW((HWND)this, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5");
  if ( !PropW )
    return 0LL;
  AtomNameW = GlobalGetAtomNameW(PropW, Buffer, 256);
  if ( !AtomNameW )
    return 0LL;
  v7 = AtomNameW;
  v8 = 0x7FFFFFFFLL;
  v9 = Buffer;
  if ( AtomNameW < 0x7FFFFFFF )
    v8 = AtomNameW;
  do
  {
    if ( !*v9 )
      break;
    ++v9;
    --v8;
  }
  while ( v8 );
  v10 = v9 - Buffer;
  v11 = CoTaskMemAlloc(2LL * AtomNameW + 2);
  v12 = v11;
  if ( v11 )
  {
    v13 = v10;
    memcpy_s(v11, 2 * v7 + 2, Buffer, v13 * 2);
    v12[v13] = 0;
    v12[v7] = 0;
  }
  *a2 = v12;
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x60,
    (int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
