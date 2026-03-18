/*
 * XREFs of ?VidMmiEnsureSystemCommitMdl@@YAJPEAVVIDMM_SEGMENT@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14011B8A8
 * Callers:
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z @ 0x1400A4C5C (-VidMmiProbeAndLockAllocation@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_GLOBAL@@@Z.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57D0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1400F57F0 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14010BC7C (-VidMmiReleaseSystemCommitMdl@@YAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

__int64 __fastcall VidMmiEnsureSystemCommitMdl(struct VIDMM_GLOBAL **a1, struct VIDMM_GLOBAL_ALLOC *a2)
{
  struct _MDL *v4; // rax
  VIDMM_PROCESS *v5; // rcx
  VIDMM_PROCESS *v7; // rcx
  __int64 v8; // rcx
  struct _KAPC_STATE v10; // [rsp+38h] [rbp-50h] BYREF
  PRKPROCESS *v11; // [rsp+68h] [rbp-20h]

  if ( !*((_QWORD *)a2 + 7) )
  {
    if ( (*((_DWORD *)a2 + 7) & 0x50) != 0 )
    {
      *((_QWORD *)a2 + 7) = **((_QWORD **)a2 + 28);
    }
    else
    {
      v11 = *(PRKPROCESS **)(*((_QWORD *)a2 + 6) + 8LL);
      VIDMM_PROCESS::SafeAttach(v11, &v10);
      v4 = VidMmiProbeAndLockAllocation(a2, 0LL, *(_QWORD *)(*(_QWORD *)a2 + 16LL), a1[1]);
      *((_QWORD *)a2 + 7) = v4;
      if ( !v4 )
      {
        WdLogSingleEntry1(3LL, a2);
        WdLogGlobalForLineNumber = 1252;
        VIDMM_PROCESS::SafeDetach(v7, &v10);
        return 3221225495LL;
      }
      VIDMM_PROCESS::SafeDetach(v5, &v10);
    }
  }
  if ( (**((_DWORD **)a2 + 46) & 0x2000) == 0 )
    return 0LL;
  v8 = *((_QWORD *)a2 + 7);
  if ( (*(_BYTE *)(v8 + 10) & 5) != 0
     ? *(PVOID *)(v8 + 24)
     : MmMapLockedPagesSpecifyCache((PMDL)v8, 0, MmCached, 0LL, 0, 0x40000010u) )
  {
    return 0LL;
  }
  WdLogSingleEntry1(3LL, a2);
  WdLogGlobalForLineNumber = 1275;
  VidMmiReleaseSystemCommitMdl(a2);
  return 3221225495LL;
}
