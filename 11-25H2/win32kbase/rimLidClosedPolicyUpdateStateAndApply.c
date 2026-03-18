/*
 * XREFs of rimLidClosedPolicyUpdateStateAndApply @ 0x1400F1384
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140040AD0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EE958 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C3C (RIMCmAddContactSuppressionReasons.c)
 *     ApiSetGetPowerTransitionsState @ 0x14012E1E8 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall rimLidClosedPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD v7[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v8[48]; // [rsp+60h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(W32GetUserSessionState(v6, v5) + 171) && !*(_DWORD *)(v4 + 2136) )
  {
    DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v8);
    ApiSetGetPowerTransitionsState(v7);
    if ( !v7[13] && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    {
      RIMCmAddContactSuppressionReasons(a1, a2, 256LL);
      *(_DWORD *)(a2 + 2444) |= 0x8000u;
    }
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v8);
  }
}
