/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18009BC00
 * Callers:
 *     RtlpLookupSafeCurDirList @ 0x180105A64 (RtlpLookupSafeCurDirList.c)
 *     LdrpInitializeExecutionOptions @ 0x180118308 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable_U(PVOID Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  unsigned __int64 MaximumLength; // rax
  unsigned __int64 Length; // r8
  wchar_t *Buffer; // rdx
  WCHAR *v7; // r9
  NTSTATUS result; // eax
  __int16 v9; // cx
  ULONG_PTR v10; // [rsp+48h] [rbp+10h] BYREF

  MaximumLength = Value->MaximumLength;
  Length = Name->Length;
  Buffer = Name->Buffer;
  v7 = Value->Buffer;
  v10 = 0LL;
  result = RtlQueryEnvironmentVariable(Environment, Buffer, Length >> 1, v7, MaximumLength >> 1, &v10);
  v9 = v10;
  if ( v10 > 0x7FFF )
    return -1073741801;
  if ( result == -1073741789 )
    v9 = v10 - 1;
  Value->Length = 2 * v9;
  return result;
}
