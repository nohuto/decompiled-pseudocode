/*
 * XREFs of HalAllocateHardwareCounters @ 0x140783950
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140211F80 (KeQueryActiveProcessorCountEx.c)
 *     KeAddProcessorAffinityEx @ 0x140248080 (KeAddProcessorAffinityEx.c)
 *     HalpGetFullPmuOwnership @ 0x14057CBC0 (HalpGetFullPmuOwnership.c)
 *     HalpReleasePmuAccessRequest @ 0x140582CC0 (HalpReleasePmuAccessRequest.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpRequestPmuAccess @ 0x140B5F240 (HalpRequestPmuAccess.c)
 */

NTSTATUS __stdcall HalAllocateHardwareCounters(
        PGROUP_AFFINITY GroupAffinty,
        ULONG GroupCount,
        PPHYSICAL_COUNTER_RESOURCE_LIST ResourceList,
        PHANDLE CounterSetHandle)
{
  __int64 v5; // r14
  NTSTATUS FullPmuOwnership; // ebx
  __int64 v9; // rdx
  __int64 Group; // rcx
  unsigned __int64 Mask; // r8
  unsigned int v12; // ebx
  ULONG ActiveProcessorCount; // edi
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[33]; // [rsp+48h] [rbp-B8h] BYREF

  v5 = GroupCount;
  memset_0(&v15, 0, 0x108uLL);
  if ( CounterSetHandle )
  {
    *CounterSetHandle = 0LL;
    FullPmuOwnership = HalpRequestPmuAccess();
    if ( FullPmuOwnership < 0 )
      return FullPmuOwnership;
    if ( !GroupAffinty && !ResourceList )
    {
      FullPmuOwnership = HalpGetFullPmuOwnership((__int64 *)CounterSetHandle);
      if ( FullPmuOwnership >= 0 )
      {
        KeQueryActiveProcessorCountEx(0xFFFFu);
        _InterlockedAdd((_DWORD *)&HalpPmuArbiter.Header.WaitListHead.Flink + 1, 0x80000000);
      }
LABEL_23:
      HalpReleasePmuAccessRequest();
      return FullPmuOwnership;
    }
    v15 = 2097153LL;
    memset_0(v16, 0, 0x100uLL);
    if ( GroupAffinty )
    {
      if ( (_DWORD)v5 )
      {
        v9 = v5;
        while ( 1 )
        {
          Group = GroupAffinty->Group;
          Mask = GroupAffinty->Mask;
          if ( (unsigned __int16)v15 > (unsigned __int16)Group )
            goto LABEL_14;
          if ( WORD1(v15) > (unsigned __int16)Group )
            break;
LABEL_15:
          ++GroupAffinty;
          if ( !--v9 )
            goto LABEL_19;
        }
        LOWORD(v15) = Group + 1;
LABEL_14:
        v16[Group] |= Mask;
        goto LABEL_15;
      }
    }
    else
    {
      v12 = 0;
      ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
      if ( ActiveProcessorCount )
      {
        do
          KeAddProcessorAffinityEx((unsigned __int16 *)&v15, v12++);
        while ( v12 < ActiveProcessorCount );
      }
    }
LABEL_19:
    if ( HalpProfileInterface[14] )
    {
      FullPmuOwnership = guard_dispatch_icall_no_overrides((__int64)&v15, (__int64)ResourceList);
      if ( FullPmuOwnership >= 0 )
        _InterlockedAdd((_DWORD *)&HalpPmuArbiter.Header.WaitListHead.Flink + 1, 0);
    }
    else
    {
      FullPmuOwnership = -1073741670;
    }
    goto LABEL_23;
  }
  return -1073741811;
}
