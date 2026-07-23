/*
 * XREFs of PopCreateNotificationName @ 0x1409F6A38
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x140491FF0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140729A40 (ZwCreateWnfStateName.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 */

int __fastcall PopCreateNotificationName(PWNF_STATE_NAME StateName)
{
  int result; // eax
  UNICODE_STRING UnicodeString; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD SecurityDescriptor[5]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 CapabilitySid[48]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE CapabilityGroupSid[56]; // [rsp+B0h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E8h] [rbp-20h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2752552LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  RtlCreateAcl(&Acl, 0x148u, 2u);
  RtlpAddKnownAce((char *)&Acl, 2u, 0, 2031619, *(unsigned __int8 **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
  RtlpAddKnownAce((char *)&Acl, 2u, 0, 1179649, *(unsigned __int8 **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  RtlpAddKnownAce((char *)&Acl, 2u, 0, 1179649, *(unsigned __int8 **)&RtlpBootStatHandleLock.SystemCallNumber, 0);
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    RtlpAddKnownAce((char *)&Acl, 2u, 0, 1179649, CapabilitySid, 0);
    memset(SecurityDescriptor, 0, 32);
    LOBYTE(SecurityDescriptor[0]) = 1;
    SecurityDescriptor[4] = &Acl;
    WORD1(SecurityDescriptor[0]) = 4;
    return ZwCreateWnfStateName(
             StateName,
             WnfTemporaryStateName,
             WnfDataScopeMachine,
             0,
             0LL,
             0x24u,
             SecurityDescriptor);
  }
  return result;
}
