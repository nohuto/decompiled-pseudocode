/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x140B3FE50
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     RtlIsZeroMemory @ 0x1404D36B0 (RtlIsZeroMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140729A40 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x140729BE0 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     RtlpAddKnownAce @ 0x1409A8880 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409A8F20 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A7C820 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A7D920 (RtlCreateSecurityDescriptor.c)
 */

NTSTATUS __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  _WNF_STATE_NAME *v3; // rbx
  char v7; // si
  char v8; // r12
  NTSTATUS result; // eax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // ecx
  int *v13; // rdx
  int v14; // r8d
  int v15; // eax
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v17; // [rsp+60h] [rbp-59h]
  _WNF_STATE_NAME StateName; // [rsp+68h] [rbp-51h] BYREF
  ACL Acl; // [rsp+70h] [rbp-49h] BYREF

  v3 = (_WNF_STATE_NAME *)(a2 + 1824);
  v17 = 0LL;
  StateName = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v7 = 0;
  v8 = 0;
  if ( RtlIsZeroMemory((PVOID)(a2 + 1824), 8uLL) )
  {
    RtlCreateAcl(&Acl, 0x58u, 2u);
    RtlpAddKnownAce((char *)&Acl, 2u, 0, 1, *(unsigned __int8 **)&RtlpBootStatHandleLock.WaitRegister.Flags, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    result = ZwCreateWnfStateName(&StateName, WnfTemporaryStateName, WnfDataScopeMachine, 0, 0LL, 0, SecurityDescriptor);
    if ( result < 0 )
      return result;
    PspLockProcessExclusive(a2, a1, v10, v11);
    if ( RtlIsZeroMemory(v3, 8uLL) )
    {
      v8 = 1;
      *v3 = StateName;
      *(_QWORD *)(a2 + 1860) = *(_QWORD *)(a3 + 36);
      StateName = 0LL;
    }
    PspUnlockProcessExclusive(a2, a1);
  }
  v12 = 0;
  v13 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v3->Data;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)v3[2].Data;
  *(_OWORD *)(a3 + 32) = *(_OWORD *)v3[4].Data;
  do
  {
    v14 = *v13 & 0x7FFFFFFF;
    *v13 = v14;
    if ( v8 )
    {
      v15 = *(_DWORD *)(a3 + 36);
      if ( _bittest(&v15, v12) )
      {
        if ( v14 )
          v7 = 1;
      }
    }
    ++v12;
    ++v13;
  }
  while ( v12 < 7 );
  if ( v7 )
    ZwUpdateWnfStateData(v3, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( !RtlIsZeroMemory(&StateName, 8uLL) )
    ZwDeleteWnfStateName(&StateName);
  return 0;
}
