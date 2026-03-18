/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x140B231E0
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140AFE360 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B7CDEC (SepDeReferenceLogonSession.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402307C0 (KiUnstackDetachProcess.c)
 *     ObReferenceObjectSafeWithTag @ 0x140258450 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402C5270 (KeStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x14046CE80 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140476400 (PsDetachSiloFromCurrentThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140487140 (PsGetServerSiloServiceSessionId.c)
 *     wcscmp @ 0x140537FF0 (wcscmp.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140723EF0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x140725710 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x140725B10 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x140725DD0 (ZwQueryDirectoryObject.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // r13d
  _KPROCESS *Process; // rdi
  char v7; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v9; // r14
  NTSTATUS v10; // edi
  HANDLE *Pool2; // rsi
  __int64 v12; // rdi
  int DirectoryObject; // eax
  unsigned int v14; // r15d
  HANDLE *v16; // r14
  HANDLE *v17; // r14
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE LinkHandle; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY *v21; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v4 = 0LL;
  v20 = 0;
  v5 = 100;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !a1 )
    return 3221225485LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = ObReferenceObjectSafeWithTag((__int64)Process, 0x4D526553u);
  if ( v7 )
    ObfDereferenceObjectWithTag(Process, 0x4D526553u);
  else
    KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId((__int64)a2);
  swprintf_s(Dst, 0x40uLL, L"\\Sessions\\%d\\DosDevices\\%08x-%08x", ServerSiloServiceSessionId, a1[1], *a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v21 = PsAttachSiloToCurrentThread(a2);
  v9 = v21;
  v10 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v10 < 0 )
  {
    PsDetachSiloFromCurrentThread(v9);
    if ( !v7 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    return (unsigned int)v10;
  }
  else
  {
LABEL_5:
    Pool2 = (HANDLE *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        while ( 1 )
        {
          DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v4);
          if ( DirectoryObject == -1073741789 )
            break;
LABEL_8:
          if ( DirectoryObject < 0 )
          {
            v14 = 0;
            if ( DirectoryObject != -2147483622 )
              v14 = DirectoryObject;
            if ( (_DWORD)v12 )
            {
              v16 = Pool2;
              do
              {
                ZwClose(*v16++);
                --v12;
              }
              while ( v12 );
            }
            ExFreePoolWithTag(Pool2, 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            if ( DirectoryHandle )
              ZwClose(DirectoryHandle);
            PsDetachSiloFromCurrentThread(v21);
            if ( !v7 )
              KiUnstackDetachProcess((__int64)&ApcState, 0);
            return v14;
          }
          if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
          {
            if ( (unsigned int)v12 >= v5 )
            {
              if ( (_DWORD)v12 )
              {
                v17 = Pool2;
                do
                {
                  ZwClose(*v17++);
                  --v12;
                }
                while ( v12 );
              }
              v5 += 20;
              ExFreePoolWithTag(Pool2, 0);
              goto LABEL_5;
            }
            ObjectAttributes.RootDirectory = DirectoryHandle;
            ObjectAttributes.Length = 48;
            ObjectAttributes.Attributes = 576;
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            ObjectAttributes.ObjectName = v4;
            if ( ZwOpenSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
            {
              if ( ZwMakeTemporaryObject(LinkHandle) < 0 )
              {
                ZwClose(LinkHandle);
              }
              else
              {
                Pool2[v12] = LinkHandle;
                v12 = (unsigned int)(v12 + 1);
              }
            }
          }
        }
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        v4 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
        if ( !v4 )
        {
          DirectoryObject = -1073741670;
          goto LABEL_8;
        }
      }
    }
    ZwClose(DirectoryHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    PsDetachSiloFromCurrentThread(v21);
    if ( !v7 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    return 3221225495LL;
  }
}
