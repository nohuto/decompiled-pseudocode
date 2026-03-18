/*
 * XREFs of ?PbmmDestroyPhysicalAllocation@@YAXPEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x140052224
 * Callers:
 *     ?DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1400AF460 (-DestroyPhysicalAllocation@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 */

void __fastcall PbmmDestroyPhysicalAllocation(struct PBMM_PHYSICAL_ALLOC ***a1)
{
  struct PBMM_PHYSICAL_ALLOC **v1; // rdx
  struct PBMM_PHYSICAL_ALLOC **v2; // rax

  v1 = *a1;
  if ( (*a1)[1] != (struct PBMM_PHYSICAL_ALLOC *)a1 || (v2 = a1[1], *v2 != (struct PBMM_PHYSICAL_ALLOC *)a1) )
    __fastfail(3u);
  *v2 = (struct PBMM_PHYSICAL_ALLOC *)v1;
  v1[1] = (struct PBMM_PHYSICAL_ALLOC *)v2;
  operator delete(a1);
}
