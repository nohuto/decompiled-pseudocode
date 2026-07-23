/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14094E8B0
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140776764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077686C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140776A24 (PiCMDeleteDevice.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14091B4B8 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14091C550 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14091C7BC (PiCMOpenObjectKey.c)
 *     PiCMRegisterDeviceInterface @ 0x14094D1B4 (PiCMRegisterDeviceInterface.c)
 *     PiCMDeviceAction @ 0x14094D6E4 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14094DCB8 (PiCMSetRegistryProperty.c)
 *     PiDqIrpPropertySet @ 0x14094E168 (PiDqIrpPropertySet.c)
 *     PiCMSetObjectProperty @ 0x14094E4C8 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x14095AA88 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenClassKey @ 0x140971868 (PiCMOpenClassKey.c)
 *     PiSwDispatch @ 0x140A8C570 (PiSwDispatch.c)
 *     PiCMGetDeviceIdList @ 0x140AA1B80 (PiCMGetDeviceIdList.c)
 *     PiCMQueryRemove @ 0x140B2F2FC (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5D998 (PiCMCreateDevice.c)
 *     PiCMDeleteDeviceKey @ 0x140B69C68 (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6D64C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6E20C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6E3E4 (PiCMDeleteClassKey.c)
 *     PiCMSetDeviceProblem @ 0x140B6FE50 (PiCMSetDeviceProblem.c)
 * Callees:
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408D1890 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14090F1D0 (SeCaptureSubjectContext.c)
 */

BOOLEAN __fastcall PiAuDoesClientHaveAccess(ACCESS_MASK DesiredAccess)
{
  PSECURITY_DESCRIPTOR v1; // rbx
  BOOLEAN result; // al
  BOOLEAN v4; // bl
  int v5; // ecx
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  v1 = PiAuSecurityObject;
  GrantedAccess = 0;
  AccessStatus = 0;
  result = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  if ( PiAuSecurityObject )
  {
    SeCaptureSubjectContext(&SubjectSecurityContext);
    v4 = SeAccessCheck(
           v1,
           &SubjectSecurityContext,
           0,
           DesiredAccess,
           0,
           0LL,
           (PGENERIC_MAPPING)&PiAuSecurityObjectMapping,
           KeGetCurrentThread()->PreviousMode,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectSecurityContext);
    result = v4;
    v5 = 0;
    if ( AccessStatus < 0 )
      result = 0;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 < 0 )
    return 0;
  return result;
}
