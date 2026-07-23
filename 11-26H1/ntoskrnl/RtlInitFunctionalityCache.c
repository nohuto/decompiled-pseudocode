/*
 * XREFs of RtlInitFunctionalityCache @ 0x140805E18
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtOpenKeyEx @ 0x140936630 (NtOpenKeyEx.c)
 *     NtEnumerateValueKey @ 0x1409412A0 (NtEnumerateValueKey.c)
 */

__int64 RtlInitFunctionalityCache()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax
  ULONG i; // edi
  NTSTATUS v3; // esi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v5; // r9d
  ULONG ResultLength; // [rsp+38h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v9[2]; // [rsp+48h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp+37h] BYREF
  int v12; // [rsp+8Ch] [rbp+3Bh]
  unsigned int v13; // [rsp+94h] [rbp+43h]

  v0 = 0;
  v9[0] = 8913030LL;
  KeyHandle = 0LL;
  v9[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\RtlFunctionality";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v9;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v1 = NtOpenKeyEx(&KeyHandle, 0x20019u, &ObjectAttributes, 0);
  if ( v1 >= 0 )
  {
    for ( i = 0; ; ++i )
    {
      v3 = NtEnumerateValueKey(KeyHandle, i, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
      if ( v3 < 0 )
      {
        if ( v3 != -2147483643 )
        {
          NtClose(KeyHandle);
          if ( v3 != -2147483622 )
            return (unsigned int)v3;
          return v0;
        }
      }
      else if ( v12 == 4 && v13 < 0x80 )
      {
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        *((_DWORD *)&CurrentServerSiloGlobals[90].Flink + ((unsigned __int64)v5 >> 5)) |= 1 << (v5 & 0x1F);
      }
    }
  }
  if ( v1 == -1073741772 )
    return 0;
  return (unsigned int)v1;
}
