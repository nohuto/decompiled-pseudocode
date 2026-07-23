/*
 * XREFs of RtlAppxIsFileOwnedByTrustedInstaller @ 0x180137CD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateServiceSid @ 0x180023780 (RtlCreateServiceSid.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEqualSid @ 0x180043DE0 (RtlEqualSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800DCF60 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x180161B50 (NtQuerySecurityObject.c)
 */

NTSTATUS __cdecl RtlAppxIsFileOwnedByTrustedInstaller(HANDLE FileHandle, PBOOLEAN IsFileOwnedByTrustedInstaller)
{
  int OwnerSecurityDescriptor; // ebx
  PVOID Heap_0; // rsi
  PVOID v7; // rax
  void *v8; // rdi
  PSID Owner; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING ServiceName; // [rsp+38h] [rbp-18h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+88h] [rbp+38h] BYREF
  ULONG Length; // [rsp+90h] [rbp+40h] BYREF
  ULONG ServiceSidLength; // [rsp+98h] [rbp+48h] BYREF

  Owner = 0LL;
  ServiceName.Buffer = L"TrustedInstaller";
  Length = 0;
  *(_QWORD *)&ServiceName.Length = 2228256LL;
  ServiceSidLength = 0;
  if ( !IsFileOwnedByTrustedInstaller )
    return -1073741811;
  OwnerSecurityDescriptor = NtQuerySecurityObject(FileHandle, 1u, 0LL, 0, &Length);
  if ( OwnerSecurityDescriptor == -1073741789 )
  {
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( Heap_0 )
    {
      OwnerSecurityDescriptor = NtQuerySecurityObject(FileHandle, 1u, Heap_0, Length, &Length);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap_0, &Owner, &OwnerDefaulted);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( Owner )
          {
            OwnerSecurityDescriptor = RtlCreateServiceSid(&ServiceName, 0LL, &ServiceSidLength);
            if ( OwnerSecurityDescriptor == -1073741789 )
            {
              v7 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, ServiceSidLength);
              v8 = v7;
              if ( v7 )
              {
                OwnerSecurityDescriptor = RtlCreateServiceSid(&ServiceName, v7, &ServiceSidLength);
                if ( OwnerSecurityDescriptor >= 0 )
                  *IsFileOwnedByTrustedInstaller = RtlEqualSid(Owner, v8);
                RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v8);
              }
            }
          }
        }
      }
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    }
  }
  return OwnerSecurityDescriptor;
}
