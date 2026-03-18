/*
 * XREFs of _RegRtlOpenPredefinedKey @ 0x140AE8C08
 * Callers:
 *     _RegRtlQueryKeyPathName @ 0x14089D928 (_RegRtlQueryKeyPathName.c)
 *     _PnpSetPropertyWorker @ 0x14090A5FC (_PnpSetPropertyWorker.c)
 *     _RegRtlCreateTreeTransacted @ 0x14091E278 (_RegRtlCreateTreeTransacted.c)
 *     _RegRtlCreateKeyTransacted @ 0x14091E5D4 (_RegRtlCreateKeyTransacted.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 *     _CmAddDeviceToContainerWorker @ 0x140AE82D0 (_CmAddDeviceToContainerWorker.c)
 *     _CmCreateOrdinalInstanceKey @ 0x140AE8928 (_CmCreateOrdinalInstanceKey.c)
 *     _CmSetDeviceInterfaceMappedPropertyFromRegValue @ 0x140AF342C (_CmSetDeviceInterfaceMappedPropertyFromRegValue.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x140925F40 (RtlFormatCurrentUserKeyPath.c)
 *     _RegRtlOpenKeyTransacted @ 0x140997950 (_RegRtlOpenKeyTransacted.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

__int64 __fastcall RegRtlOpenPredefinedKey(__int64 a1, HANDLE *a2)
{
  const WCHAR *Buffer; // rdx
  int v4; // ebx
  UNICODE_STRING P; // [rsp+30h] [rbp-18h] BYREF

  P = 0LL;
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
      v4 = RtlFormatCurrentUserKeyPath(&P);
      if ( v4 < 0 )
        goto LABEL_14;
      Buffer = P.Buffer;
      goto LABEL_12;
  }
  v4 = -1073741816;
LABEL_14:
  if ( P.Buffer )
    ExFreePool(P.Buffer);
  return (unsigned int)v4;
}
