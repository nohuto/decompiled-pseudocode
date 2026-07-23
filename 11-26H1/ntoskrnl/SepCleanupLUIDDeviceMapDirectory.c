/*
 * XREFs of SepCleanupLUIDDeviceMapDirectory @ 0x140B255E0
 * Callers:
 *     SepDeleteLogonSessionTrack @ 0x140B003D0 (SepDeleteLogonSessionTrack.c)
 *     SepDeReferenceLogonSession @ 0x140B8585C (SepDeReferenceLogonSession.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x14030FF30 (KeStackAttachProcess.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     wcscmp @ 0x14053A470 (wcscmp.c)
 *     swprintf_s @ 0x14053D560 (swprintf_s.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140728AC0 (ZwOpenDirectoryObject.c)
 *     ZwMakeTemporaryObject @ 0x14072A2E0 (ZwMakeTemporaryObject.c)
 *     ZwOpenSymbolicLinkObject @ 0x14072A6E0 (ZwOpenSymbolicLinkObject.c)
 *     ZwQueryDirectoryObject @ 0x14072A9A0 (ZwQueryDirectoryObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepCleanupLUIDDeviceMapDirectory(_DWORD *a1, struct _LIST_ENTRY *a2)
{
  UNICODE_STRING *v4; // rbx
  unsigned int v5; // r13d
  ULONG v6; // r15d
  _KPROCESS *Process; // rdi
  char v8; // r12
  unsigned int ServerSiloServiceSessionId; // eax
  struct _LIST_ENTRY *v10; // r14
  NTSTATUS v11; // edi
  HANDLE *Pool2; // rsi
  BOOLEAN RestartScan; // r14
  __int64 v14; // rdi
  NTSTATUS v15; // eax
  unsigned int v16; // r15d
  HANDLE *v18; // r14
  HANDLE *v19; // r14
  ULONG ReturnLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE DirectoryHandle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE LinkHandle; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Context; // [rsp+58h] [rbp-A8h] BYREF
  struct _LIST_ENTRY *v24; // [rsp+60h] [rbp-A0h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t Dst[64]; // [rsp+E0h] [rbp-20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v4 = 0LL;
  Context = 0;
  v5 = 100;
  ReturnLength = 0;
  v6 = 0;
  DirectoryHandle = 0LL;
  DestinationString = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !a1 )
    return 3221225485LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = ObReferenceObjectSafeWithTag((__int64)Process, 0x4D526553u);
  if ( v8 )
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
  v24 = PsAttachSiloToCurrentThread(a2);
  v10 = v24;
  v11 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v11 < 0 )
  {
    PsDetachSiloFromCurrentThread(v10);
    if ( !v8 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    return (unsigned int)v11;
  }
  else
  {
LABEL_5:
    Pool2 = (HANDLE *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      RestartScan = 1;
      v14 = 0LL;
      while ( 1 )
      {
        v15 = ZwQueryDirectoryObject(DirectoryHandle, v4, v6, 1u, RestartScan, &Context, &ReturnLength);
        if ( v15 != -1073741789 )
          goto LABEL_8;
        v6 = ReturnLength;
        if ( v4 )
          ExFreePoolWithTag(v4, 0);
        v4 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
        if ( !v4 )
        {
          v15 = -1073741670;
LABEL_8:
          if ( v15 < 0 )
          {
            v16 = 0;
            if ( v15 != -2147483622 )
              v16 = v15;
            if ( (_DWORD)v14 )
            {
              v18 = Pool2;
              do
              {
                ZwClose(*v18++);
                --v14;
              }
              while ( v14 );
            }
            ExFreePoolWithTag(Pool2, 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
            if ( DirectoryHandle )
              ZwClose(DirectoryHandle);
            PsDetachSiloFromCurrentThread(v24);
            if ( !v8 )
              KiUnstackDetachProcess((__int64)&ApcState, 0);
            return v16;
          }
          if ( !wcscmp(v4[1].Buffer, L"SymbolicLink") )
          {
            if ( (unsigned int)v14 >= v5 )
            {
              if ( (_DWORD)v14 )
              {
                v19 = Pool2;
                do
                {
                  ZwClose(*v19++);
                  --v14;
                }
                while ( v14 );
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
                Pool2[v14] = LinkHandle;
                v14 = (unsigned int)(v14 + 1);
              }
            }
          }
          RestartScan = 0;
        }
      }
    }
    ZwClose(DirectoryHandle);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    PsDetachSiloFromCurrentThread(v24);
    if ( !v8 )
      KiUnstackDetachProcess((__int64)&ApcState, 0);
    return 3221225495LL;
  }
}
