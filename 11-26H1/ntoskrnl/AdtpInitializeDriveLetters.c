/*
 * XREFs of AdtpInitializeDriveLetters @ 0x140890D7C
 * Callers:
 *     AdtpInitializeAuditingCommon @ 0x140890D3C (AdtpInitializeAuditingCommon.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     StringCopyWorkerW @ 0x1407145C8 (StringCopyWorkerW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtQuerySymbolicLinkObject @ 0x140A907B0 (NtQuerySymbolicLinkObject.c)
 *     NtOpenSymbolicLinkObject @ 0x140A90AD0 (NtOpenSymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpInitializeDriveLetters(__int64 a1, size_t a2, size_t *a3, const wchar_t *a4)
{
  int SymbolicLinkObject; // ebx
  unsigned int v5; // edi
  wchar_t *Buffer; // r13
  unsigned int i; // esi
  char *v8; // r14
  __int64 Pool2; // rax
  void *v10; // r15
  HANDLE v11; // rcx
  unsigned int v13; // ebx
  char v14; // r14
  UNICODE_STRING *v15; // rsi
  unsigned int v16; // eax
  size_t v17; // [rsp+28h] [rbp-69h]
  HANDLE Handle; // [rsp+38h] [rbp-59h] BYREF
  __int128 v19; // [rsp+40h] [rbp-51h] BYREF
  __int128 v20; // [rsp+50h] [rbp-41h]
  __int128 v21; // [rsp+60h] [rbp-31h]
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-21h] BYREF
  wchar_t pszDest[32]; // [rsp+80h] [rbp-11h] BYREF

  DestinationString = 0LL;
  *(_QWORD *)&v21 = 0LL;
  SymbolicLinkObject = 0;
  v19 = 0LL;
  DWORD2(v21) = 0;
  v5 = 0;
  v20 = 0LL;
  Handle = 0LL;
  StringCopyWorkerW(pszDest, a2, a3, a4, v17);
  RtlInitUnicodeString(&DestinationString, pszDest);
  Buffer = DestinationString.Buffer;
  for ( i = 0; i < 0x1A; ++i )
  {
    Buffer[12] = i + 65;
    LODWORD(v19) = 48;
    *(_QWORD *)&v20 = &DestinationString;
    *((_QWORD *)&v19 + 1) = 0LL;
    DWORD2(v20) = 576;
    v21 = 0LL;
    SymbolicLinkObject = NtOpenSymbolicLinkObject(&Handle, 1LL, &v19);
    if ( SymbolicLinkObject >= 0 )
    {
      DriveMappingArray[12 * v5] = Buffer[12];
      v8 = (char *)&DriveMappingArray[12 * v5];
      Pool2 = ExAllocatePool2(0x100uLL);
      v10 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      v11 = Handle;
      *((_DWORD *)v8 + 2) = 0x1000000;
      *((_QWORD *)v8 + 2) = Pool2;
      SymbolicLinkObject = NtQuerySymbolicLinkObject(v11);
      NtClose(Handle);
      if ( SymbolicLinkObject < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        RtlInitUnicodeString((PUNICODE_STRING)(v8 + 8), 0LL);
      }
      else
      {
        ++v5;
      }
    }
  }
  if ( SymbolicLinkObject == -1073741801 )
    return (unsigned int)SymbolicLinkObject;
  v13 = 0;
  if ( v5 )
  {
    do
    {
      LODWORD(v19) = 48;
      *((_QWORD *)&v19 + 1) = 0LL;
      v14 = 0;
      DWORD2(v20) = 576;
      v21 = 0LL;
      v15 = (UNICODE_STRING *)&DriveMappingArray[8 * v13 + 4 + 4 * v13];
      *(_QWORD *)&v20 = v15;
      if ( (int)NtOpenSymbolicLinkObject(&Handle, 1LL, &v19) >= 0 )
      {
        if ( (int)NtQuerySymbolicLinkObject(Handle) < 0 )
        {
          ExFreePoolWithTag(v15->Buffer, 0);
          RtlInitUnicodeString(v15, 0LL);
        }
        else
        {
          v14 = 1;
        }
        NtClose(Handle);
      }
      v16 = v13 + 1;
      if ( v14 )
        v16 = v13;
      v13 = v16;
    }
    while ( v16 < v5 );
  }
  return 0LL;
}
