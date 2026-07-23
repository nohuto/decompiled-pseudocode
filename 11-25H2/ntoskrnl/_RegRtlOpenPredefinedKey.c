/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x1408111F4
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x1408112B8 (_RegRtlQueryKeyPathName.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateTreeTransacted @ 0x140931CBC (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14093201C (_RegRtlCreateKeyTransacted.c)
 *     _CmAddDeviceToContainerWorker @ 0x14094F44C (_CmAddDeviceToContainerWorker.c)
 *     _PnpSetPropertyWorker @ 0x140953DFC (_PnpSetPropertyWorker.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140A58EDC (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140A5E0F0 (_CmCreateOrdinalInstanceKey.c)
 * Callees:
 *     _RegRtlOpenKeyTransacted @ 0x1408C9BF0 (_RegRtlOpenKeyTransacted.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x140916F10 (RtlFormatCurrentUserKeyPath.c)
 */

__int64 __fastcall RegRtlOpenPredefinedKey(__int64 a1, __int64 a2)
{
  wchar_t *Buffer; // rdx
  NTSTATUS v4; // ebx
  UNICODE_STRING CurrentUserKeyPath; // [rsp+30h] [rbp-18h] BYREF

  CurrentUserKeyPath = 0LL;
  switch ( a1 )
  {
    case 2147483650LL:
      Buffer = L"\\REGISTRY\\MACHINE";
LABEL_12:
      v4 = RegRtlOpenKeyTransacted(0LL, Buffer, 0LL, 0x2000000LL, a2, 0LL);
      goto LABEL_14;
    case 2147483648LL:
      Buffer = L"\\REGISTRY\\MACHINE\\SOFTWARE\\CLASSES";
      goto LABEL_12;
    case 2147483651LL:
      Buffer = L"\\REGISTRY\\USER";
      goto LABEL_12;
    case 2147483653LL:
      Buffer = L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\HARDWARE PROFILES\\CURRENT";
      goto LABEL_12;
  }
  if ( a1 != 2147483649LL )
  {
    v4 = -1073741816;
    goto LABEL_14;
  }
  v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
  if ( v4 >= 0 )
  {
    Buffer = CurrentUserKeyPath.Buffer;
    goto LABEL_12;
  }
LABEL_14:
  RtlFreeAnsiString(&CurrentUserKeyPath);
  return (unsigned int)v4;
}
