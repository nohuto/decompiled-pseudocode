/*
 * XREFs of sub_140059910 @ 0x140059910
 * Callers:
 *     sub_14006C720 @ 0x14006C720 (sub_14006C720.c)
 * Callees:
 *     <none>
 */

__int64 sub_140059910()
{
  unsigned int v0; // ebx
  int LastError; // eax
  int WnfStateName; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  SecurityDescriptor = 0LL;
  if ( !dword_1400E8948 )
  {
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:P(A;;GA;;;WD)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054893335-185714091-3362601943-3526593181-11598"
            "16984-2199008581-497492991)",
           1u,
           &SecurityDescriptor,
           0LL) )
    {
      WnfStateName = NtCreateWnfStateName(&qword_1400E8940, 3LL, 0LL);
      if ( WnfStateName >= 0 )
      {
        dword_1400E8948 = 1;
        goto LABEL_9;
      }
      LastError = WnfStateName | 0x10000000;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
    }
    v0 = LastError;
  }
LABEL_9:
  LocalFree(SecurityDescriptor);
  return v0;
}
