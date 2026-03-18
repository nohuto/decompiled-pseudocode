/*
 * XREFs of PspAllocateAndQueryProcessNotificationChannel @ 0x140B3DD70
 * Callers:
 *     NtQueryInformationProcess @ 0x140A4A1F0 (NtQueryInformationProcess.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x140487FB8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x14048FE44 (PspUnlockProcessExclusive.c)
 *     RtlIsZeroMemory @ 0x1404D9FD0 (RtlIsZeroMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x140724E70 (ZwCreateWnfStateName.c)
 *     ZwDeleteWnfStateName @ 0x140725010 (ZwDeleteWnfStateName.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     RtlpAddKnownAce @ 0x1409D7990 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x1409D8030 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140A6B0F0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140A6C2F0 (RtlCreateSecurityDescriptor.c)
 */

__int64 __fastcall PspAllocateAndQueryProcessNotificationChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v7; // si
  char v8; // r12
  __int64 result; // rax
  __int64 v10; // r8
  struct _KLOCK_ENTRIES *v11; // r9
  unsigned int v12; // ecx
  int *v13; // rdx
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rdx
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-79h] BYREF
  __int64 v18; // [rsp+60h] [rbp-59h]
  __int64 v19; // [rsp+68h] [rbp-51h] BYREF
  ACL Acl; // [rsp+70h] [rbp-49h] BYREF

  v3 = a2 + 1824;
  v18 = 0LL;
  v19 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v7 = 0;
  v8 = 0;
  if ( RtlIsZeroMemory((_BYTE *)(a2 + 1824), 8uLL) )
  {
    RtlCreateAcl(&Acl, 0x58u, 2u);
    RtlpAddKnownAce((char *)&Acl, 2u, 0, 1, (unsigned __int8 *)RtlpBootStatHandleLock.StateSaveArea, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    result = ZwCreateWnfStateName((__int64)&v19, 3LL);
    if ( (int)result < 0 )
      return result;
    PspLockProcessExclusive(a2, a1, v10, v11);
    if ( RtlIsZeroMemory((_BYTE *)v3, 8uLL) )
    {
      v8 = 1;
      *(_QWORD *)v3 = v19;
      *(_QWORD *)(a2 + 1860) = *(_QWORD *)(a3 + 36);
      v19 = 0LL;
    }
    PspUnlockProcessExclusive(a2, a1);
  }
  v12 = 0;
  v13 = (int *)(a3 + 8);
  *(_OWORD *)a3 = *(_OWORD *)v3;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(v3 + 32);
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
    ZwUpdateWnfStateData(v3, 0LL);
  if ( !RtlIsZeroMemory(&v19, 8uLL) )
    ZwDeleteWnfStateName((__int64)&v19, v16);
  return 0LL;
}
