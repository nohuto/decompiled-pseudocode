/*
 * XREFs of EtwpCheckCurrentUserProcessAccess @ 0x14093B234
 * Callers:
 *     EtwpGetPrivateSessionTraceHandle @ 0x14082CB64 (EtwpGetPrivateSessionTraceHandle.c)
 *     EtwpNotifyGuid @ 0x140938434 (EtwpNotifyGuid.c)
 *     EtwpIsRegEntryAllowed @ 0x14093AFA4 (EtwpIsRegEntryAllowed.c)
 * Callees:
 *     ObpGetObjectSecurity @ 0x1408EF250 (ObpGetObjectSecurity.c)
 *     EtwpAccessCheck @ 0x140931F90 (EtwpAccessCheck.c)
 *     ObReleaseObjectSecurityEx @ 0x14093C920 (ObReleaseObjectSecurityEx.c)
 */

__int64 __fastcall EtwpCheckCurrentUserProcessAccess(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  char v6; // [rsp+38h] [rbp+10h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0;
  SecurityDescriptor = 0LL;
  ObpGetObjectSecurity(a1, &SecurityDescriptor, &v6);
  v2 = EtwpAccessCheck(SecurityDescriptor, 0x1FFFFFu, 0LL);
  LOBYTE(v3) = v6;
  v4 = v2;
  ObReleaseObjectSecurityEx(SecurityDescriptor, v3, a1);
  return v4;
}
