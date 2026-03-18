/*
 * XREFs of ExpInitializeCallbacks @ 0x140CE6064
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CE4380 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ObCreateObjectType @ 0x14077B990 (ObCreateObjectType.c)
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     NtCreateDirectoryObject @ 0x140AF9E30 (NtCreateDirectoryObject.c)
 *     ExCreateCallback @ 0x140AFB990 (ExCreateCallback.c)
 */

char ExpInitializeCallbacks()
{
  unsigned int v0; // ebx
  PCALLBACK_OBJECT *v1; // rcx
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-59h] BYREF
  __int16 v5; // [rsp+68h] [rbp-29h] BYREF
  char v6; // [rsp+6Ah] [rbp-27h]
  int v7; // [rsp+70h] [rbp-21h]
  __int128 v8; // [rsp+74h] [rbp-1Dh]
  int v9; // [rsp+84h] [rbp-Dh]
  int v10; // [rsp+8Ch] [rbp-5h]
  void (__fastcall *v11)(__int64, __int64, __int64, struct _KLOCK_ENTRIES *); // [rsp+B0h] [rbp+1Fh]
  HANDLE Handle; // [rsp+F8h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Handle = 0LL;
  *(_QWORD *)&stru_140EFEF90.Header.Lock = 0LL;
  qword_140EFEF88 = (__int64)&qword_140EFEF80;
  qword_140EFEF80 = (__int64)&qword_140EFEF80;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Callback");
  memset_0(&v5, 0, 0x78uLL);
  v6 |= 4u;
  v5 = 120;
  v7 = 256;
  v11 = ExpDeleteCallback;
  v10 = 512;
  v8 = ExpCallbackMapping;
  v9 = 2031617;
  if ( (int)ObCreateObjectType(&DestinationString, &v5, 0LL, (__int64)&ExCallbackObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"\\Callback");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = *(PVOID *)&PspSiloMonitorLock.WaitBlockFill11[160];
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)&ObjectAttributes) < 0 )
    return 0;
  NtClose(Handle);
  LOWORD(word_140EFEF60.Header.Lock) = 0;
  qword_140EFEF70 = (__int64)&qword_140EFEF68;
  qword_140EFEF68 = (__int64)&qword_140EFEF68;
  v0 = 0;
  byte_140EFEF62 = 6;
  dword_140EFEF64 = 0;
  while ( ExpInitializeCallback[2 * v0] )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)ExpInitializeCallback[2 * v0 + 1]);
    v1 = (PCALLBACK_OBJECT *)ExpInitializeCallback[2 * v0];
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 80;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ExCreateCallback(v1, &ObjectAttributes, 1u, 1u) < 0 )
      return 0;
    ++v0;
  }
  return 1;
}
