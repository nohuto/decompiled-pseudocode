/*
 * XREFs of ?BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z @ 0x1400BD090
 * Callers:
 *     <none>
 * Callees:
 *     ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MDL@@@Z @ 0x1400BD9CC (-MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MDL@.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_APERTURE_SEGMENT::BeginTemporaryResourceAccess(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        struct VIDMM_TEMPORARY_RESOURCE_LEGACY *a3)
{
  unsigned __int64 *v3; // rdi
  _QWORD *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  unsigned __int64 LogicalAddress; // rax
  int v11; // eax
  char v13; // [rsp+20h] [rbp-38h]

  v3 = (unsigned __int64 *)((char *)a3 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7[3] = a2;
    v7[4] = *v3;
    v7[5] = *((_QWORD *)a3 + 4);
    WdLogGlobalForLineNumber = 1799;
  }
  v8 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40098LL) )
  {
    if ( (*((_DWORD *)a3 + 10) & 1) == 0 )
    {
      v9 = *((_QWORD *)a3 + 2);
      LogicalAddress = VidMmiGetLogicalAddress(*(void **)(*(_QWORD *)a2 + 344LL), *v3);
      v13 = 0;
      v11 = SysMmMapPagesToIommu(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
              LogicalAddress,
              v9 + 48,
              (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12,
              v13,
              3,
              a2);
      v8 = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(3LL, v11);
        WdLogGlobalForLineNumber = 1815;
      }
    }
  }
  VIDMM_APERTURE_SEGMENT::MapTemporaryResource(this, a2, *v3, *((_QWORD *)a3 + 4), *((const struct _MDL **)a3 + 2));
  return v8;
}
