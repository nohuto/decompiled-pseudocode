/*
 * XREFs of ?GetCopyOfResourceTokens@CSaDeviceProxy@@UEAAJAEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800FD620
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F9A68 (--4-$vector@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_ptr_t@.c)
 */

__int64 __fastcall CSaDeviceProxy::GetCopyOfResourceTokens(__int64 a1, __int64 *a2)
{
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>>::operator=(a2, (__int64 *)(a1 + 64));
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xC6E,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v2);
  }
  return result;
}
