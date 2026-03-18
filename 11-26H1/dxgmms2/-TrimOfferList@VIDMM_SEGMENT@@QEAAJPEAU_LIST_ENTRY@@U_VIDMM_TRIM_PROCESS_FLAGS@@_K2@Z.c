/*
 * XREFs of ?TrimOfferList@VIDMM_SEGMENT@@QEAAJPEAU_LIST_ENTRY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1400F9448
 * Callers:
 *     ?TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z @ 0x1400F9384 (-TrimOfferLists@VIDMM_SEGMENT@@QEAAJU_VIDMM_TRIM_PROCESS_FLAGS@@_K1@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z @ 0x14002FE80 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@E@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@U_VIDMM_TRIM_PROCESS_FLAGS@@_K2@Z @ 0x1400B7A28 (-TrimAllocation@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@U_VIDMM_TRIM_PROCESS_FLAGS@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::TrimOfferList(
        __int64 a1,
        _QWORD *a2,
        char a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // r8
  _QWORD *v14; // rax
  _BYTE v15[32]; // [rsp+30h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v15,
    (struct DXGPUSHLOCK *const)(*(_QWORD *)(a1 + 8) + 40248LL),
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40256LL) != (_QWORD)KeGetCurrentThread());
  v9 = (_QWORD *)*a2;
  while ( 1 )
  {
    v10 = v9;
    if ( v9 == a2 )
      break;
    v12 = v9 - 12;
    v9 = (_QWORD *)*v9;
    v13 = *v12;
    if ( *(_WORD *)(*(_QWORD *)(*v12 + 368LL) + 8LL) != 1 )
    {
      if ( (_QWORD *)v9[1] != v10 || (v14 = (_QWORD *)v10[1], (_QWORD *)*v14 != v10) )
        __fastfail(3u);
      *v14 = v9;
      v9[1] = v14;
      *v10 = 0LL;
      if ( *(_DWORD *)(v13 + 72) == 2
        && v12[8] == a1
        && *(_WORD *)(*(_QWORD *)(v13 + 368) + 8LL) == 2
        && (int)VIDMM_SEGMENT::TrimAllocation(a1, (__int64)v12, a3, a4, a5) >= 0 )
      {
        break;
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
  return 3221225473LL;
}
