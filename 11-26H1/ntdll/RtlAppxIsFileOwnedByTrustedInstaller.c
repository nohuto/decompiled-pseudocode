/*
 * XREFs of RtlAppxIsFileOwnedByTrustedInstaller @ 0x180137F60
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateServiceSid @ 0x180039210 (RtlCreateServiceSid.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEqualSid @ 0x180059860 (RtlEqualSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800E0020 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x180161C50 (NtQuerySecurityObject.c)
 */

__int64 __fastcall RtlAppxIsFileOwnedByTrustedInstaller(__int64 a1, bool *a2)
{
  int OwnerSecurityDescriptor; // ebx
  __int64 Heap_0; // rsi
  __int64 v7; // rax
  _WORD *v8; // rdi
  _WORD *v9; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-18h] BYREF
  char v11; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v13; // [rsp+98h] [rbp+48h] BYREF

  v9 = 0LL;
  v10[1] = L"TrustedInstaller";
  v12 = 0;
  v10[0] = 2228256LL;
  v13 = 0;
  if ( !a2 )
    return 3221225485LL;
  OwnerSecurityDescriptor = NtQuerySecurityObject(a1, 1LL, 0LL, 0LL, &v12);
  if ( OwnerSecurityDescriptor == -1073741789 )
  {
    Heap_0 = RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      OwnerSecurityDescriptor = NtQuerySecurityObject(a1, 1LL, Heap_0, v12, &v12);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(Heap_0, &v9, &v11);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( v9 )
          {
            OwnerSecurityDescriptor = RtlCreateServiceSid((__int64)v10, 0LL, &v13);
            if ( OwnerSecurityDescriptor == -1073741789 )
            {
              v7 = RtlAllocateHeap_0();
              v8 = (_WORD *)v7;
              if ( v7 )
              {
                OwnerSecurityDescriptor = RtlCreateServiceSid((__int64)v10, v7, &v13);
                if ( OwnerSecurityDescriptor >= 0 )
                  *a2 = RtlEqualSid(v9, v8);
                RtlFreeHeap_0();
              }
            }
          }
        }
      }
      RtlFreeHeap_0();
    }
  }
  return (unsigned int)OwnerSecurityDescriptor;
}
