/*
 * XREFs of __tailMerge_rpcrt4_dll @ 0x180014409
 * Callers:
 *     __imp_load_I_RpcMapWin32Status @ 0x180014488 (__imp_load_I_RpcMapWin32Status.c)
 *     __imp_load_RpcExceptionFilter @ 0x18001449A (__imp_load_RpcExceptionFilter.c)
 *     __imp_load_RpcBindingFree @ 0x1800144AC (__imp_load_RpcBindingFree.c)
 *     __imp_load_I_RpcExceptionFilter @ 0x180014B67 (__imp_load_I_RpcExceptionFilter.c)
 *     __imp_load_RpcBindingCreateW @ 0x180014BD3 (__imp_load_RpcBindingCreateW.c)
 *     __imp_load_RpcBindingBind @ 0x180014BE5 (__imp_load_RpcBindingBind.c)
 *     __imp_load_NdrClientCall3 @ 0x180014BF7 (__imp_load_NdrClientCall3.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180010280 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_rpcrt4_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_rpcrt4_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
