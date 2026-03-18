/*
 * XREFs of ?SendSynchronousIoControl@RimBackedDeviceBase@@QEBAJKPEAXK0KPEAK@Z @ 0x1402FEF6C
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1402FE0A0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1402FE680 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     SendSynchronousIoControl @ 0x1402FF394 (SendSynchronousIoControl.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall RimBackedDeviceBase::SendSynchronousIoControl(
        RimBackedDeviceBase *this,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID a5,
        ULONG a6,
        unsigned int *a7)
{
  __int64 v10; // rax
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  PVOID v13; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  void *FileHandle; // [rsp+40h] [rbp-71h] BYREF
  PVOID Object; // [rsp+48h] [rbp-69h] BYREF
  __int64 v17; // [rsp+50h] [rbp-61h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-59h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v20[4]; // [rsp+98h] [rbp-19h] BYREF

  v17 = (__int64)a7;
  if ( *((_BYTE *)this + 12) )
    return SendSynchronousIoControl(a2, a4, a5, a6, (__int64)a7);
  v10 = *((_QWORD *)this + 2);
  FileHandle = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v20[0] = 12;
  v20[1] = 2;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)((v10 + 264) & -(__int64)(v10 != 0));
  v20[2] = 257;
  ObjectAttributes.SecurityQualityOfService = v20;
  IoStatusBlock = 0LL;
  v11 = ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v11 >= 0 )
  {
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v13 = Object;
    v11 = v12;
    if ( v12 >= 0 )
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
      ObfReferenceObject(RelatedDeviceObject);
      v11 = SendSynchronousIoControl(a2, a4, a5, a6, v17);
      if ( RelatedDeviceObject )
        ObfDereferenceObject(RelatedDeviceObject);
    }
    if ( v13 )
      ObfDereferenceObject(v13);
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v11;
}
