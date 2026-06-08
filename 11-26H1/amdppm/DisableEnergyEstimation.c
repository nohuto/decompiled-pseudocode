/*
 * XREFs of DisableEnergyEstimation @ 0x14003B21C
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14003B750 (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E5E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

void __fastcall DisableEnergyEstimation(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(void **)(a1 + 368);
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( v1 )
  {
    if ( qword_140015868 )
    {
      KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(a1 + 56));
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      ((void (__fastcall *)(__int64, __int64, __int64, __int64))qword_140015868)(v4, v3, v5, v6);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
    ExFreePoolWithTag(v1, (ULONG)1919119952);
    *(_QWORD *)(a1 + 368) = 0LL;
  }
}
