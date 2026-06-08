/*
 * XREFs of EnableEnergyEstimation @ 0x1400284AC
 * Callers:
 *     InitializeEnergyEstimationForEfficiencyClass @ 0x14004724C (InitializeEnergyEstimationForEfficiencyClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1400102F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EnableEnergyEstimation(__int64 a1)
{
  int v2; // ebx
  __int64 Pool2; // rax
  void *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( qword_140019430 )
  {
    Pool2 = ExAllocatePool2(64LL, 136LL, 1919119952LL);
    v4 = (void *)Pool2;
    if ( Pool2 )
    {
      v5 = *(unsigned int *)(a1 + 56);
      *(_QWORD *)(a1 + 368) = Pool2;
      KeProcessorGroupAffinity(&Affinity, v5);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v2 = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_140019430)(v7, v6, v8, v9);
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v2 < 0 )
      {
        ExFreePoolWithTag(v4, (ULONG)1919119952);
        *(_QWORD *)(a1 + 368) = 0LL;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
