/*
 * XREFs of ?EndTemporaryResourceAccess@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z @ 0x1400BC7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::EndTemporaryResourceAccess(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        struct VIDMM_TEMPORARY_RESOURCE_LEGACY *a3)
{
  unsigned __int64 *v3; // rsi
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  unsigned __int64 LogicalAddress; // rax
  char v11; // [rsp+20h] [rbp-28h]

  v3 = (unsigned __int64 *)((char *)a3 + 24);
  if ( g_IsInternalReleaseOrDbg )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v7[3] = a2;
    v7[4] = *v3;
    v7[5] = *((_QWORD *)a3 + 4);
    WdLogGlobalForLineNumber = 1293;
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 40098LL) )
  {
    if ( (*((_DWORD *)a3 + 10) & 1) == 0 )
    {
      v8 = *((_QWORD *)a3 + 4);
      v9 = *((_QWORD *)a3 + 2);
      LogicalAddress = VidMmiGetLogicalAddress(*(void **)(*(_QWORD *)a2 + 344LL), *v3);
      v11 = 0;
      SysMmUnmapPagesFromIommu(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
        LogicalAddress,
        v9,
        v8 >> 12,
        v11,
        3,
        a2);
    }
  }
}
