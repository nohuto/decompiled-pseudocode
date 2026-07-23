/*
 * XREFs of HalpAcquirePccInterface @ 0x140789C74
 * Callers:
 *     HaliInitializePlatformDebugTriggers @ 0x1405A4DC0 (HaliInitializePlatformDebugTriggers.c)
 *     HalpStartPccCommand @ 0x14078A034 (HalpStartPccCommand.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     HalpQueryPccInterface @ 0x140789EF4 (HalpQueryPccInterface.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14092A610 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall HalpAcquirePccInterface(unsigned __int8 a1, UNICODE_STRING *a2, void *a3)
{
  int v3; // esi
  NTSTATUS PccInterface; // edi
  PVOID v6; // rbx
  void *OpenOptions; // [rsp+28h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+A8h] [rbp+28h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF

  v3 = a1;
  PccInterface = 0;
  Object = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  if ( a2 && a2->Buffer )
  {
    ObjectAttributes.ObjectName = a2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    FileHandle = 0LL;
    PccInterface = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0, 0);
    if ( PccInterface >= 0 )
    {
      PccInterface = ObpReferenceObjectByHandleWithTag((ULONG_PTR)FileHandle, 0x746C6644u, (__int64)&Object, 0LL, 0LL);
      if ( PccInterface >= 0 )
      {
        OpenOptions = a3;
        v6 = Object;
        PccInterface = HalpQueryPccInterface(*((PDEVICE_OBJECT *)Object + 1), v3, OpenOptions);
        ObfDereferenceObject(v6);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  return (unsigned int)PccInterface;
}
