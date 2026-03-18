/*
 * XREFs of HasPrivilege @ 0x1401AF490
 * Callers:
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     HasTcbPrivilege @ 0x1401AF520 (HasTcbPrivilege.c)
 * Callees:
 *     IsPrivileged @ 0x14012BD90 (IsPrivileged.c)
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x1401AF438 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     IsPrivilegedEx @ 0x1401AF540 (IsPrivilegedEx.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

char __fastcall HasPrivilege(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+28h] [rbp-30h] BYREF

  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  if ( !(unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
    return (unsigned int)IsPrivileged(&RequiredPrivileges) != 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v2, v1);
  return IsPrivilegedEx(CurrentProcess, 0LL, &RequiredPrivileges);
}
