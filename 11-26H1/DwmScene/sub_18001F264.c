/*
 * XREFs of sub_18001F264 @ 0x18001F264
 * Callers:
 *     sub_18002CF9C @ 0x18002CF9C (sub_18002CF9C.c)
 * Callees:
 *     sub_18000D184 @ 0x18000D184 (sub_18000D184.c)
 *     sub_180018460 @ 0x180018460 (sub_180018460.c)
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_18001E7DC @ 0x18001E7DC (sub_18001E7DC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 (__fastcall ***__fastcall sub_18001F264(__int64 a1))(_QWORD, __int64)
{
  unsigned __int64 v2; // rax
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rbx
  __int64 (__fastcall ***v4)(_QWORD, __int64); // rbx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 (__fastcall ***v7)(_QWORD, __int64); // [rsp+40h] [rbp+18h] BYREF
  __int64 (__fastcall ***v8)(_QWORD, __int64); // [rsp+48h] [rbp+20h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v6, 0);
  v7 = (__int64 (__fastcall ***)(_QWORD, __int64))qword_1801C8538;
  v2 = sub_18001E240(std::ctype<wchar_t>::id);
  v3 = (__int64 (__fastcall ***)(_QWORD, __int64))sub_18001E7DC(a1, v2);
  if ( !v3 )
  {
    v3 = v7;
    if ( !v7 )
    {
      if ( std::ctype<wchar_t>::_Getcat(&v7, a1) == -1 )
      {
        o_abort();
        __debugbreak();
      }
      v4 = v7;
      v8 = v7;
      sub_18000D184((__int64)v7);
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64)))(*v4)[1])(v4);
      v3 = v7;
      qword_1801C8538 = (__int64)v7;
      v8 = 0LL;
      sub_180018460(&v8);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v6);
  return v3;
}
