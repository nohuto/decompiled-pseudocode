/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1803154F0
 * Callers:
 *     <none>
 * Callees:
 *     __std_system_error_allocate_message @ 0x1802CD35C (__std_system_error_allocate_message.c)
 *     __std_system_error_deallocate_message @ 0x1802CD43C (__std_system_error_deallocate_message.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x18031016C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_System_error_category::message(__int64 a1, _QWORD *a2, DWORD a3)
{
  void *message; // rax
  const char *v5; // rdx
  size_t v6; // r8
  HLOCAL hMem[4]; // [rsp+28h] [rbp-20h] BYREF

  hMem[0] = 0LL;
  message = (void *)_std_system_error_allocate_message(a3, (LPSTR)hMem);
  hMem[1] = message;
  v5 = (const char *)hMem[0];
  if ( hMem[0] && message )
  {
    v6 = (size_t)message;
  }
  else
  {
    v6 = 13LL;
    v5 = "unknown error";
  }
  std::string::string(a2, v5, v6);
  _std_system_error_deallocate_message(hMem[0]);
  return a2;
}
