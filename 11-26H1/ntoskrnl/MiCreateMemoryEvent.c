/*
 * XREFs of MiCreateMemoryEvent @ 0x140885798
 * Callers:
 *     MiInitializeMemoryEvents @ 0x140885C60 (MiInitializeMemoryEvents.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ZwCreateEvent @ 0x1407288C0 (ZwCreateEvent.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCreateSymbolicLink @ 0x140AB6B08 (ObCreateSymbolicLink.c)
 */

__int64 __fastcall MiCreateMemoryEvent(UNICODE_STRING *a1, int a2, void *a3, void *a4, int a5, __int64 *a6, HANDLE *a7)
{
  UNICODE_STRING v7; // xmm0
  __int64 v8; // r15
  void *v9; // rbx
  NTSTATUS v12; // eax
  HANDLE v13; // rcx
  int SymbolicLink; // edi
  UNICODE_STRING v16; // [rsp+40h] [rbp-51h] BYREF
  _QWORD v17[3]; // [rsp+50h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-29h] BYREF
  HANDLE EventHandle; // [rsp+E0h] [rbp+4Fh] BYREF
  __int64 v20; // [rsp+F0h] [rbp+5Fh] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp+67h] BYREF

  v7 = *a1;
  v8 = a2;
  v9 = 0LL;
  v20 = 0LL;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  EventHandle = 0LL;
  v16 = v7;
  if ( a3 )
  {
    ++v16.Buffer;
    v16.Length -= 2;
    v16.MaximumLength -= 2;
  }
  ObjectAttributes.RootDirectory = a3;
  ObjectAttributes.ObjectName = &v16;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.SecurityDescriptor = a4;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v12 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  v13 = EventHandle;
  SymbolicLink = v12;
  if ( v12 >= 0 )
  {
    SymbolicLink = ObpReferenceObjectByHandleWithTag((ULONG_PTR)EventHandle, 0x6F506D4Du, (__int64)&v20, 0LL, 0LL);
    if ( SymbolicLink >= 0 )
    {
      if ( !a5 )
      {
LABEL_8:
        SymbolicLink = 0;
        *a6 = v20;
        *a7 = EventHandle;
        v13 = 0LL;
        EventHandle = 0LL;
        goto LABEL_10;
      }
      ObjectAttributes.Length = 48;
      v17[1] = MiResolveMemoryEvent;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 528;
      ObjectAttributes.ObjectName = a1;
      ObjectAttributes.SecurityDescriptor = a4;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v17[0] = 1LL;
      v17[2] = v8;
      SymbolicLink = ObCreateSymbolicLink(
                       (unsigned int)&Handle,
                       983041,
                       (unsigned int)&ObjectAttributes,
                       (unsigned int)v17,
                       0);
      if ( SymbolicLink >= 0 )
      {
        ObCloseHandle(Handle, 0);
        goto LABEL_8;
      }
    }
    v13 = EventHandle;
    v9 = (void *)v20;
  }
LABEL_10:
  if ( v13 )
    ObCloseHandle(v13, 0);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x6F506D4Du);
  return (unsigned int)SymbolicLink;
}
