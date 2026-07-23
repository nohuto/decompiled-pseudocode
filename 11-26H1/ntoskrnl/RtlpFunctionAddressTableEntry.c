/*
 * XREFs of RtlpFunctionAddressTableEntry @ 0x140CE03A0
 * Callers:
 *     RtlInitializeHistoryTable @ 0x140CE0468 (RtlInitializeHistoryTable.c)
 * Callees:
 *     <none>
 */

void (__cdecl __noreturn *__fastcall RtlpFunctionAddressTableEntry(__int64 a1))(NTSTATUS Status)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  if ( !a1 )
    return (void (__cdecl __noreturn *)(NTSTATUS))RtlUnwindEx;
  v1 = a1 - 1;
  if ( !v1 )
    return (void (__cdecl __noreturn *)(NTSTATUS))_C_specific_handler;
  v2 = v1 - 1;
  if ( !v2 )
    return (void (__cdecl __noreturn *)(NTSTATUS))RtlpExecuteHandlerForException;
  v3 = v2 - 1;
  if ( !v3 )
    return (void (__cdecl __noreturn *)(NTSTATUS))RtlDispatchException;
  v4 = v3 - 1;
  if ( !v4 )
    return RtlRaiseStatus;
  v5 = v4 - 1;
  if ( !v5 )
    return (void (__cdecl __noreturn *)(NTSTATUS))KiDispatchException;
  if ( v5 == 1 )
    return (void (__cdecl __noreturn *)(NTSTATUS))KiExceptionDispatch;
  return 0LL;
}
