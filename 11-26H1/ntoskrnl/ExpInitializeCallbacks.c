/*
 * XREFs of ExpInitializeCallbacks @ 0x140CEC404
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140CEA720 (ExpInitSystemPhase1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObCreateObjectType @ 0x14077E5D0 (ObCreateObjectType.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     NtCreateDirectoryObject @ 0x140AFC2C0 (NtCreateDirectoryObject.c)
 *     ExCreateCallback @ 0x140AFD610 (ExCreateCallback.c)
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
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+67h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DirectoryHandle = 0LL;
  *(_QWORD *)&stru_140EFF2C0.Header.Lock = 0LL;
  stru_140EFF2C0.SListFaultAddress = &stru_140EFF2C0.Header.WaitListHead.Blink;
  stru_140EFF2C0.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&stru_140EFF2C0.Header.WaitListHead.Blink;
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
  ObjectAttributes.SecurityDescriptor = PspSiloMonitorLock.WaitBlock[3].Thread;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 80;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  if ( NtCreateDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes) < 0 )
    return 0;
  NtClose(DirectoryHandle);
  LOWORD(word_140EFF2A0.Header.Lock) = 0;
  qword_140EFF2B0 = (__int64)&qword_140EFF2A8;
  qword_140EFF2A8 = (__int64)&qword_140EFF2A8;
  v0 = 0;
  byte_140EFF2A2 = 6;
  dword_140EFF2A4 = 0;
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
