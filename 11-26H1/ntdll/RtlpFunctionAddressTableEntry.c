/*
 * XREFs of RtlpFunctionAddressTableEntry @ 0x1800E34C0
 * Callers:
 *     RtlInitializeHistoryTable @ 0x1800E33FC (RtlInitializeHistoryTable.c)
 * Callees:
 *     <none>
 */

void (__stdcall *__fastcall RtlpFunctionAddressTableEntry(__int64 a1))(PEXCEPTION_RECORD ExceptionRecord)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( !a1 )
    return (void (__stdcall *)(PEXCEPTION_RECORD))RtlUnwindEx;
  v1 = a1 - 1;
  if ( !v1 )
    return (void (__stdcall *)(PEXCEPTION_RECORD))_C_specific_handler;
  v2 = v1 - 1;
  if ( !v2 )
    return (void (__stdcall *)(PEXCEPTION_RECORD))RtlpExecuteHandlerForException;
  v3 = v2 - 1;
  if ( !v3 )
    return (void (__stdcall *)(PEXCEPTION_RECORD))RtlDispatchException;
  v4 = v3 - 1;
  if ( !v4 )
    return RtlRaiseException;
  if ( v4 == 1 )
    return (void (__stdcall *)(PEXCEPTION_RECORD))KiUserExceptionDispatcher;
  return 0LL;
}
