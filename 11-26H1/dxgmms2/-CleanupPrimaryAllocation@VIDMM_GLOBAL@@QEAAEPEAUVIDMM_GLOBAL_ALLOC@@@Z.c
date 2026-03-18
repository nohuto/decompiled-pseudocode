/*
 * XREFs of ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14012500C
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400D09E8 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x140124788 (-InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     ?HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ @ 0x14003797C (-HasAnyResidencyReferences@VIDMM_ALLOC@@QEBA_NXZ.c)
 *     ?VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@@Z @ 0x140042F98 (-VidSchiValidateAllocationNotDisplayed@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC_NONPAGED@@.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400D498C (-RemoveCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z @ 0x1400E3EA4 (-UnreferencePinnedAllocation@VIDMM_DEVICE@@QEAA_NPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x14011D298 (-UnfaultCommitment@VIDMM_DEVICE@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::CleanupPrimaryAllocation(VIDMM_GLOBAL *this, struct VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r13
  char *v3; // rbp
  char v4; // r12
  char *v5; // rdi
  volatile signed __int32 *v7; // rcx
  char *v8; // r15
  char *v9; // r15
  char *v10; // rsi
  struct VIDMM_ALLOC *v11; // rbx
  int v13; // [rsp+20h] [rbp-58h]
  VIDMM_DEVICE *v15; // [rsp+90h] [rbp+18h]

  v2 = *(_QWORD *)a2;
  v3 = (char *)a2 + 112;
  v4 = 0;
  v5 = (char *)*((_QWORD *)a2 + 14);
  v7 = *(volatile signed __int32 **)(*((_QWORD *)this + 5040) + 8LL * ((*(_DWORD *)(*(_QWORD *)a2 + 52LL) >> 2) & 0x3F));
  v15 = (VIDMM_DEVICE *)v7;
  while ( v5 != v3 )
  {
    v8 = v5;
    v5 = *(char **)v5;
    v9 = v8 - 16;
    v10 = *(char **)v9;
    if ( *(char **)v9 != v9 )
    {
      do
      {
        v11 = (struct VIDMM_ALLOC *)(v10 - 40);
        v10 = *(char **)v10;
        if ( (*((_DWORD *)v11 + 7) & 3) == 1 )
          VIDMM_DEVICE::UnfaultCommitment((VIDMM_DEVICE *)v7, v11);
        if ( (*((_DWORD *)v11 + 7) & 3) != 0 )
        {
          VIDMM_DEVICE::UnreferencePinnedAllocation(*((VIDMM_DEVICE **)v11 + 1), v11, 1);
          if ( !VIDMM_ALLOC::HasAnyResidencyReferences(v11) )
          {
            VIDMM_DEVICE::RemoveCommitment(*((VIDMM_GLOBAL ***)v11 + 1), v11, 1);
            v4 = 1;
          }
          v7 = (volatile signed __int32 *)*((_QWORD *)a2 + 46);
          if ( _InterlockedExchangeAdd(v7 + 4, 0xFFFFFFFF) == 1 )
            VidSchiValidateAllocationNotDisplayed(
              *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)this + 2) + 744LL),
              *((struct VIDMM_GLOBAL_ALLOC_NONPAGED **)a2 + 46));
        }
      }
      while ( v10 != v9 );
      v7 = (volatile signed __int32 *)v15;
      v3 = (char *)a2 + 112;
    }
    if ( (*(_DWORD *)(v2 + 56) & 1) != 0 && !*((_DWORD *)a2 + 19) )
    {
      LOBYTE(v13) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, _QWORD, _QWORD, int, _QWORD))(*(_QWORD *)v7 + 240LL))(
        v7,
        v2,
        0LL,
        0LL,
        v13,
        0LL);
    }
    v7 = (volatile signed __int32 *)v15;
  }
  return v4;
}
