/*
 * XREFs of PfpSourceGetPrefetchSupport @ 0x140A57B64
 * Callers:
 *     PfpPrefetchPrivatePages @ 0x140A57EF4 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     NtOpenProcess @ 0x1408F61D0 (NtOpenProcess.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PfpSourceGetPrefetchSupport(int *a1, __int64 a2)
{
  PVOID v2; // r8
  int v5; // ecx
  unsigned __int64 v6; // rax
  NTSTATUS v7; // ebx
  int v8; // eax
  __int64 v9; // rdx
  CLIENT_ID ClientId; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE ProcessHandle; // [rsp+A0h] [rbp+20h] BYREF
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  v2 = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  ProcessHandle = 0LL;
  *(_DWORD *)a2 = *a1;
  v5 = *a1;
  Object = 0LL;
  memset(&ObjectAttributes, 0, 32);
  ClientId = 0LL;
  if ( !v5 )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    goto LABEL_11;
  }
  if ( v5 != 2 )
    return (unsigned int)-1073741637;
  v6 = (unsigned int)a1[1];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ClientId.UniqueProcess = (HANDLE)v6;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
  if ( v7 >= 0 )
  {
    v8 = ObpReferenceObjectByHandleWithTag(
           (ULONG_PTR)ProcessHandle,
           0x1FFFFF,
           (__int64)PsProcessType,
           0,
           0x73576650u,
           &Object,
           0LL,
           0LL);
    v2 = Object;
    v7 = v8;
    if ( v8 < 0 )
      goto LABEL_12;
    v9 = *((_QWORD *)a1 + 2);
    if ( v9 && v9 != ((*((_QWORD *)Object + 58) ^ *((_QWORD *)Object + 63)) & 0x1FFFFFFFFFFFFFFFLL) )
    {
      v7 = -1073741275;
      goto LABEL_12;
    }
    *(_QWORD *)(a2 + 8) = ProcessHandle;
    ProcessHandle = 0LL;
LABEL_11:
    v7 = 0;
LABEL_12:
    if ( v2 )
      ObfDereferenceObjectWithTag(v2, 0x73576650u);
  }
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v7;
}
