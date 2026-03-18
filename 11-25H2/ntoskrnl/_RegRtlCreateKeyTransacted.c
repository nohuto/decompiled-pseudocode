/*
 * XREFs of _RegRtlCreateKeyTransacted @ 0x14093201C
 * Callers:
 *     _SysCtxOpenControlSet @ 0x1408102E0 (_SysCtxOpenControlSet.c)
 *     _RegRtlCopyTreeInternal @ 0x140810CA0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
 *     _CmAddDeviceToContainerWorker @ 0x14094F44C (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140953DFC (_PnpSetPropertyWorker.c)
 *     _SysCtxRegCreateKey @ 0x140A4E66C (_SysCtxRegCreateKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140A58EDC (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A5E0F0 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     _RegRtlOpenPredefinedKey @ 0x1408111F4 (_RegRtlOpenPredefinedKey.c)
 *     NtCreateKeyTransacted_Stub @ 0x1408114D4 (NtCreateKeyTransacted_Stub.c)
 *     _RegRtlIsPredefinedKey @ 0x14093216C (_RegRtlIsPredefinedKey.c)
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
        __int64 a9)
{
  __int64 v13; // rcx
  int inited; // ebx
  int v15; // ecx
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  if ( !(unsigned __int8)RegRtlIsPredefinedKey()
    || (inited = RegRtlOpenPredefinedKey(v13, (__int64)&Handle), inited >= 0) )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, a2);
    if ( inited >= 0 )
    {
      ObjectAttributes.Length = 48;
      v15 = (32 * (a3 & 8 | 6)) | 2;
      if ( !a6 )
        v15 = 32 * (a3 & 8 | 6);
      if ( Handle )
        a1 = Handle;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.RootDirectory = a1;
      ObjectAttributes.Attributes = v15 | 0x200;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.SecurityDescriptor = a5;
      if ( a9 )
      {
        inited = NtCreateKeyTransacted_Stub((__int64)KeyHandle);
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
