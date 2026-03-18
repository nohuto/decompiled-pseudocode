/*
 * XREFs of rimDisplayOffPolicyUpdateStateAndApply @ 0x1401AF7C0
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1401AF62C (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1400EB1F8 (ApiSetGetPowerTransitionsState.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ @ 0x1400EB264 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_POWERTRANSITIONSSTATE@@@@QEAA@XZ.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x14012C300 (RIMCmRemoveContactSuppressionReasons.c)
 *     RIMCmAddContactSuppressionReasons @ 0x14012C734 (RIMCmAddContactSuppressionReasons.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x14013637C (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall rimDisplayOffPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rax
  _DWORD v8[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v9[48]; // [rsp+60h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  DomainShared<DLT_POWERTRANSITIONSSTATE>::DomainExclusive<>::ObjectLock<>::ObjectLock<>((__int64)v9, v4, v5);
  ApiSetGetPowerTransitionsState(v8);
  v6 = *(_DWORD *)(a2 + 8) & 0x80;
  if ( v8[0] )
  {
    if ( v6 && *(_DWORD *)(a1 + 24) == 7 && *(_DWORD *)(a1 + 1016) == 1 )
    {
      RIMCmRemoveContactSuppressionReasons(a1, (unsigned int *)a2, 0x80u);
      *(_DWORD *)(a2 + 2496) = *(_DWORD *)(a2 + 64);
      *(_QWORD *)(a2 + 2512) = *(_QWORD *)(a2 + 72);
      v7 = *(_QWORD *)(a2 + 80);
      *(_QWORD *)(a2 + 2472) = v7;
      *(_QWORD *)(a2 + 2488) = v7;
    }
  }
  else if ( !v6 )
  {
    RIMCmAddContactSuppressionReasons(a1, (unsigned int *)a2, 0x80u);
    *(_DWORD *)(a2 + 2444) |= 0x8000u;
  }
  DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>((__int64)v9);
}
