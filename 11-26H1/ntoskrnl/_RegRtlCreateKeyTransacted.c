/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x140979034
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408A2E30 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x1408A3800 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE6180 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE67D8 (_CmCreateOrdinalInstanceKey.c)
 *     _SysCtxRegCreateKey @ 0x140AED6E8 (_SysCtxRegCreateKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5C1C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwCreateKey @ 0x140728360 (ZwCreateKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x1408A3F44 (NtCreateKeyTransacted_Stub.c)
 *     _RegRtlIsPredefinedKey @ 0x140979188 (_RegRtlIsPredefinedKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x140AE6AB8 (_RegRtlOpenPredefinedKey.c)
 */

__int64 __fastcall RegRtlCreateKeyTransacted(
        HANDLE a1,
        const WCHAR *a2,
        ULONG a3,
        ACCESS_MASK a4,
        void *a5,
        char a6,
        HANDLE *KeyHandle,
        ULONG *Disposition,
        PUNICODE_STRING a9)
{
  __int64 v13; // rcx
  int inited; // ebx
  int v15; // ecx
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF

  memset(&ObjectAttributes, 0, 44);
  Handle = 0LL;
  DestinationString = 0LL;
  if ( !(unsigned __int8)RegRtlIsPredefinedKey() || (inited = RegRtlOpenPredefinedKey(v13, &Handle), inited >= 0) )
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
        a1 = Handle;
      ObjectAttributes.Attributes = v15 | 0x200;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = a5;
      ObjectAttributes.RootDirectory = a1;
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
