/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x18015D480
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x180162DE0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180034D40 (RtlRaiseStatus.c)
 *     RtlDecodePointer @ 0x180037B50 (RtlDecodePointer.c)
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F0A0 (RtlUnhandledExceptionFilter2.c)
 *     ZwRaiseException @ 0x180161CD0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

LONG __fastcall LdrpLogFatalUserCallbackException(_EXCEPTION_RECORD *a1, __int64 a2)
{
  __int64 (__fastcall *v4)(_EXCEPTION_POINTERS *); // rax
  LONG result; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  int Length; // ecx
  unsigned int v8; // eax
  NTSTATUS v9; // eax
  __int16 v10; // [rsp+50h] [rbp-B0h] BYREF
  ULONGLONG RegHandle; // [rsp+58h] [rbp-A8h] BYREF
  _EXCEPTION_POINTERS ExceptionPointers; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v14[3]; // [rsp+110h] [rbp+10h] BYREF
  int v15; // [rsp+128h] [rbp+28h]
  int v16; // [rsp+12Ch] [rbp+2Ch]

  memset_thunk_772440563353939046(&ExceptionRecord.NumberParameters + 1, 0, 0x7CuLL);
  v10 = 0;
  RegHandle = 0LL;
  ExceptionPointers.ExceptionRecord = a1;
  ExceptionPointers.ContextRecord = (PCONTEXT)a2;
  v4 = (__int64 (__fastcall *)(_EXCEPTION_POINTERS *))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v4 )
    result = v4(&ExceptionPointers);
  else
    result = RtlUnhandledExceptionFilter2(&ExceptionPointers, (ULONG)&Flags);
  if ( result != -1 )
  {
    if ( !EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      v10 = ProcessParameters->ImagePathName.Length >> 1;
      v14[0] = &v10;
      v14[1] = 2LL;
      Length = ProcessParameters->ImagePathName.Length;
      v14[2] = ProcessParameters->ImagePathName.Buffer;
      v15 = Length;
      v16 = 0;
      EtwpEventWriteFull(RegHandle, &FatalUserCallbackException, 0LL, 0, 0, 0LL, 0LL, 2, (__int64)v14);
      EtwNotificationUnregister(RegHandle, 0LL);
    }
    ExceptionRecord.ExceptionAddress = *(void **)(a2 + 248);
    v8 = a1->ExceptionFlags | 1;
    ExceptionRecord.ExceptionCode = -1073740771;
    ExceptionRecord.ExceptionFlags = v8;
    ExceptionRecord.ExceptionRecord = a1;
    ExceptionRecord.NumberParameters = 0;
    v9 = ZwRaiseException(&ExceptionRecord, (PCONTEXT)a2, 0);
    RtlRaiseStatus(v9);
  }
  return result;
}
