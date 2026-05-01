/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180319250
 * Callers:
 *     <none>
 * Callees:
 *     __std_system_error_allocate_message @ 0x1802D49D8 (__std_system_error_allocate_message.c)
 *     __std_system_error_deallocate_message @ 0x1802D4A7C (__std_system_error_deallocate_message.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x180314078 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_System_error_category::message(__int64 a1, _QWORD *a2, DWORD a3)
{
  void *message; // rax
  size_t v5; // r8
  const char *v6; // rdx
  HLOCAL hMem[4]; // [rsp+28h] [rbp-20h] BYREF

  hMem[0] = 0LL;
  message = (void *)_std_system_error_allocate_message(a3, (LPSTR)hMem);
  hMem[1] = message;
  if ( message )
  {
    v5 = (size_t)message;
    v6 = (const char *)hMem[0];
  }
  else
  {
    v5 = 13LL;
    v6 = "unknown error";
  }
  std::string::string(a2, v6, v5);
  _std_system_error_deallocate_message(hMem[0]);
  return a2;
}
