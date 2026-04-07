/*
 * XREFs of ?serialize@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXAEAVoutput_archive@tson@@W4serialize_options@23@@Z @ 0x1800D5868
 * Callers:
 *     ?serialize_data@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serialize_options@23@@Z @ 0x180089E70 (-serialize_data@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAPEBDAEAVwrite_buffer@tson@@W4serial.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall tip2::details::shared_data<0,0,0>::serialize(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( !tip2::details::g_test_interface_exception_guard )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  result = tip2::details::g_test_interface_exception_guard(v4, a2, a3, 0LL, 0LL);
  if ( !(_BYTE)result )
  {
    *((_BYTE *)a1 + 160) = 3;
    *((_WORD *)a1 + 81) = 16396;
    a1[21] = 0LL;
  }
  return result;
}
