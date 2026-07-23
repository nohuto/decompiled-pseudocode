/*
 * XREFs of VfAllocateDomainCommonBuffer @ 0x140644B20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViGetAdapterInformation @ 0x140C2CF78 (ViGetAdapterInformation.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 *     ViHalTrackDomainCommonBuffer @ 0x140C2D424 (ViHalTrackDomainCommonBuffer.c)
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
  unsigned int v12; // ebx
  int v13; // eax

  Pool2 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( !ViGetAdapterInformation(a1) || (Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL)) != 0LL )
  {
    v13 = guard_dispatch_icall_no_overrides(RealDmaAdapter, a2);
    v12 = v13;
    if ( Pool2 )
    {
      if ( v13 < 0 )
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
  return v12;
}
