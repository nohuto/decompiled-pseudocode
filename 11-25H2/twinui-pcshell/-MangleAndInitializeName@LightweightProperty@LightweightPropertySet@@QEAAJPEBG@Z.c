/*
 * XREFs of ?MangleAndInitializeName@LightweightProperty@LightweightPropertySet@@QEAAJPEBG@Z @ 0x18008DB90
 * Callers:
 *     ?SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z @ 0x18008D880 (-SetProperty@LightweightPropertySet@@QEAAJPEBGKPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x18008DE10 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall LightweightPropertySet::LightweightProperty::MangleAndInitializeName(
        LightweightPropertySet::LightweightProperty *this,
        const unsigned __int16 *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int16 v7[256]; // [rsp+20h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+0h]

  _o_wcscpy_s(v7, 256LL, L"LightweightProperty_");
  _o_wcscat_s(v7, 256LL, a2);
  v4 = Windows::Internal::String::_InitializeHelper(this, v7);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\lightweightproperties.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
