/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x140AE6AB8
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x1408A3D28 (_RegRtlQueryKeyPathName.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     _RegRtlCreateTreeTransacted @ 0x140978CD8 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x140979034 (_RegRtlCreateKeyTransacted.c)
 *     _PnpSetPropertyWorker @ 0x1409ACBB4 (_PnpSetPropertyWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE6180 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE67D8 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF5C1C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x140901A50 (RtlFormatCurrentUserKeyPath.c)
 *     _RegRtlOpenKeyTransacted @ 0x1409583B0 (_RegRtlOpenKeyTransacted.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

__int64 __fastcall RegRtlOpenPredefinedKey(__int64 a1, HANDLE *a2)
{
  wchar_t *Buffer; // rdx
  int v4; // ebx
  UNICODE_STRING CurrentUserKeyPath; // [rsp+30h] [rbp-18h] BYREF

  CurrentUserKeyPath = 0LL;
  switch ( a1 )
  {
    case 2147483650LL:
      Buffer = L"\\REGISTRY\\MACHINE";
LABEL_12:
      v4 = RegRtlOpenKeyTransacted(0LL, Buffer, 0, 0x2000000u, a2, 0LL);
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
    case 2147483649LL:
      v4 = RtlFormatCurrentUserKeyPath(&CurrentUserKeyPath);
      if ( v4 < 0 )
        goto LABEL_14;
      Buffer = CurrentUserKeyPath.Buffer;
      goto LABEL_12;
  }
  v4 = -1073741816;
LABEL_14:
  if ( CurrentUserKeyPath.Buffer )
    ExFreePool(CurrentUserKeyPath.Buffer);
  return (unsigned int)v4;
}
