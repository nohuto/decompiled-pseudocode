/*
 * XREFs of RtlpOpenBaseImageFileOptionsKey @ 0x1800D1810
 * Callers:
 *     RtlQueryImageFileExecutionOptions @ 0x1800D13E0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800D18C8 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtOpenKey @ 0x18015F080 (NtOpenKey.c)
 */

NTSTATUS __fastcall RtlpOpenBaseImageFileOptionsKey(_QWORD *a1)
{
  HANDLE v1; // rbx
  NTSTATUS result; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp+18h] BYREF

  v1 = (HANDLE)qword_1801C6430;
  if ( qword_1801C6430 )
    goto LABEL_2;
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180170E48;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v1 = KeyHandle;
    result = 0;
  }
  if ( result >= 0 )
  {
    if ( _InterlockedCompareExchange64(&qword_1801C6430, (signed __int64)v1, 0LL) )
    {
      NtClose(v1);
      v1 = (HANDLE)qword_1801C6430;
    }
LABEL_2:
    *a1 = v1;
    return 0;
  }
  return result;
}
