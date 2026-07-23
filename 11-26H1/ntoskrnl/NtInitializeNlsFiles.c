/*
 * XREFs of NtInitializeNlsFiles @ 0x140AD14E0
 * Callers:
 *     DifNtInitializeNlsFilesWrapper @ 0x14067DBD0 (DifNtInitializeNlsFilesWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x140728260 (ZwQueryDefaultLocale.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     MmMapViewOfSection @ 0x140992F30 (MmMapViewOfSection.c)
 *     ExpGetGlobalLocaleSection @ 0x140AD163C (ExpGetGlobalLocaleSection.c)
 */

NTSTATUS __cdecl NtInitializeNlsFiles(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  __int64 ULong64FromUser; // rax
  int ULongFromUser; // eax
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+68h] [rbp-20h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleIda; // [rsp+A8h] [rbp+20h] BYREF

  DefaultLocaleIda = 0;
  Object = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode )
    return -1073741637;
  ULong64FromUser = RtlReadULong64FromUser(BaseAddress);
  RtlWriteULong64ToUser(BaseAddress, ULong64FromUser);
  ULongFromUser = RtlReadULongFromUser(DefaultLocaleId);
  RtlWriteULongToUser(DefaultLocaleId, ULongFromUser);
  result = ZwQueryDefaultLocale(0, &DefaultLocaleIda);
  if ( result >= 0 )
  {
    result = ExpGetGlobalLocaleSection(&Object);
    if ( result >= 0 )
    {
      v12 = 0LL;
      v11 = 0LL;
      v13 = 0LL;
      v9 = MmMapViewOfSection(
             (__int64)Object,
             (__int64)KeGetCurrentThread()->ApcState.Process,
             &v12,
             0LL,
             0LL,
             (__int64)&v11,
             &v13,
             1,
             0x400000,
             2);
      ObfDereferenceObject(Object);
      if ( v9 >= 0 )
      {
        RtlWriteULong64ToUser(BaseAddress, v12);
        RtlWriteULongToUser(DefaultLocaleId, DefaultLocaleIda);
      }
      return v9;
    }
  }
  return result;
}
