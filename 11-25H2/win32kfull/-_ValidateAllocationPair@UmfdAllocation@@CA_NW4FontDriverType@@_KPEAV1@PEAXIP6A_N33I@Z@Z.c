/*
 * XREFs of ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1401DEB0C
 * Callers:
 *     ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1400B284C (-ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z.c)
 * Callees:
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1400B4930 (-TryProbeForRead@@YA_NPEAXII@Z.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

bool __fastcall UmfdAllocation::_ValidateAllocationPair(
        int a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        unsigned __int8 (__fastcall *a6)(void *, __int64, _QWORD))
{
  return *(void **)(a3 + 16) == a4
      && a1 == *(_DWORD *)(a3 + 4)
      && a2 == *(_QWORD *)(a3 + 8)
      && a5 == *(_DWORD *)(a3 + 24)
      && TryProbeForRead(a4)
      && a6(a4, a3 + 28, a5);
}
