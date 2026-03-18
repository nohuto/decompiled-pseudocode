/*
 * XREFs of PiAuDoesClientHaveAccess @ 0x14098DE50
 * Callers:
 *     PiCMDeleteDeviceInterfaceKey @ 0x140773764 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x14077386C (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x140773A24 (PiCMDeleteDevice.c)
 *     PiCMOpenClassKey @ 0x140916DFC (PiCMOpenClassKey.c)
 *     PiCMRegisterDeviceInterface @ 0x14098C74C (PiCMRegisterDeviceInterface.c)
 *     PiCMDeviceAction @ 0x14098CC84 (PiCMDeviceAction.c)
 *     PiCMSetRegistryProperty @ 0x14098D258 (PiCMSetRegistryProperty.c)
 *     PiDqIrpPropertySet @ 0x14098D708 (PiDqIrpPropertySet.c)
 *     PiCMSetObjectProperty @ 0x14098DA68 (PiCMSetObjectProperty.c)
 *     PiCMValidateDeviceInstance @ 0x14099A028 (PiCMValidateDeviceInstance.c)
 *     PiCMOpenDeviceKey @ 0x1409FF7B4 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x1409FFA20 (PiCMOpenObjectKey.c)
 *     PiSwDispatch @ 0x140A7B430 (PiSwDispatch.c)
 *     PiCMGetDeviceIdList @ 0x140AA01F0 (PiCMGetDeviceIdList.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x140ABE0C4 (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMQueryRemove @ 0x140B2D27C (PiCMQueryRemove.c)
 *     PiCMCreateDevice @ 0x140B5A67C (PiCMCreateDevice.c)
 *     PiCMDeleteDeviceKey @ 0x140B66CDC (PiCMDeleteDeviceKey.c)
 *     PiCMDeleteObject @ 0x140B6A43C (PiCMDeleteObject.c)
 *     PiCMUnregisterDeviceInterface @ 0x140B6B110 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140B6B2E8 (PiCMDeleteClassKey.c)
 *     PiCMSetDeviceProblem @ 0x140B6CA80 (PiCMSetDeviceProblem.c)
 * Callees:
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x1408CB2E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140933620 (SeCaptureSubjectContext.c)
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
