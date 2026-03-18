/*
 * XREFs of ACPIInitMultiString @ 0x1400B1598
 * Callers:
 *     ACPIDockIrpQueryID @ 0x1400ABDF0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     <none>
 */

__int64 ACPIInitMultiString(struct _UNICODE_STRING *a1, const char *a2, ...)
{
  va_list v2; // rdi
  int v3; // ebx
  const char *v4; // rax
  wchar_t *Buffer; // rcx
  va_list v7; // rbx
  struct _UNICODE_STRING v8; // [rsp+28h] [rbp-30h] BYREF
  struct _STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF
  PUNICODE_STRING v10; // [rsp+80h] [rbp+28h]
  const char *v11; // [rsp+88h] [rbp+30h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a2);
  v10 = a1;
  v11 = a2;
  va_copy(v2, va);
  DestinationString = 0LL;
  v3 = 0;
  v8 = 0LL;
  v4 = a2;
  if ( a2 )
  {
    do
    {
      RtlInitAnsiString(&DestinationString, v4);
      v3 += RtlxAnsiStringToUnicodeSize(&DestinationString);
      v2 += 8;
      v4 = (const char *)*((_QWORD *)v2 - 1);
    }
    while ( v4 );
    a1 = v10;
  }
  if ( v3 )
  {
    a1->MaximumLength = v3 + 2;
    v10->Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned int)(v3 + 2), 1399874369LL);
    Buffer = v10->Buffer;
    if ( !Buffer )
      return 3221225626LL;
    v8.MaximumLength = v3 + 2;
    va_copy(v7, va);
    while ( 1 )
    {
      v8.Buffer = Buffer;
      if ( !*((_QWORD *)v7 - 1) )
        break;
      RtlInitAnsiString(&DestinationString, *((PCSZ *)v7 - 1));
      RtlAnsiStringToUnicodeString(&v8, &DestinationString, 0);
      v7 += 8;
      Buffer = &v8.Buffer[((unsigned __int64)v8.Length >> 1) + 1];
      v8.MaximumLength += -2 - v8.Length;
      v8.Length = 0;
    }
    *Buffer = 0;
    v10->Length = v10->MaximumLength;
  }
  else
  {
    RtlInitUnicodeString(a1, 0LL);
  }
  return 0LL;
}
