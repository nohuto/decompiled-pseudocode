/*
 * XREFs of VfAllocateDomainCommonBuffer @ 0x140604B50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     ViGetAdapterInformation @ 0x140B78EA0 (ViGetAdapterInformation.c)
 *     ViGetRealDmaAdapter @ 0x140B7910C (ViGetRealDmaAdapter.c)
 *     ViHalTrackDomainCommonBuffer @ 0x140B79330 (ViHalTrackDomainCommonBuffer.c)
 */

__int64 __fastcall VfAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  _QWORD *Pool2; // rdi
  __int64 RealDmaAdapter; // rbp
  unsigned int v11; // ebx
  int v12; // eax

  Pool2 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( !ViGetAdapterInformation(a1) || (Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL)) != 0LL )
  {
    v12 = guard_dispatch_icall_no_overrides(RealDmaAdapter);
    v11 = v12;
    if ( Pool2 )
    {
      if ( v12 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        Pool2[2] = *a8;
        ViHalTrackDomainCommonBuffer(Pool2);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
