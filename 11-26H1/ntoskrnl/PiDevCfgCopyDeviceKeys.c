/*
 * XREFs of PiDevCfgCopyDeviceKeys @ 0x140A47944
 * Callers:
 *     PiDevCfgResetDeviceKeyCallback @ 0x1407ADFC0 (PiDevCfgResetDeviceKeyCallback.c)
 *     PiDevCfgConfigureDeviceInterface @ 0x140A46004 (PiDevCfgConfigureDeviceInterface.c)
 *     PiDevCfgConfigureDeviceKeyCallback @ 0x140A496A0 (PiDevCfgConfigureDeviceKeyCallback.c)
 *     PipCommitPendingOsExtensionResource @ 0x140CCCD30 (PipCommitPendingOsExtensionResource.c)
 *     PipCommitPendingService @ 0x140CCCF60 (PipCommitPendingService.c)
 * Callees:
 *     PiDevCfgPushCopyKeyEntry @ 0x1404DD6EC (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x1404E367C (PiDevCfgPopCopyKeyEntry.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x14072B700 (ZwSetSecurityObject.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140A49800 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgCopyDeviceKey @ 0x140A49C64 (PiDevCfgCopyDeviceKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgCopyDeviceKeys(void *a1, void *a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rdx
  int v9; // edi
  int v10; // ebx
  _QWORD *v11; // rbx
  PVOID *v12; // rax
  void *v13; // r14
  void *v14; // r15
  int v15; // esi
  SECURITY_INFORMATION SecurityInformation; // [rsp+40h] [rbp-30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  HANDLE v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp-8h]
  int v23; // [rsp+A0h] [rbp+30h] BYREF

  v23 = a3;
  SecurityDescriptor = 0LL;
  SecurityInformation = 0;
  v5 = a3 >> 1;
  P = &v21;
  Handle = 0LL;
  v20 = 0LL;
  LOBYTE(v5) = (a3 & 2) != 0;
  v21 = (__int64)&v21;
  if ( (int)PiDevCfgGetKeySecurityDescriptor(a1, v5, &SecurityDescriptor, &SecurityInformation) >= 0 )
  {
    ZwSetSecurityObject(a2, SecurityInformation, SecurityDescriptor);
    ExFreePoolWithTag(SecurityDescriptor, 0);
  }
  v9 = PiDevCfgPushCopyKeyEntry((HANDLE *)&v21, a1, a2, a3);
  while ( v9 >= 0 )
  {
    if ( !PiDevCfgPopCopyKeyEntry(&v21, &Handle, &v20, &v23) )
      break;
    v10 = v23;
    v9 = PiDevCfgCopyDeviceKey(Handle, v23, (__int64)&v21, a4);
    if ( (v10 & 0x40000000) != 0 )
    {
      ZwClose(Handle);
      ZwClose(v20);
    }
  }
  while ( (__int64 *)v21 != &v21 )
  {
    v11 = P;
    if ( *(__int64 **)P != &v21 || (v12 = (PVOID *)*((_QWORD *)P + 1), *v12 != P) )
      __fastfail(3u);
    P = (PVOID)*((_QWORD *)P + 1);
    *v12 = &v21;
    v13 = (void *)v11[2];
    v14 = (void *)v11[3];
    v15 = *((_DWORD *)v11 + 8);
    ExFreePoolWithTag(v11, 0);
    if ( !v11 )
      break;
    if ( (v15 & 0x40000000) != 0 )
    {
      ZwClose(v13);
      ZwClose(v14);
    }
  }
  return (unsigned int)v9;
}
