/*
 * XREFs of ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012AEC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ?FenceStorageCommitted@VIDMM_FENCE_STORAGE_PAGE@@SAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A5124 (-FenceStorageCommitted@VIDMM_FENCE_STORAGE_PAGE@@SAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_ALLOC@@_K2_N@Z @ 0x14010384C (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@PEBUVIDMM_PHYSICAL_AL.c)
 *     ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1PEAU2@@Z @ 0x140103CF0 (-BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K1.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x14010418C (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x140104254 (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x1401103FC (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::CommitResource(
        struct VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v3; // r14
  struct _MDL *v5; // rdi
  VIDMM_CPU_HOST_APERTURE *v6; // rcx
  int v7; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  PMDL v11; // rax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx

  v3 = *(struct VIDMM_CPU_HOST_APERTURE_RANGE **)a2;
  if ( g_IsInternalReleaseOrDbg )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = v3;
    WdLogGlobalForLineNumber = 1402;
  }
  v5 = 0LL;
  if ( !*((_BYTE *)v3 + 40) )
    goto LABEL_19;
  v6 = this[64];
  if ( v6 )
  {
    v7 = VIDMM_CPU_HOST_APERTURE::MapRange(
           v6,
           *((struct VIDMM_CPU_HOST_APERTURE_RANGE **)a2 + 18),
           a2,
           *((_QWORD *)a2 + 15),
           *((_QWORD *)a2 + 2),
           0);
    if ( v7 < 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1437;
      DxgkLogInternalTriageEvent(v8, 0x40000LL);
      goto LABEL_7;
    }
    v11 = VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
            this[64],
            *((const struct VIDMM_CPU_HOST_APERTURE_RANGE **)a2 + 18),
            *((_QWORD *)a2 + 15),
            *((_QWORD *)a2 + 2),
            0LL);
  }
  else
  {
    v12 = *((_QWORD *)a2 + 15);
    v13 = *(_QWORD *)(*((_QWORD *)v3 + 6) + 16LL);
    v11 = (*(_DWORD *)(*((_QWORD *)this[1] + 3) + 444LL) & 8) != 0
        ? VidMmiBuildMdlFromMdl(v13, *((_QWORD *)a2 + 2), *(struct _MDL **)(*((_QWORD *)a2 + 16) + 32LL), v12 / 4096)
        : VidMmiBuildMdlForContiguousMmIo(
            v13,
            *((_QWORD *)a2 + 2),
            (union _LARGE_INTEGER)(*(_QWORD *)(*((_QWORD *)a2 + 16) + 32LL) + v12));
  }
  v5 = v11;
  if ( v11 )
  {
LABEL_19:
    v7 = VIDMM_MEMORY_SEGMENT::TransferToSegment((VIDMM_MEMORY_SEGMENT *)this, a2, v5, 0);
    if ( v7 >= 0 )
    {
      if ( (*((_DWORD *)v3 + 7) & 0x4000) == 0
        || (v7 = VIDMM_FENCE_STORAGE_PAGE::FenceStorageCommitted(this[1], v3), v7 >= 0) )
      {
        *((_QWORD *)this[1] + 5039) += *((_QWORD *)a2 + 2) >> 12;
        return (unsigned int)v7;
      }
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1491;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    v7 = -1073741801;
  }
LABEL_7:
  v9 = *((_QWORD *)a2 + 18);
  if ( v9 && *(_DWORD *)(v9 + 36) != -1 )
    VIDMM_CPU_HOST_APERTURE::UnmapRange(this[64], (struct VIDMM_CPU_HOST_APERTURE_RANGE ***)v9);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v7;
}
