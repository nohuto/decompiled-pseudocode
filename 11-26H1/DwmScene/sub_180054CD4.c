/*
 * XREFs of sub_180054CD4 @ 0x180054CD4
 * Callers:
 *     sub_180037C20 @ 0x180037C20 (sub_180037C20.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_18002AEFC @ 0x18002AEFC (sub_18002AEFC.c)
 *     sub_18002B3C4 @ 0x18002B3C4 (sub_18002B3C4.c)
 *     sub_180031890 @ 0x180031890 (sub_180031890.c)
 *     sub_180031F14 @ 0x180031F14 (sub_180031F14.c)
 *     sub_180038048 @ 0x180038048 (sub_180038048.c)
 *     sub_180054C34 @ 0x180054C34 (sub_180054C34.c)
 *     sub_1800551CC @ 0x1800551CC (sub_1800551CC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180054CD4(__int64 a1)
{
  __int64 v1; // rbx
  _Thrd_t *v2; // rdi
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx
  const std::system_error *v5; // [rsp+20h] [rbp-28h] BYREF
  _Thrd_t v6; // [rsp+30h] [rbp-18h] BYREF

  try
  {
    v1 = a1;
    sub_18002AEFC((__int64)&v6, a1 + 128);
    if ( *(_DWORD *)(v1 + 36) == 1 )
      sub_1800551CC(v1, &v6);
    sub_18002B3C4((__int64)&v6);
  }
  catch ( const std::system_error *v5 )
  {
    (*(void (__fastcall **)(const std::system_error *))(*(_QWORD *)v5 + 8LL))(v5);
    sub_18001DCFC(&qword_1801BD368, 3);
    v1 = a1;
  }
  v2 = (_Thrd_t *)(v1 + 104);
  if ( *(_DWORD *)(v1 + 112) )
  {
    v6 = *v2;
    if ( Thrd_detach(&v6) )
    {
      std::_Throw_Cpp_error(1);
      __debugbreak();
    }
    *v2 = 0LL;
  }
  sub_180031F14(v1 + 104);
  sub_180054C34((void **)(v1 + 88));
  sub_180031890(v1 + 64);
  result = sub_180038048(v1 + 40);
  v4 = *(volatile signed __int32 **)(v1 + 8);
  if ( v4 )
    return sub_180010F00(v4);
  return result;
}
