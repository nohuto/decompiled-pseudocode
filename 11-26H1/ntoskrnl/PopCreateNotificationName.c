/*
 * XREFs of PopCreateNotificationName @ 0x140A3AE38
 * Callers:
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1404984A0 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140724E70 (ZwCreateWnfStateName.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 */

NTSTATUS __fastcall PopCreateNotificationName(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING String2; // [rsp+48h] [rbp-C0h] BYREF
  _WORD v4[16]; // [rsp+58h] [rbp-B0h] BYREF
  ACL *p_Acl; // [rsp+78h] [rbp-90h]
  _OWORD Src[3]; // [rsp+80h] [rbp-88h] BYREF
  _OWORD Sid[3]; // [rsp+B0h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E8h] [rbp-20h] BYREF

  *(_QWORD *)&String2.Length = 2752552LL;
  String2.Buffer = L"lpacPnpNotifications";
  RtlCreateAcl(&Acl, 0x148u, 2u);
  RtlpAddKnownAce((char *)&Acl, 2u, 0, 2031619, *(unsigned __int8 **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
  RtlpAddKnownAce((char *)&Acl, 2u, 0, 1179649, (unsigned __int8 *)RtlpBootStatHandleLock.StateSaveArea, 0);
  RtlpAddKnownAce((char *)&Acl, 2u, 0, 1179649, *(unsigned __int8 **)((char *)&RtlpBootStatHandleLock.116 + 4), 0);
  result = RtlDeriveCapabilitySidsFromName(&String2, Sid, Src);
  if ( result >= 0 )
  {
    RtlpAddKnownAce((char *)&Acl, 2u, 0, 1179649, (unsigned __int8 *)Src, 0);
    memset(v4, 0, sizeof(v4));
    LOBYTE(v4[0]) = 1;
    p_Acl = &Acl;
    v4[1] = 4;
    return ZwCreateWnfStateName(a1, 3LL);
  }
  return result;
}
