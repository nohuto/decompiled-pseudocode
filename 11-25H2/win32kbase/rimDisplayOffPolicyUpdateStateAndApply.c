/*
 * XREFs of rimDisplayOffPolicyUpdateStateAndApply @ 0x140184450
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401842B0 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x140040AD0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EE958 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1400EFC80 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1400F2C3C (RIMCmAddContactSuppressionReasons.c)
 *     ApiSetGetPowerTransitionsState @ 0x14012E1E8 (ApiSetGetPowerTransitionsState.c)
 *     Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline @ 0x1401F1828 (Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall rimDisplayOffPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _DWORD v5[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v6[48]; // [rsp+60h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v6);
  ApiSetGetPowerTransitionsState(v5);
  if ( v5[0] )
  {
    if ( (unsigned int)Feature_PTPContactSuppression__private_IsEnabledDeviceUsageNoInline()
      && (*(_DWORD *)(a2 + 8) & 0x80u) != 0
      && *(_DWORD *)(a1 + 24) == 7
      && *(_DWORD *)(a1 + 1016) == 1 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, (unsigned int *)a2, 0x80u);
      *(_DWORD *)(a2 + 2496) = *(_DWORD *)(a2 + 64);
      *(_QWORD *)(a2 + 2512) = *(_QWORD *)(a2 + 72);
      v4 = *(_QWORD *)(a2 + 80);
      *(_QWORD *)(a2 + 2472) = v4;
      *(_QWORD *)(a2 + 2488) = v4;
    }
  }
  else if ( (*(_DWORD *)(a2 + 8) & 0x80u) == 0 )
  {
    RIMCmAddContactSuppressionReasons(a1, (unsigned int *)a2, 0x80u);
    *(_DWORD *)(a2 + 2444) |= 0x8000u;
  }
  DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v6);
}
