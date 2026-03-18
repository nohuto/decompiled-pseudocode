/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x14091E5D4
 * Callers:
 *     _SysCtxOpenControlSet @ 0x14089CA30 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x14089D400 (_RegRtlCopyTreeInternal.c)
 *     _PnpSetPropertyWorker @ 0x14090A5FC (_PnpSetPropertyWorker.c)
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE82D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE8928 (_CmCreateOrdinalInstanceKey.c)
 *     _SysCtxRegCreateKey @ 0x140AEABF8 (_SysCtxRegCreateKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF342C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045D040 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwCreateKey @ 0x140723790 (ZwCreateKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x14089DB44 (NtCreateKeyTransacted_Stub.c)
 *     _RegRtlIsPredefinedKey @ 0x14091E728 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE8C08 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlCreateKeyTransacted(
        void *a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        HANDLE *KeyHandle,
        ULONG *Disposition,
        PUNICODE_STRING a9)
{
  HANDLE v12; // rdi
  __int64 v13; // rcx
  int inited; // ebx
  int v15; // ecx
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF

  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  DestinationString = 0LL;
  v12 = a1;
  if ( !(unsigned __int8)RegRtlIsPredefinedKey(a1) || (inited = RegRtlOpenPredefinedKey(v13, &Handle), inited >= 0) )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      v15 = (32 * (a3 & 8 | 6)) | 2;
      if ( !a6 )
        v15 = 32 * (a3 & 8 | 6);
      if ( Handle )
        v12 = Handle;
      ObjectAttributes.Attributes = v15 | 0x200;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = a5;
      ObjectAttributes.RootDirectory = v12;
      if ( a9 )
      {
        inited = NtCreateKeyTransacted_Stub((__int64)KeyHandle, a4);
        if ( inited == -1073741702 )
          inited = -1072103420;
      }
      else
      {
        inited = ZwCreateKey(KeyHandle, a4, &ObjectAttributes, 0, 0LL, a3, Disposition);
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}
