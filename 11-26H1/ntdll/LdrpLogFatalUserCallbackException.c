/*
 * XREFs of LdrpLogFatalUserCallbackException @ 0x18015D5C0
 * Callers:
 *     KiUserCallbackDispatcherHandler @ 0x180162EE0 (KiUserCallbackDispatcherHandler.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18000F380 (EtwpEventWriteFull.c)
 *     RtlRaiseStatus @ 0x18004A7C0 (RtlRaiseStatus.c)
 *     RtlDecodePointer @ 0x18004D5D0 (RtlDecodePointer.c)
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F2F0 (RtlUnhandledExceptionFilter2.c)
 *     ZwRaiseException @ 0x180161DD0 (ZwRaiseException.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpLogFatalUserCallbackException(_DWORD *a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(const void **); // rax
  __int64 result; // rax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdx
  int Length; // ecx
  int v8; // eax
  int v9; // eax
  __int16 v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h] BYREF
  const void *v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v13[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD *v14; // [rsp+78h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+88h] [rbp-78h]
  _BYTE v17[132]; // [rsp+8Ch] [rbp-74h] BYREF
  _QWORD v18[3]; // [rsp+110h] [rbp+10h] BYREF
  int v19; // [rsp+128h] [rbp+28h]
  int v20; // [rsp+12Ch] [rbp+2Ch]

  memset_thunk_772440563353939046(v17, 0, 0x7CuLL);
  v10 = 0;
  v11 = 0LL;
  v12[0] = a1;
  v12[1] = a2;
  v4 = (__int64 (__fastcall *)(const void **))RtlDecodePointer(RtlpUnhandledExceptionFilter);
  if ( v4 )
    result = v4(v12);
  else
    result = RtlUnhandledExceptionFilter2(v12);
  if ( (_DWORD)result != -1 )
  {
    if ( !(unsigned int)EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, (unsigned __int64 *)&v11) )
    {
      ProcessParameters = NtCurrentPeb()->ProcessParameters;
      v10 = ProcessParameters->ImagePathName.Length >> 1;
      v18[0] = &v10;
      v18[1] = 2LL;
      Length = ProcessParameters->ImagePathName.Length;
      v18[2] = ProcessParameters->ImagePathName.Buffer;
      v19 = Length;
      v20 = 0;
      EtwpEventWriteFull(v11, &FatalUserCallbackException, 0LL, 0, 0, 0LL, 0LL, 2, (__int64)v18);
      EtwNotificationUnregister(v11, 0LL);
    }
    v15 = a2[31];
    v8 = a1[1] | 1;
    v13[0] = -1073740771;
    v13[1] = v8;
    v14 = a1;
    v16 = 0;
    v9 = ZwRaiseException(v13);
    RtlRaiseStatus(v9);
  }
  return result;
}
