/*
 * XREFs of VslpConnectedStandbyWnfCallback @ 0x140A366E0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExpWnfReadStateData @ 0x1408E32C8 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140A36EFC (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall VslpConnectedStandbyWnfCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  struct _EX_RUNDOWN_REF *v4; // rdi
  int v5; // edi
  int v6; // ebx
  __int64 v8; // rcx
  char v9; // al
  int v10; // [rsp+30h] [rbp-69h] BYREF
  int v11; // [rsp+38h] [rbp-61h] BYREF
  __int128 v12; // [rsp+40h] [rbp-59h] BYREF
  __int64 v13; // [rsp+50h] [rbp-49h]
  _BYTE v14[8]; // [rsp+60h] [rbp-39h] BYREF
  char v15; // [rsp+68h] [rbp-31h]
  __int64 v16; // [rsp+70h] [rbp-29h]
  int v17; // [rsp+78h] [rbp-21h]

  v13 = 0LL;
  v12 = 0LL;
  memset_0(v14, 0, 0x68uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (struct _EX_RUNDOWN_REF *)ExpWnfAcquireSubscriptionNameInstance(v3, a1);
  if ( !v4 )
  {
    v5 = -1073741772;
    KeLeaveCriticalRegion();
    return (unsigned int)v5;
  }
  v6 = ExpWnfReadStateData((__int64)v4, &v11, &v12, 0x18u, &v10);
  ExReleaseRundownProtection_0(v4 + 1);
  v5 = 0;
  if ( v6 < 0 )
    v5 = v6;
  KeLeaveCriticalRegion();
  if ( v5 < 0 )
    return (unsigned int)v5;
  v8 = v12 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( (_QWORD)v12 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v8 = *((_QWORD *)&v12 + 1) - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  v9 = v15;
  if ( !v8 )
    v9 = 1;
  v17 = 0;
  v15 = v9;
  v16 = v13;
  return VslpEnterIumSecureMode(2u, 0x41u, 0, (__int64)v14);
}
