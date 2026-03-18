/*
 * XREFs of HasPrivilege @ 0x1401D4E00
 * Callers:
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     HasTcbPrivilege @ 0x1401D4E90 (HasTcbPrivilege.c)
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 * Callees:
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A31F8 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 *     IsPrivileged @ 0x1401D4EB0 (IsPrivileged.c)
 *     IsPrivilegedEx @ 0x1401D4F70 (IsPrivilegedEx.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

char __fastcall HasPrivilege(int a1)
{
  __int64 v1; // rcx
  struct _KPROCESS *CurrentProcess; // rax
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+28h] [rbp-30h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  if ( !(unsigned int)Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline() )
    return (unsigned int)IsPrivileged(&RequiredPrivileges) != 0;
  CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v1);
  return IsPrivilegedEx(CurrentProcess, 0LL, &RequiredPrivileges);
}
