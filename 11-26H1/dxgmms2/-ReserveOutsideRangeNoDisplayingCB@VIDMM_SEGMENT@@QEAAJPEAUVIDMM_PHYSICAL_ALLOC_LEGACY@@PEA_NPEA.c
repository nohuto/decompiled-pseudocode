/*
 * XREFs of ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B7130
 * Callers:
 *     <none>
 * Callees:
 *     ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140008B38 (-HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ.c)
 *     ?EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009DCA0 (-EnsureFlipQueuesSuspendedForMove@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400B69E0 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1400BF6E0 (-AllocateOutside@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAUVIDMM_PHYSICAL_ALLOC@@PEAT_LARGE_INTEGER@@P.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1400FBCD4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::ReserveOutsideRangeNoDisplayingCB(
        VIDMM_LINEAR_POOL **this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        bool *a3,
        unsigned __int64 *a4)
{
  int Outside; // edi
  unsigned __int8 v8; // r9
  unsigned __int8 v9; // r9
  int v10; // eax
  void *v11; // rdx

  Outside = 0;
  if ( VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB(a2) )
  {
    Outside = VIDMM_LINEAR_POOL::AllocateOutside(
                this[32],
                *((_QWORD *)a2 + 2),
                *((_DWORD *)a2 + 8),
                v8,
                *a4,
                a4[1],
                1,
                0,
                a2,
                (union _LARGE_INTEGER *)a2 + 15,
                (void **)a2 + 14);
    if ( Outside >= 0
      || (v10 = VIDMM_LINEAR_POOL::AllocateOutside(
                  this[32],
                  *((_QWORD *)a2 + 2),
                  *((_DWORD *)a2 + 8),
                  v9,
                  *a4,
                  a4[1],
                  0,
                  1,
                  a2,
                  (union _LARGE_INTEGER *)a2 + 15,
                  (void **)a2 + 14),
          Outside = v10,
          v10 >= 0) )
    {
      v11 = (void *)*((_QWORD *)a2 + 17);
      *((_QWORD *)a2 + 16) = this;
      VIDMM_LINEAR_POOL::Free(this[32], v11);
      *((_QWORD *)a2 + 17) = *((_QWORD *)a2 + 14);
      *((_BYTE *)this + 480) = 1;
      if ( VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(*(VIDMM_GLOBAL_ALLOC_NONPAGED **)(*(_QWORD *)a2 + 368LL)) )
        VIDMM_GLOBAL::EnsureFlipQueuesSuspendedForMove(this[1]);
    }
    else
    {
      WdLogSingleEntry1(3LL, v10);
      WdLogGlobalForLineNumber = 5305;
    }
  }
  return (unsigned int)Outside;
}
