/*
 * XREFs of RtlExpandEnvironmentStrings_U @ 0x18009B9D0
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x1800447EC (RtlpCallQueryRegistryRoutine.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x180099E48 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpLookupSafeCurDirList @ 0x180105A64 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18009BE40 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings_U(
        PVOID Environment,
        PUNICODE_STRING Source,
        PUNICODE_STRING Destination,
        PULONG ReturnedLength)
{
  wchar_t *Buffer; // rdi
  NTSTATUS v5; // r14d
  ULONG_PTR v6; // rbp
  SIZE_T ValueLength; // r12
  unsigned __int64 v8; // rbx
  wchar_t *v9; // r13
  wchar_t *v10; // rsi
  unsigned __int64 v11; // rbp
  NTSTATUS result; // eax
  SIZE_T v13; // rax
  SIZE_T v14; // r15
  NTSTATUS v15; // r8d
  ULONG_PTR v16; // rcx
  PVOID v17; // [rsp+90h] [rbp+8h]
  ULONG_PTR ReturnLength; // [rsp+98h] [rbp+10h] BYREF
  PUNICODE_STRING v19; // [rsp+A0h] [rbp+18h]
  PULONG v20; // [rsp+A8h] [rbp+20h]

  v20 = ReturnedLength;
  v19 = Destination;
  v17 = Environment;
  Buffer = Source->Buffer;
  v5 = 0;
  v6 = 0LL;
  ValueLength = (unsigned __int64)Destination->MaximumLength >> 1;
  v8 = (unsigned __int64)Source->Length >> 1;
  v9 = Destination->Buffer;
  ReturnLength = 0LL;
  if ( !v8 )
    goto LABEL_26;
  do
  {
    if ( *Buffer != 37 )
      goto LABEL_3;
    v13 = v8 - 1;
    v14 = 0LL;
    v10 = Buffer + 1;
    if ( v8 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v10 == 37 )
        break;
      ++v10;
      ++v14;
    }
    while ( v14 < v13 );
    if ( v14
      && v14 < v13
      && ((v15 = RtlQueryEnvironmentVariable(Environment, Buffer + 1, v14, v9, ValueLength, &ReturnLength),
           (int)(v15 + 0x80000000) < 0)
       || v15 == -1073741789) )
    {
      v16 = ReturnLength + v6;
      v6 = ReturnLength + v6 - 1;
      if ( v15 != -1073741789 )
        v6 = v16;
      v8 += -2LL - v14;
      if ( v15 < 0 )
      {
        v5 = v15;
      }
      else
      {
        ValueLength -= ReturnLength;
        v9 += ReturnLength;
      }
    }
    else
    {
LABEL_3:
      if ( v5 >= 0 )
      {
        if ( ValueLength <= 1 )
        {
          v5 = -1073741789;
        }
        else
        {
          --ValueLength;
          *v9++ = *Buffer;
        }
      }
      ++v6;
      v10 = Buffer;
      --v8;
    }
    Environment = v17;
    Buffer = v10 + 1;
  }
  while ( v8 );
  if ( v5 >= 0 )
  {
LABEL_26:
    if ( ValueLength )
      *v9 = 0;
    else
      v5 = -1073741789;
  }
  v11 = v6 + 1;
  if ( v11 > 0x7FFF )
  {
    result = -1073741823;
    if ( v20 )
      *v20 = 0;
  }
  else
  {
    if ( v5 >= 0 )
      v19->Length = 2 * v11 - 2;
    if ( v20 )
      *v20 = 2 * v11;
    return v5;
  }
  return result;
}
