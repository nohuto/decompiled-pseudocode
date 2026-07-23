/*
 * XREFs of KdpCreateFileCallback @ 0x140C195E0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1403992B0 (DbgPrintEx.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 */

__int64 __fastcall KdpCreateFileCallback(__int64 a1, UNICODE_STRING *a2, LARGE_INTEGER a3)
{
  ULONG v3; // eax
  ULONG FileAttributes; // eax
  NTSTATUS v5; // ebx
  ULONG CreateDisposition; // [rsp+38h] [rbp-11h]
  int CreateOptions; // [rsp+40h] [rbp-9h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+27h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+B0h] [rbp+67h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a2;
  v3 = *(_DWORD *)(a1 + 4);
  AllocationSize = a3;
  CreateOptions = *(_DWORD *)(a1 + 8) | (HIDWORD(WheapPfaLock.KernelStack) != 0 ? 0x80000 : 0);
  CreateDisposition = v3;
  FileAttributes = *(_DWORD *)a1;
  IoStatusBlock = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = ZwCreateFile(
         (PHANDLE)(a1 + 16),
         0x120116u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         FileAttributes,
         0,
         CreateDisposition,
         CreateOptions,
         0LL,
         0);
  DbgPrintEx(0, 0, "KdPullRemoteFile(%p): Return from ZwCreateFile with status %x\n", KeGetCurrentThread(), v5);
  if ( v5 < 0 )
    DbgPrintEx(0, 2u, "\nKdPullRemoteFile: Local file open failed, 0x%08x\n", v5);
  return (unsigned int)v5;
}
