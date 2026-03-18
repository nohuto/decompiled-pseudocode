/*
 * XREFs of ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400F9384
 * Callers:
 *     TrimSegmentOfferLists @ 0x1400B292C (TrimSegmentOfferLists.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F98E0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTR.c)
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z @ 0x1400FB3E4 (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EE@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1400F9448 (-TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferLists(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  int v8; // esi
  __int64 v9; // r8
  _QWORD *i; // rbx
  int v12; // [rsp+20h] [rbp-28h]

  v8 = VIDMM_SEGMENT::TrimOfferList(a1, a1 + 312, a2, a3, a4);
  if ( v8 < 0 )
    v8 = VIDMM_SEGMENT::TrimOfferList(a1, a1 + 328, a2, a3, a4);
  if ( (a2 & 8) != 0 )
  {
    for ( i = (_QWORD *)(a1 + 264);
          (_QWORD *)*i != i;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int, _QWORD))(**(_QWORD **)(a1 + 16) + 240LL))(
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(*i - 240LL),
            v9,
            0LL,
            v12,
            0LL) )
    {
      LOBYTE(v9) = 1;
      LOBYTE(v12) = 0;
    }
  }
  return (unsigned int)v8;
}
