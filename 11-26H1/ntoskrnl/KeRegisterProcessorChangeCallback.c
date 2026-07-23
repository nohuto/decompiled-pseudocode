/*
 * XREFs of KeRegisterProcessorChangeCallback @ 0x1407BD330
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalGetProcessorIdByNtNumber @ 0x140432C50 (HalGetProcessorIdByNtNumber.c)
 *     ExUnregisterCallback @ 0x1404E6530 (ExUnregisterCallback.c)
 *     ExRegisterCallback @ 0x1404E9CF0 (ExRegisterCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
 */

PVOID __stdcall KeRegisterProcessorChangeCallback(
        PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext,
        ULONG Flags)
{
  unsigned int v5; // ebx
  char v6; // di
  PVOID v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r15d
  __int64 *v12; // r12
  unsigned int v13; // edi
  __int64 *v14; // r14
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rcx
  NTSTATUS v19; // [rsp+20h] [rbp-59h]
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-51h] BYREF
  PVOID v21; // [rsp+30h] [rbp-49h]
  PVOID v22; // [rsp+38h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  __int128 v25; // [rsp+80h] [rbp+7h] BYREF
  int v26; // [rsp+90h] [rbp+17h] BYREF

  v21 = CallbackContext;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v26 = 0;
  v5 = 0;
  CallbackObject = 0LL;
  v6 = Flags;
  DestinationString = 0LL;
  v25 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\ProcessorAdd");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0);
  if ( v19 < 0 )
    return 0LL;
  ExAcquireFastMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[56]);
  v8 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, CallbackContext);
  v22 = v8;
  ObfDereferenceObject(CallbackObject);
  if ( v8 && (v6 & 1) != 0 )
  {
    v11 = KeNumberProcessors_0;
    v12 = KiProcessorBlock;
    v13 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v14 = KiProcessorBlock;
      do
      {
        v15 = *v14;
        *(_QWORD *)((char *)&v25 + 4) = v13;
        WORD6(v25) = *(unsigned __int8 *)(v15 + 208);
        BYTE14(v25) = *(_BYTE *)(v15 + 209);
        HalGetProcessorIdByNtNumber(v13, (__int64)&v26, v9, v10);
        LODWORD(v25) = 0;
        v19 = 0;
        guard_dispatch_icall_no_overrides((__int64)v21, (__int64)&v25);
        v16 = 0;
        ++v13;
        ++v14;
      }
      while ( v13 < v11 );
    }
    else
    {
      v16 = v19;
    }
    if ( v16 < 0 )
    {
      LODWORD(v25) = 2;
      ExUnregisterCallback(v8);
      v16 = v19;
      v8 = 0LL;
      v22 = 0LL;
    }
    else
    {
      LODWORD(v25) = 1;
    }
    DWORD2(v25) = v16;
    if ( v13 )
    {
      v17 = (__int64)v21;
      do
      {
        v18 = *v12;
        DWORD1(v25) = v5;
        WORD6(v25) = *(unsigned __int8 *)(v18 + 208);
        BYTE14(v25) = *(_BYTE *)(v18 + 209);
        HalGetProcessorIdByNtNumber(v5, (__int64)&v26, v9, v10);
        guard_dispatch_icall_no_overrides(v17, (__int64)&v25);
        ++v5;
        ++v12;
      }
      while ( v5 < v13 );
      v8 = v22;
    }
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&KiSupervisorXStateFeaturesLock.SchedulerApcFill5[56]);
  return v8;
}
