/*
 * XREFs of RaidNvmeIceQueryNvmeCapabilities @ 0x14007A518
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNvmeIceQuerySupport @ 0x14007A58C (RaidNvmeIceQuerySupport.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidNvmeIceQueryNvmeCapabilities(__int64 a1, void *a2, unsigned int a3)
{
  __int64 Support; // rax
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(_QWORD, __int64, void *); // rax

  if ( a3 < 0x20 )
    return 3238002694LL;
  memset_0(a2, 0, a3);
  Support = RaidNvmeIceQuerySupport(a1);
  if ( Support
    && (v7 = *(_QWORD *)(Support + 48)) != 0
    && (v8 = *(__int64 (__fastcall **)(_QWORD, __int64, void *))(v7 + 136)) != 0LL )
  {
    return v8(*(_QWORD *)(v7 + 8), a1, a2);
  }
  else
  {
    return 3238002690LL;
  }
}
