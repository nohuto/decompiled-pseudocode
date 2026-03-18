/*
 * XREFs of rimLidClosedPolicyUpdateStateAndApply @ 0x140136574
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1400EB1F8 (ApiSetGetPowerTransitionsState.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1400EB264 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013637C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall rimLidClosedPolicyUpdateStateAndApply(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  _DWORD v10[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v11[48]; // [rsp+60h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(W32GetUserSessionState(v6, v5, v7) + 171) && !*(_DWORD *)(v4 + 2128) )
  {
    DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v11, v8, v9);
    ApiSetGetPowerTransitionsState(v10);
    if ( !v10[13] && (a2[2] & 0x100) == 0 )
    {
      RIMCmAddContactSuppressionReasons(a1, a2, 0x100u);
      a2[611] |= 0x8000u;
    }
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v11);
  }
}
