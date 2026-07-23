/*
 * XREFs of PspSiloInitializeSystemRootSymlink @ 0x1407F5270
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     RtlUShortAdd @ 0x14047AFC0 (RtlUShortAdd.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateSymbolicLinkObject @ 0x1407298C0 (ZwCreateSymbolicLinkObject.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall PspSiloInitializeSystemRootSymlink(struct _LIST_ENTRY *a1)
{
  const UNICODE_STRING *v2; // r14
  NTSTATUS result; // eax
  USHORT v4; // bx
  wchar_t *Pool2; // rax
  wchar_t *v6; // rdi
  struct _LIST_ENTRY *v7; // rbx
  NTSTATUS v8; // esi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  USHORT pusResult; // [rsp+98h] [rbp+38h] BYREF
  HANDLE LinkHandle; // [rsp+A0h] [rbp+40h] BYREF

  pusResult = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  v2 = (const UNICODE_STRING *)((char *)PsGetServerSiloGlobals((__int64)a1) + 1232);
  result = RtlUShortAdd(0x14u, v2->Length, &pusResult);
  if ( result >= 0 )
  {
    v4 = pusResult;
    Pool2 = (wchar_t *)ExAllocatePool2(0x100uLL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v4;
      DestinationString.Buffer = Pool2;
      RtlCopyUnicodeString(&DestinationString, &PspSystemRootTargetPrefix);
      RtlAppendUnicodeStringToString(&DestinationString, v2);
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspSystemRootSymlinkName;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 528;
      v7 = PsAttachSiloToCurrentThread(a1);
      v8 = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &DestinationString);
      PsDetachSiloFromCurrentThread(v7);
      if ( v8 >= 0 )
        ZwClose(LinkHandle);
      ExFreePoolWithTag(v6, 0x70537350u);
      return v8;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
